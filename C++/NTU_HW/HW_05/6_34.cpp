#include<bits/stdc++.h>
using namespace std;

//setting up the random function
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1,1000);

//use function so that the game can restart easier
void game(){
	const int target=dist(rd);
	int guess=-1;

	cout<<"I have a number between 1 and 1000.\n";
	cout<<"Can you guess my number?\n";
	cout<<"Please type your first guess.\n";

	//continue until the player guesses correctly
	while(guess!=target){
		cin >>guess;
		if(guess>target)cout<<"Too high. Try again.\n";
		if(guess<target)cout<<"Too low. Try again.\n";
	}

	//leave the loop because player guesses correctly
	cout<<"Excellent! You guessed the number! Would you like to play again (y or n)?\n";
	char option;
	cin >>option;
	//player decides to play again
	if(option=='y')game();
	//exit
	else return;

}

int main(){
	game();
	return 0;
}
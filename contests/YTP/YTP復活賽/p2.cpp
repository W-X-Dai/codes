#include <bits/stdc++.h>
using namespace std;
int board[10][10], n;
void show_board(){
	/*cout << "--------------\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(board[i][j] == -1) cout << "*";
			else cout << board[i][j];
		}
		cout << "\n";
	}*/
}
bool check(int row, int col, int c){
	//cout << "check " << row << " " << col << " " << c << "\n";
	show_board();
	if(n == 9){
		for(int i=0;i<n;i++)if(board[row][i] == c)return false;
		for(int i=0;i<n;i++)if(board[i][col] == c)return false;
		int y = (int)(row/3) * 3, x = (int)(col/3) * 3;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				//if(board[y + i][x + j] == -1) cout << "*";
				//else cout << board[y + i][x + j];
				if(board[y + i][x + j] == c)return false;
			}
			//cout << "\n";
		}
		//cout << "Pass\n";
	}
	else{
		for(int i=0;i<n;i++)if(board[row][i] == c)return false;
		for(int i=0;i<n;i++)if(board[i][col] == c)return false;
		int y = (int)(row/2) * 2, x = (int)(col/2) * 2;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				//if(board[y + i][x + j] == -1) cout << "*";
				//else cout << board[y + i][x + j];
				if(board[y + i][x + j] == c)return false;
			}
			//cout << "\n";
		}
	}
	return true;

}


bool solve(int row, int col){
	if(row >= n)return true;
	if(col >= n)return solve(row + 1, 0);
	if(board[row][col] != -1)return solve(row, col + 1);
	bool sol = false;
	for(int i=1;i<=n;i++){
		if(check(row, col, i)){
			board[row][col] = i;
			show_board();
			if(solve(row, col + 1)){
				sol = true;
				break;
			}
		}

		board[row][col] = -1;
	}
	return sol;
}
int main(){
	string s;
	cin >> s;
	if(s[0] == '2'){
		n = 4;
	}
	else n = 9;
	for(int i=0;i<n;i++){
		cin >> s;
		for(int j=0;j<n;j++){
			if(s[j] == '?' || s[j] == '#'){
				board[i][j] = -1;
			}
			else{
				if(s[j] <= 'D' && s[j] >= 'A'){
					board[i][j] = s[j] - 'A' + 1;
				}
				else{
					board[i][j] = s[j] - '0';
				}
			}
		}
	}
	/*for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(board[i][j] == -1) cout << "*";
			else
			cout << board[i][j];
		}
		cout << "\n";
	}*/
	solve(0, 0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n == 9) cout << board[i][j];
			else cout << (char)(board[i][j] + 'A' - 1);
		}
		cout << "\n";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	//a)
	unsigned int values[5]={2,4,6,8,10};
	
	//b)
	unsigned int *vPtr=nullptr;

	//c)array subscripting notation
	for(int i=0;i<5;++i)cout<<values[i]<<" \n"[i==4];

	//d)
	//values is the address of the array, so it can directly assign the value to vPtr
	vPtr=values;
	cout<<vPtr<<'\n';

	//try to get the address of values[0] and assign to vPtr
	vPtr=&values[0];
	cout<<vPtr<<'\n';

	//e)
	//in (d) we assign the address to vPtr, so we can use it directly
	for(int i=0;i<5;++i)cout<<*(vPtr+i)<<" \n"[i==4];

	//f)
	//array's name is also the address
	for(int i=0;i<5;++i)cout<<*(values+i)<<" \n"[i==4];
	
	//g)
	//array's name is also the address, we can also use address to show the value by subscripting
	for(int i=0;i<5;++i)cout<<vPtr[i]<<" \n"[i==4];

	//h)
	//array subscripting
	cout<<values[4]<<'\n';
	//pointer offset, array's name as pointer
	cout<<*(values+4)<<'\n';
	//address subscripting
	cout<<vPtr[4]<<'\n';
	//pointer offset
	cout<<*(vPtr+4)<<'\n';

	//i)
	//vPtr refers to the address of the first element of the array
	//so vPtr+3 refers to the address of the fourth element of the array
	cout<<vPtr+3<<" "<<*(vPtr+3)<<'\n';
	//assume the array starts from 1002500, each element occupies 4 bytes,
	//so the address of vPtr+3 is1002500+3*4=1002512

	//j)
	//array starts with [0], so [4] means the fifth element of the array
	vPtr=&values[4];
	//vPtr-4 means the first element of the array
	vPtr-=4;
	cout<<vPtr<<'\n';
	cout<<*(vPtr)<<'\n';
	//assume vPtr points to value[4], and values array is at 1002500
	//so vPtr is points to 1002500+4*4=1002516
	//the address of vPtr-4=1002516-4*4=1002500, the first element of the array

	return 0;
}
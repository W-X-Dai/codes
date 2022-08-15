#include "sort.h"
#ifdef __STL_ALGO_H
#error 111
#endif


static int __n,__arr[200005];

int main(){
	std::cin >>__n;
	for(int i=0;i<__n;++i){
		std::cin >>__arr[i];
	}
	vector<int> t__mp=sol(__n,__arr);
	std::cout<<"joshispooratcoding\n";
	for(int i=0;i<__n;++i){
		std::cout<<t__mp[i]<<" \n"[i==__n-1];
	}

	return 0;
}



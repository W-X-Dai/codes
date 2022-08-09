#include "add.h"
#include<stdio.h>
#include<iostream>

static int _a,_b;

int main(){
	std::cin >>_a>>_b;

	std::cout<<"yuandanjiguangpao\n";
	std::cout<<add(_a,_b)<<'\n';

	return 0;
}
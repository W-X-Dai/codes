#include<iostream>
#include<vector>
using namespace std;
#ifdef __ALGORITHM__
#error Couldn't use the header file algorithm
#endif

#ifndef __SORT_H__
#define __SORT_H__
#ifdef __cplusplus
extern "C" {
#endif
	int *sort(int arr[]);
#ifdef __cplusplus
}
#endif

#endif
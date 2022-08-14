#include<iostream>
#include<vector>
using namespace std;


#ifndef ttest
#ifdef _STL_ALGO_H
#error Could not use evil items
#endif
#ifdef _STL_MAP_H
#error Could not use evil items
#endif
#ifdef _STL_SET_H
#error Could not use evil items
#endif
#ifdef _STL_QUEUE_H
#error Could not use evil items
#endif
#endif

#ifndef __SORT_H__
#define __SORT_H__
#ifdef __cplusplus
extern "C" {
#endif
	vector<int> sol(int n,int arr[]);
#ifdef __cplusplus
}
#endif

#endif
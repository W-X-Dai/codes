#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> sol(int n,int arr[]){
    vector<int> v(n);
    for(int i=0;i<n;++i)v[i]=arr[i];
    return v;
}
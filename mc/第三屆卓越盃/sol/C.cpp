//被checker搞到快瘋掉所以懶得寫正解
//感謝DuckyPonp學長
#include<bits/stdc++.h>
using namespace std;

string sol(string s){
    int lc = 0, rc = 0;
    string ans;

    for(char c:s){
        if(c == '(') lc++;
        if(c == ')') rc++;
    }

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == ')') ans += s[i];
        else if(lc < s.size()/2){
            ans += '(';
            lc++;
        }
        else{
            ans += ')';
            rc++;
        }
    }

    return ans;
}
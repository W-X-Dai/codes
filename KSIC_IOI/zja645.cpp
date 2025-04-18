#include <bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n;
vector<vector<int>> ans;

void dfs(int id, vector<int>& subset) {
    if(id==n+1) {
        ans.eb(subset);
        return;
    }

    //not choose id
    dfs(id+1, subset);
    
    //choose id
    subset.eb(id);
    dfs(id+1,subset);
    subset.pop_back();
}

inline void sol() {
    cin >>n;
    ans.clear();
    vector<int> subset;
    dfs(1, subset);

    sort(ans.begin(), ans.end(), [](const vector<int>& a, const vector<int>& b){
        if(a.size()!=b.size())return a.size()<b.size();
        return a<b;
    });

    for(auto& t:ans) {
        cout<<"{";
        for(int i=0;i<t.size();++i){
            if(i)cout<<",";
            cout<<t[i];
        }
        if(t.size()==0)cout<<0;
        cout<<"}\n";
    }
    cout<<'\n';
}

int main() {
    int t;
    cin >>t;
    while(t--)sol();
    return 0;
}

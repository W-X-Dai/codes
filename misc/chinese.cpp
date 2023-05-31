#include<bits/stdc++.h>
#define pis pair<int,string>
#define m_p make_pair
#define ff first
#define ss second

using namespace std;

string arr[18]={"旅遊與文學","舊物與故事","十八歲出門遠行","有錢人和你想的不一樣","先知","分辨與真假","舞台劇","雙關與笑談（talk_show）","歌詞與音樂","小王子","自我介紹與面試","生活與思辨","電影與文本","朗讀者","海奧華預言","快樂與憂慮","聲律啟蒙：古代的兒童毒物入門"};
string tmp;

int cnt[18];
vector<pis> v;

int main(){
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    for(int i=0;i<18;++i){
        for(int j=0;j<17;++j){
            cin >>tmp;
            cerr<<tmp<<'\n';
            for(int ii=0;ii<18;++ii){
                if(arr[ii]==tmp)cnt[ii]+=17-j;
            }
        }
    }
    for(int i=0;i<18;++i){
        v.emplace_back(m_p(cnt[i]*-1,arr[i]));
    }
    sort(v.begin(),v.end());

    for(int i=0;i<17;++i)cout<<v[i].ss<<'\t';cout<<'\n';
    for(int i=0;i<17;++i)cout<<v[i].ff*-1<<'\t';
   
}
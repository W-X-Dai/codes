#include <bits/stdc++.h>
using namespace std;

string in_name, out_name;
int a[1010][1010];

void sol(){
    ifstream fin(in_name);
    ofstream fout(out_name);

	int m, n, tr, tc, num, cnt=0, getit=-1;
    
	fin >> m >> n >> tr>> tc;
    
    for (int i=0; i<1005; i++)
    	for (int j=0; j<1005; j++)
    		a[i][j]=0;
    fin >> num;
    while (num--){
    	int r, c, p;
    	fin >> r >> c >> p;
		for (int i=max(0,r-p); i<=min(m-1, r+p); i++){
			for (int j=max(0, c-p); j<=min(n-1, c+p); j++){
				if (a[i][j]==0 && 
				    abs(i-r)+abs(j-c)<=p){
					a[i][j] = 1;
					cnt++;
					if (i==tr && j==tc)
						getit=1;
				}
			}
		}
	}
	
	if (getit==1)
		fout << cnt<<" "<< "YES\n";
	else
		fout << cnt<<" "<< "NO\n"; 	  

    fin.close();
    fout.close();
}

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 1000);
    for (int i=0;i<15;++i) {
        in_name=string("./1-bomb-")+to_string(i)+".in";
        out_name=string("./1-bomb-")+to_string(i)+".out";

        int n=dis(gen), m=dis(gen);
        uniform_int_distribution<> dis_tc(0, m-1), dis_tr(0, n-1), dis_n(1, 10), dis_p(0, 50);
        int tc=dis_tc(gen), tr=dis_tr(gen), num=dis_n(gen);


        ofstream fout(in_name);
        
        fout<<n<<" "<<m<<" "<<tr<<" "<<tc<<'\n';
        fout<<num<<'\n';
        for(int i=0;i<num;++i){
            int c=dis_tc(gen), r=dis_tr(gen), p=dis_p(gen);
            fout<<r<<" "<<c<<" "<<p<<'\n';
        }


        
        fout.close();
        sol();
    }
    return 0;
}
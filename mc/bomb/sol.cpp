#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main() {
	int m, n, tr, tc, num, cnt=0, getit=-1;
    
	cin >> m >> n >> tr>> tc;
    
    for (int i=0; i<m; i++)
    	for (int j=0; j<n; j++)
    		a[i][j]=0;
    cin >> num;
    while (num--){
    	int r, c, p;
    	cin >> r >> c >> p;
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
		cout << cnt<<" "<< "YES\n";
	else
		cout << cnt<<" "<< "NO\n"; 	  
	return 0;
}
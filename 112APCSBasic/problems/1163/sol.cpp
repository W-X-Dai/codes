#include<bits/stdc++.h>
using namespace std;

// t1 from1
// t2 from2
 
int main() {
    int t1, t2, from1, from2;
    cin >>  from1>>t1 >> from2>>t2;
 
	if(t1>t2)swap(t1,t2),swap(from1,from2);

    int delta_time = t2-t1 , sum = 0, current_floor = 0;
 
    if(from1 - 1 <= delta_time) {
        sum += from1 - 1;
        current_floor = from1;
        sum += abs(from2 - current_floor);
    } else if(from1 - 1 - delta_time < abs(from2 - delta_time - 1)) {
        sum += from1 - 1;
        current_floor = from1;
        sum += abs(from2 - current_floor);
    } else {
        sum += delta_time;
        current_floor = delta_time + 1;
        sum += abs(from2 - current_floor);
        current_floor = from2;
        sum += abs(from1 - current_floor);
    }
 
    cout << sum << "\n";
}
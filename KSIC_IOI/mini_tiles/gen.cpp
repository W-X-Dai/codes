#include <bits/stdc++.h>
using namespace std;
int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(2, 499);
    for (int i = 0; i < 20; ++i) {
        string fname = string("/home/josh/codes/KSIC_IOI/mini_tiles/q625_") + (i < 10 ? "0" : "") + to_string(i) + ".in";
        ofstream fout(fname);
        int n = dis(gen), m = dis(gen);
        fout << n << " " << m << "\n";
        fout.close();
    }
    return 0;
}
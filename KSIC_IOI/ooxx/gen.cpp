#include <bits/stdc++.h>
using namespace std;

int n = 1;

inline void gen(string s){
    ofstream fout("a.in", ios::app);

    for (int i = 0; i < 9; ++i) {
        if (s[i] == '0') fout << '.';
        else if (s[i] == '1') fout << 'X';
        else fout << 'O';

        if (i % 3 == 2) fout << "\n";
    }
}

int main() {
    ofstream fout("a.in");
    const int DIG = 9;
    
    for (int i = 0; i < DIG; ++i) n *= 3;  // 3^9
    fout << n << "\n";
    fout.close();

    string s(DIG, '0');

    for (int i = 0; i < n; ++i) {

        int carry = 1;
        for (int j = DIG - 1; j >= 0 && carry; --j) {
            int t = (s[j] - '0') + carry;
            s[j] = char('0' + (t % 3));
            carry = t / 3;
        }
        gen(s);
    }
}

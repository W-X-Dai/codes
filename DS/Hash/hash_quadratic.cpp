#include<bits/stdc++.h>
#define int long long
#define eb emplace_back
using namespace std;

const int N=1000000, table_size=30, max_probing_times=10;

int arr[25]={10102109, 10106402, 10106918, 12508729, 12508629, 12508765, 12508068, 12508705, 12508842, 11508011, 11508817, 11508388, 11508189, 11508331, 11508675, 11508521, 11508287, 11508863, 11508979, 11508532, 11508035, 11508599, 10613285, 13945978, 12945157};

int hash_table[table_size];

// ⬇️ 統計變數
int collisions = 0;
int max_probe = 0;
int total_probe = 0;

// i: 原始資料的位置, id: hash table 中的位置, x: 探查次數
inline void quandratic_probing(int i, int id, int x){
    // fallback: linear probing
    while(x > max_probing_times){
        if(id >= table_size) id %= table_size;
        ++collisions;
        ++total_probe;
        if(!hash_table[id]){
            hash_table[id] = arr[i];
            max_probe = max(max_probe, x);
            return;
        }
        ++id;
        ++x;
    }
    if(hash_table[id]){
        cout<<"secondary:"<<arr[i]<<" "<<id<<endl;
    }
    if(!hash_table[id]){
        hash_table[id] = arr[i];
        max_probe = max(max_probe, x);
        total_probe += x;
        return;
    }

    ++collisions;
    ++total_probe;
    id = (id + x*x) % table_size;
    quandratic_probing(i, id, x + 1);
}

int32_t main(){
    for(int i = 0; i < 25; ++i){
        int id = ((arr[i] * arr[i] / N) % N) % table_size;
        if(hash_table[id]){
            ++collisions;
            ++total_probe;
            quandratic_probing(i, id, 1);
        }
        else{
            hash_table[id] = arr[i];
            max_probe = max(max_probe, 0LL);
        }
    }

    for(int i = 0; i < table_size; ++i){
        cout << i << ":" << hash_table[i] << '\n';
    }

    // ⬇️ 統計結果輸出
    cout << "\n📊 Hash 統計結果：\n";
    cout << "碰撞總次數: " << collisions << '\n';
    cout << "總探查次數: " << total_probe << '\n';
    cout << "平均探查次數: " << fixed << setprecision(2) << (1.0 * total_probe / 25) << '\n';
    cout << "最大探查次數: " << max_probe << '\n';
}

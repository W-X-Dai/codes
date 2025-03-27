#include "decision_tree.h"

int main(){
    ReadData train("data_origin", 7), testdata("data_origin", 7);
    fstream fout("result", ios::out);
    for(int min_l=3;min_l<=10;++min_l){
        for(int max_d=5;max_d<=20;max_d+=5){
            DecisionTree tree(min_l, max_d);
            double tmp=0;
            for(int i=0;i<20;++i){
                cout<<min_l<<" "<<max_d<<" "<<i<<'\n';
                string s1="./testdatas/test_"+to_string(i);
                string s2="./testdatas/train_"+to_string(i);
                ReadData test(s1, 7), train(s2, 7);
                tree.fit(train.x, train.y);
                tmp+=tree.accuracy(test.x, test.y);
            }
            fout<<min_l<<" "<<max_d<<" "<<tmp/20<<'\n';
            
        }
    }
    return 0;
    
}
#include "decision_tree.h"
using namespace std::chrono;

int main(){
    auto starttime = system_clock::now();

    double progress=0;
    fstream fout("result", ios::out);
    for(int i=2;i<=10;++i){
        RandomForest forest(i);
        double tmp=0;
        for(int j=0;j<20;++j){
            string s1="./testdatas/test_"+to_string(j);
            string s2="./testdatas/train_"+to_string(j);
            ReadData test(s1, 7), train(s2, 7);
            double tmpacc=0;
            for(int k=0;k<10;++k){
                progress+=i;
                cout<<(progress/118800)*100<<"%\n";
                forest.fit(train.x, train.y);
                tmpacc+=forest.accuracy(test.x, test.y);
            }
            tmp+=tmpacc/10;
        }
        fout<<i<<" "<<tmp/20<<'\n';
    }
    for(int i=20;i<=100;++i){
        RandomForest forest(i);
        double tmp=0;
        for(int j=0;j<20;++j){
            string s1="./testdatas/test_"+to_string(j);
            string s2="./testdatas/train_"+to_string(j);
            ReadData test(s1, 7), train(s2, 7);
            double tmpacc=0;
            for(int k=0;k<10;++k){
                progress+=i;
                cout<<(progress/118800)*100<<"%\n";
                forest.fit(train.x, train.y);
                tmpacc+=forest.accuracy(test.x, test.y);
            }
            tmp+=tmpacc/10;
        }
        fout<<i<<" "<<tmp/20<<'\n';
    }
    auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(system_clock::now()- starttime).count();
    cout<<"Time: "<<diff/1000<<"s\n";

    return 0;
    
}
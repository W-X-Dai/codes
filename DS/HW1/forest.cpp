#include "decision_tree.h"

int main(){
    
    ReadData train("data", 7), testdata("testdata", 7);
    DecisionTree tree;
    RandomForest forest; 
    tree.fit(train.x, train.y);
    forest.fit(train.x, train.y);

    // double acc=0;
    // for(int i=0;i<20;++i){
    //     cout<<i+1<<'\n';
    //     forest.fit(train.x, train.y);
    //     acc+=forest.accuracy(testdata.x, testdata.y);
    // }
//    tree.fit(train.x, train.y);
//    cout<<acc/20;



    cout<<tree.accuracy(testdata.x, testdata.y)<<'\n';
    cout<<forest.accuracy(train.x, train.y);

    // double tree_acc=0, forest_acc=0;
    // for(int i=0;i<20;++i){
        
    //     string s="./testdatas/data_"+to_string(i);
    //     ReadData test(s, 7);
    //     tree_acc+=tree.accuracy(test.x, test.y);
    //     forest_acc+=forest.accuracy(test.x, test.y);

    //     cout<<i+1<<" "<<tree.accuracy(test.x, test.y)<<" "<<forest.accuracy(test.x, test.y)<<'\n';
    // }
    // cout<<tree_acc/20<<" "<<forest_acc/20<<'\n';

}
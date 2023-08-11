mkdir $1
cd $1

mkdir scripts
mkdir subtasks

cd scripts

touch ans.sh
tee ans.sh <<-'EOF'
g++ sol.cpp -o sol
n=`expr $1+1`
for ((i=1;i<$n;i++))
do
    cat "./testdatas/t"$i".in" | ./sol >"./testdatas/t"$i".out"
done
EOF

touch buildsubtasks.sh
tee buildsubtasks.sh <<-'EOF'
# /bin/bash 
# $1:n_subtaks
for ((i=1;i<`expr $1+1`;i++))
do
    g++ ./subtasks/subtask$i.cpp -o ./exec/subtask$i
    echo $i
done
EOF

touch runsubtasks.sh
tee runsubtasks.sh <<-'EOF'
# /bin/bash 
# $1:subtask_id $2:subtask_begin_id $3:subtask_end_id
for ((i=$2;i<`expr $3+1`;i++))
do
    ./exec/subtask$1 >"./testdatas/t"$i".in"
    echo $i
done
EOF

cd ..
touch build.cpp
tee build.cpp <<-'EOF'
#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int main(){
    system("rm -rf exec");
    system("rm -rf testdatas");

    system("mkdir exec");
    system("mkdir testdatas");

    ifstream conf("./gen.conf");
    int n;conf>>n;
    string buildsubtasks="bash ./scripts/buildsubtasks.sh "+to_string(n);
    system(buildsubtasks.c_str());  

    int x,i=1,j=0,id=1;
    while(conf>>x){
        j+=x;
        string runsubtasks="bash ./scripts/runsubtasks.sh "+to_string(id)+" "+to_string(i)+" "+to_string(j);
        system(runsubtasks.c_str());
        i=j+1;
        ++id;
    }
    string ans="bash ./scripts/ans.sh "+to_string(j);
    system(ans.c_str());

    return 0;
    
}
EOF

g++ build.cpp -o build
rm -rf build.cpp

sudo cp build /usr/bin

touch sol.cpp
tee sol.cpp <<-'EOF'
#include<bits/stdc++.h>
using namespace std;

int main(){
    //code here

}
EOF

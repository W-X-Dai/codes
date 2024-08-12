g++ sol.cpp -o sol
n=`expr $1+1`
for ((i=1;i<$n;i++))
do
    cat "./testdatas/t"$i".in" | ./sol >"./testdatas/t"$i".out"
done
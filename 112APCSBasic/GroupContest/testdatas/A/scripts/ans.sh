g++ sol.cpp -o sol
n=`expr $1`
for ((i=0;i<$n;i++))
do
    cat "./testdatas/"$i".in" | ./sol >"./testdatas/"$i".out"
done
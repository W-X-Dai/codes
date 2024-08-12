g++ sol.cpp -o sol
n=`expr $1+1`
for ((i=1;i<$n;i++))
do
    cat "./"$i".in" | ./sol >"./"$i".out"
done
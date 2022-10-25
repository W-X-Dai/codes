g++ sol.cpp -o exec
n=`expr $1+1`
for ((i=1;i<$n;i++))
do
    cat "./gen/subtasks/testdatas/t"$i".in" | ./exec >"./gen/subtasks/testdatas/t"$i".out"
done
rm -rf exec
# /bin/bash 
# $1:n_subtaks
for ((i=1;i<`expr $1+1`;i++))
do
    g++ ./subtasks/subtask$i.cpp -o ./exec/subtask$i
    echo $i
done


# for ((i=1;i<$n;i++))
# do
#     cat "./testdatas/t"$i".in" | ./exec >"./testdatas/t"$i".out"
# done
# rm -rf exec
# /bin/bash 
# $1:n_subtaks
for ((i=1;i<`expr $1+1`;i++))
do
    if [ -e ./subtasks/subtask$i.cpp ]; then
        g++ ./subtasks/subtask$i.cpp -o ./exec/subtask$i
    fi
    echo $i
done


# for ((i=1;i<$n;i++))
# do
#     cat "./testdatas/t"$i".in" | ./exec >"./testdatas/t"$i".out"
# done
# rm -rf exec
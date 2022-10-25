# /bin/bash 
# $1:subtask_id $2:subtask_begin_id $3:subtask_end_id
for ((i=$2;i<`expr $3+1`;i++))
do
    ./exec/subtask$1 >"./testdatas/t"$i".in"
    echo $i
done


# for ((i=1;i<$n;i++))
# do
#     cat "./testdatas/t"$i".in" | ./exec >"./testdatas/t"$i".out"
# done
# rm -rf exec
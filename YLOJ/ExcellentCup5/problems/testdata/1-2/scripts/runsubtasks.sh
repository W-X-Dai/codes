# /bin/bash 
# $1:subtask_id $2:subtask_begin_id $3:subtask_end_id
for ((i=$2;i<`expr $3+1`;i++))
do  
    touch "./testdatas/t"$i".in"
    if [ -e ./exec/subtask$1 ]; then
        ./exec/subtask$1 $i >"./testdatas/t"$i".in"
    fi
    echo $i
done


# for ((i=1;i<$n;i++))
# do
#     cat "./testdatas/t"$i".in" | ./exec >"./testdatas/t"$i".out"
# done
# rm -rf exec
cnt=1
tmp=1
for i in {1..4}
do
    for j in {0..9}
    do 
        tmp=`expr $i - 1`
        cnt=`expr $tmp \* 10`
        cnt=`expr $cnt + $j`
        cnt=`expr $cnt + $i`
        mv $i"_000"$j".in" "bike"$cnt".in"
        mv $i"_000"$j".out" "bike"$cnt".out" 
    
        echo "$cnt"
        echo \n
    done

done
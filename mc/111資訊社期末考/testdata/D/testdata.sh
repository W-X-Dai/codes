for a in {1..12}
do 
    b=1
    val=`expr $a - $b`
    echo "$val"
    
    tmp=$val".out"
#    tmp=t$a
    mv $tmp t$a".out"
#    echo $tmp

done

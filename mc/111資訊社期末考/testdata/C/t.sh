for a in {1..10}
do 
    b=0
    val=`expr $a - $b`
    echo "$val"
    
    tmp=$val".in"
#    tmp=t$a
    mv $tmp t$a".in"
#    echo $tmp

done

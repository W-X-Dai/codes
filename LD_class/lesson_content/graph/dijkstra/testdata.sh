for a in {1..5}
do 
    echo "$a"
    
    in="P_7_9_"$a".in"
    out="p_7_9_"$a".out"
#    tmp=t$a
    mv $in t$a".in"
    mv $out t$a".out"
#    echo $tmp

done

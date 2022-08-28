for i in {1..9}
do
    
    filename="C"`expr $i + 38`
    mv "5-0"$i".in" $filename".in"
    mv "5-0"$i".out" $filename".out"
    echo $filename".out"



done


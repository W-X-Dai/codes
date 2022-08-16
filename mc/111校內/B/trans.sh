for i in {1..9}
do
    
    filename="B"`expr $i + 38`
    mv "6-0"$i".in" $filename".in"
    mv "6-0"$i".out" $filename".out"
    echo $filename".out"



done


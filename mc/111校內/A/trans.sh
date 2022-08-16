for i in {1..3}
do
    
    filename="B"`expr $i + 0`
    mv "0-0"$i".in" $filename".in"
    mv "0-0"$i".out" $filename".out"
    echo $filename".out"



done


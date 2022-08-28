for i in {1..9}
do
    
    filename="D"`expr $i + 26`
    mv "4-0"$i".in" $filename".in"
    mv "4-0"$i".out" $filename".out"
    echo $filename".out"



done


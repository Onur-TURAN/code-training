x=1

while [ $x -le 100 ]; do
  if (( $x%2 != 0 )); then
    echo $x
  fi
  ((x++))
done


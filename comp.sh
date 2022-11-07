clang -o $1 $2 $3 $4 $5

compiled=false

if [ -e $1 ]
then
    ./$1
    compiled=true
else
    echo "compile error"
fi


if [ "$compiled" = true ] 
then 
    ./removefiles.sh $1
    echo [@info]: "removed" \"$1\" file
fi






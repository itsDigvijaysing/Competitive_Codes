#Initializing two variables
a=20
b=30

#Special Character
echo "File Name: $0"
echo "File Process No: $$"
echo "Total Number of Parameters : $#"

if [ a == b ]
then
	echo "a is equal to b"
else
    if [a>b]
    then
    	echo "a is bigger than b"
    else
        echo "b is bigger than a"
    fi
fi
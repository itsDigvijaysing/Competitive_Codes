# To declare static Array
arr=(prakhar digvijay 2 rushikesh 4 abhinav 10)

# To print all elements of array using different methods
echo ${arr[@]}	
echo ${arr[*]}

# Size of an Array
echo ${#arr[@]}
echo ${#arr[*]}

# Length of Particular element
echo ${#arr[0]}

# To print particular element
echo ${arr[3]}
echo ${arr[1]} 

# Search in Array
echo ${arr[@]/*[aA]*/} 

# To Delete Array specific value
unset arr[1]

# To Delete whole Array
unset arr
echo arr Deleted
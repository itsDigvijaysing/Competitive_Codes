# To Write File
read -p "Enter something to write in file : " filetxt
echo $filetxt >> temp.txt

# To Read File
while read line
do 
echo $line
done < temp.txt

output=0
count = input()
str_input = input()
word="ACPL"
val=0

while(True):
    if word in str_input:
        val=str_input.find(word)
        str_input=str_input.replace('ACPL','DDDD',1)
        output=output+1
    else:
        break

print(output)
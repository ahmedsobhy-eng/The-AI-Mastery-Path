import re
name = input("Enter file:")
if len(name) < 1: name = "regex_summation.txt"
handle = open(name.strip())
total_sum = 0
for line in handle:
    line = line.rstrip()
    numbers = re.findall('[0-9]+', line)
    if len(numbers) > 0:
        print("Found numbers:", numbers) 
        
        for num in numbers: 
            total_sum = total_sum + int(num)
print("-------------------")
print("The final sum is:", total_sum)
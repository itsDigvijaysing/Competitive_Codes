# Basically what they are doing first we set coins[0] as 0 then do coins[1] - coins[0] it actually gives us the first number which is lowest number of cans, so just think from all our list from current point to last point, everyone have either same or more cans because we first sorted right. so we can just multiply the difference with the number of cans left and add it to our accumulator. If it is less than b we can just add it to our accumulator and add the number of cans left to our steps. If it is more than b we can just add b - acc to our steps and set acc to b to exit the loop. So in the end we are just removing cans by lowest value to all points first then next point lowest by doing (current cans - previous cans) * (number of cans left) and by doing we are solving. Just think about it and you will understand. 

def solution():
    n, b = map(int, input().split())
    coins = list(map(int, input().split()))
    coins.append(0)  # Append a zero to handle edge cases
    coins.sort()  # Sort the list of cans in ascending order
    
    steps, acc, idx = 0, 0, 1  # Initialize steps, accumulated cans, and index
    while acc < b:  # Loop until we have accumulated at least b cans
        if acc + (n - idx + 1) * (coins[idx] - coins[idx - 1]) < b:
            # If adding all cans from the current slot to the next slot is still less than b
            acc += (n - idx + 1) * (coins[idx] - coins[idx - 1])
            steps += (n - idx + 1) * (coins[idx] - coins[idx - 1]) + 1
            idx += 1  # Move to the next slot
        else:
            # If we can reach or exceed b cans with the current slot
            steps += b - acc
            acc = b  # Set accumulated cans to b to exit the loop
    print(steps)  # Print the total number of button presses

t = int(input())  # Read the number of test cases
for _ in range(t):
    solution()  # Solve each test case
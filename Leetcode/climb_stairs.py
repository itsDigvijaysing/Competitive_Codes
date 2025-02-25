def climb_stairs(n):
    if n == 1:
        return 1
    if n == 2:
        return 2
    
    # Initializing the base cases
    first = 1
    second = 2
    
    # Iteratively calculate the number of ways to reach each step
    for i in range(3, n+1):
        current = first + second
        first = second
        second = current
    
    return second

# Test the function
n = 3
print(f"Number of ways to climb {n} steps: {climb_stairs(n)}")

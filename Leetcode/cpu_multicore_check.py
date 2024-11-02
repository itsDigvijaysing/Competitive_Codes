import concurrent.futures
import math
import time
import os

def is_prime(n):
    """ Returns True if n is a prime number, otherwise False """
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        if n % i == 0:
            return False
    return True

def count_primes_in_range(start, end):
    """ Count prime numbers in a given range """
    prime_count = 0
    for number in range(start, end):
        if is_prime(number):
            prime_count += 1
    return prime_count

def main():
    num_cores = os.cpu_count()  # Get the number of CPU cores
    print(f"Using {num_cores} CPU cores...")

    # Define range of numbers to check for primes (this is a very large range for heavy CPU use)
    range_start = 10**7
    range_end = 10**9
    chunk_size = (range_end - range_start) // num_cores

    start_time = time.time()

    # Split the range of numbers into chunks and process each in parallel
    with concurrent.futures.ProcessPoolExecutor(max_workers=num_cores) as executor:
        futures = [executor.submit(count_primes_in_range, range_start + i * chunk_size, range_start + (i + 1) * chunk_size) for i in range(num_cores)]

    # Collect the results
    total_primes = sum(future.result() for future in futures)

    end_time = time.time()
    print(f"Total primes found: {total_primes}")
    print(f"Total execution time: {end_time - start_time:.2f} seconds")

if __name__ == "__main__":
    main()

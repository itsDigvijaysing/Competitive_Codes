# so basically we are taking all the values sorting them based on their first value then concatenating the list
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    test_cases = int(data[index])
    index += 1
    results = []
    
    for _ in range(test_cases):
        n = int(data[index])
        index += 1
        
        pairs = []
        flat_list = []
        
        for _ in range(n):
            a1 = int(data[index])
            a2 = int(data[index + 1])
            index += 2
            pairs.append((a1, a2))
            flat_list.append(a1)
            flat_list.append(a2)
        
        flat_list.sort()
        
        coord_map = {}
        i = 1
        for value in flat_list:
            if value not in coord_map:
                coord_map[value] = i
                i += 1
        
        compressed_pairs = [(coord_map[a1], coord_map[a2]) for a1, a2 in pairs]
        
        sorted_pairs = sorted(zip(compressed_pairs, pairs), key=lambda x: (x[0][0] + x[0][1], x[1][0], x[1][1]))
        
        result = []
        for _, (orig_x, orig_y) in sorted_pairs:
            result.append(orig_x)
            result.append(orig_y)
        
        results.append(' '.join(map(str, result)))
    
    print('\n'.join(results))

if __name__ == "__main__":
    solve()
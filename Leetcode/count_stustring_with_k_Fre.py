class Solution:
    def numberOfSubstrings(self, s: str, k: int) -> int:
        n = len(s)
        count = 0
        left = 0
        freq = defaultdict(int)
        valid_count = 0
        for right in range(n):
            char = s[right]
            freq[char] += 1
            if freq[char] == k: valid_count += 1
            while valid_count > 0:
                count += (n - right)
                freq[s[left]] -= 1
                if freq[s[left]] == k - 1:
                    valid_count -= 1
                left += 1
        
        return count
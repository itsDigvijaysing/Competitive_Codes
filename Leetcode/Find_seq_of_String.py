class Solution:
    def stringSequence(self, target: str) -> List[str]:
        result = []
        current = ""
        
        for char in target:
            current += 'a'
            result.append(current)
            
            while current[-1] != char:
                current = current[:-1] + chr((ord(current[-1]) - ord('a') + 1) % 26 + ord('a'))
                result.append(current)
        
        return result
class Solution:
    def parseBoolExpr(self, expression: str) -> bool:
        stack = []
        
        for char in expression:
            if char == ')':
                sub_expr = []
                while stack and stack[-1] != '(':
                    sub_expr.append(stack.pop())
                stack.pop()  # Remove the '('
                operator = stack.pop()
                if operator == '|':
                    stack.append('t' if 't' in sub_expr else 'f')
                elif operator == '&':
                    stack.append('f' if 'f' in sub_expr else 't')
                elif operator == '!':
                    stack.append('f' if sub_expr[0] == 't' else 't')
            elif char != ',':
                stack.append(char)
        return stack[0] == 't'

value = input()
solution = Solution()
print(solution.parseBoolExpr(value))
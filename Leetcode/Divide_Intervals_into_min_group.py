import heapq

class Solution:
    def minGroups(self, intervals: list[list[int]]) -> int:
        output=0
        sorted_intervals = sorted(intervals, key=lambda x: x[0])
        while sorted_intervals:
            group = []
            todel = []
            for i in range(len(sorted_intervals)):
                if not group or group[-1][1]<sorted_intervals[i][0]:
                    group.append(sorted_intervals[i])
                    todel.append(i)
            for i in reversed(todel): 
                del sorted_intervals[i]
            output+=1
        return output
    
    def minGroups2(self, intervals: list[list[int]]) -> int:
        output=0
        sorted_intervals = sorted(intervals, key=lambda x: x[0])
        group = []
        while sorted_intervals:
            count=0
            for i in range(len(sorted_intervals)):
                if sorted_intervals[i]==-1: 
                    count=count+1 
                    if count>=len(sorted_intervals): 
                        return output
                    continue
                if not group or group[-1][1]<sorted_intervals[i][0]:
                    group.append(sorted_intervals[i])
                    sorted_intervals[i]=-1
            output+=1
            group.clear()
        return output
    
    def minGroups3(self, intervals: list[list[int]]) -> int:
        output=0
        intervals = sorted(intervals, key=lambda x: x[0])
        while intervals:
            last=0
            todel = []
            for i in range(len(intervals)):
                if last==0 or last<intervals[i][0]:
                    last=intervals[i][1]
                    todel.append(i)
            for i in reversed(todel): 
                del intervals[i]
            output+=1
        return output
    
    def minGroups4(self, intervals: list[list[int]]) -> int:
        min_heap = []
        sorted_intervals = sorted(intervals, key=lambda x: x[0])
        for start, end in sorted_intervals:
            if min_heap and min_heap[0] < start:
                heapq.heappop(min_heap)
            heapq.heappush(min_heap, end)
        return len(min_heap)

solution = Solution()
intervals = [[1, 3], [2, 4], [3, 6], [4, 5], [5, 7], [6, 8], [7, 9], [8, 10]]
print(solution.minGroups(intervals))
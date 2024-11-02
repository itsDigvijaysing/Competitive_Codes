import heapq

class Solution:
    def smallestChair(self, times: List[List[int]], targetFriend: int) -> int:
        num_friends = len(times)

        available_chairs = list(range(num_friends))  
        heapq.heapify(available_chairs)

        occupied_chairs = []

        for i in range(num_friends):
            times[i].append(i)

        times.sort()

        for arrival, departure, friend_index in times:
            while occupied_chairs and occupied_chairs[0][0] <= arrival:
                chair_num = heapq.heappop(occupied_chairs)[1]
                heapq.heappush(available_chairs, chair_num)

            current_chair = heapq.heappop(available_chairs)

            if friend_index == targetFriend:
                return current_chair

            heapq.heappush(occupied_chairs, (departure, current_chair))

        return -1

solution = Solution()
times= list(list(input()))
targetFriend = input()
solution.smallestChair(times, targetFriend)
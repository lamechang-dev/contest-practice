from typing import List


class Solution:
    def distinctAverages(self, nums: List[int]) -> int:
        ans_list = []

        while len(nums):
            max = 0
            min = 100
            for num in nums:
                if num < min:
                    min = num
                if num > max:
                    max = num

            average = (max + min) / 2
            ans_list.append(average)
            nums.remove(max)
            nums.remove(min)

        hash_set = set()

        for item in ans_list:
            hash_set.add(item)

        return len(hash_set)

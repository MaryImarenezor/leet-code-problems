class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        result = []

        for i in range(0, len(nums)): #outer loop
            for j in range(i+1, len(nums)): #inner loop
                #iteration

                sum = nums[i] + nums[j]
                if sum == target:
                    result.insert(0, i)
                    result.insert(1, j)
                    break
        
        return result

            



        
class Solution(object):
    def findGCD(self, nums):

        # Find the smallest and largest numbers
        smallest = min(nums)
        largest = max(nums)

        # Find GCD using Euclidean algorithm
        while largest % smallest != 0:
            largest, smallest = smallest, largest % smallest

        return smallest
        """
        :type nums: List[int]
        :rtype: int
        """
        
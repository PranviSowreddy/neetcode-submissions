class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n=len(nums)
        result=[0]*(2*n)
        j=0
        for i in nums:
            result[j]=i
            result[n+j]=i
            j+=1
        return result    
        
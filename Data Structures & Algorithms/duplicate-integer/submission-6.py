class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp={}
        for i in nums:
            if i in mp:
                return True
            mp[i]=mp.get(i,0)+1
            # s.add(i)

        return False    
        
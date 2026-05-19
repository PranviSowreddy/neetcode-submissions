class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp={}
        if(len(s)!=len(t)):
            return False
        for c1 in s:
            mp[c1]=mp.get(c1,0)+1
        for c2 in t:
            if c2 not in mp:
                return False 
            mp[c2]-=1
            if mp[c2]==0:
                del mp[c2]

        return True               
        
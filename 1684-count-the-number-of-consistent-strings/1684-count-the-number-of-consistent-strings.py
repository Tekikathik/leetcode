class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        count,allowed=0,set(allowed)
        for i in words:
            for l in i:
                if  l not in allowed:
                    break
            else:
                count+=1
        return count
        
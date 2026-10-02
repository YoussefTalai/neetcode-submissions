from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        d = defaultdict(list)
        for s in strs:
            sw = sorted(s)
            d[tuple(sw)].append(s)
        
        return [v for v in d.values()]

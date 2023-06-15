#HARD

class Solution(object):
    def findSubstring(self, s, words):
        """
        :type s: str
        :type words: List[str]
        :rtype: List[int]
        """
        dist = len(words[0])*len(words)
        l = len(words[0])
        start = 0

        words.sort()
        ans = []
        while((start+dist)<=len(s)):
            part = s[start:start+dist]
            part = [part[i:i+l] for i in range(0,dist,l)]
            part.sort()
            if part==words:
                ans.append(start)
            start += 1

        return ans
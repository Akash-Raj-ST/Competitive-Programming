class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """

        s_list = s.split(' ')
        if not len(s_list)==len(pattern):
            return False

        mp = {}

        for i in range(len(pattern)):
            if pattern[i] in mp.keys():
                if not mp[pattern[i]] == s_list[i]:
                    return False
            else:
                mp[pattern[i]] = s_list[i]

        mp = {}           
        for i in range(len(pattern)):
            if s_list[i] in mp.keys():
                if not mp[s_list[i]] == pattern[i]:
                    return False
            else:
                mp[s_list[i]] = pattern[i]

        return True
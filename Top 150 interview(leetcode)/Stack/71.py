class Solution(object):
    def simplifyPath(self, path):
        """
        :type path: str
        :rtype: str
        """

        li = path.split('/')[1:]
        
        ans = []

        for i in range(len(li)):
            if li[i]=="..":
                if len(ans)>0:
                    ans.pop()
            elif li[i]=="." or li[i]=="":
                continue
            else:
                ans.append(li[i])

        return "/"+"/".join(ans)




class Solution {
public:
    int strStr(string haystack, string needle) {

        int l1 = haystack.length();
        int l2 = needle.length();
        
        for(int i=0;i<l1;i++){
            if(l1-i<l2) return -1;

            int pos = i;
            bool found = true;
            for(int j=0;j<l2;j++){
                if(haystack[pos++]!=needle[j]){
                    found=false;
                    break;
                }
            }

            if(found) return i;
        }

        return -1;
    }
};
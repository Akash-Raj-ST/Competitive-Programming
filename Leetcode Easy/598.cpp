// https://leetcode.com/problems/range-addition-ii/description/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int m1=m,m2=n;

        for(int i=0;i<ops.size();i++){
            if(ops[i][0]<m1) m1 = ops[i][0];
            if(ops[i][1]<m2) m2 = ops[i][1];
        }

        return m1*m2;
    }
};
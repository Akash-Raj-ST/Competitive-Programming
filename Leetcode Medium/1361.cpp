// https://leetcode.com/problems/validate-binary-tree-nodes/

class Solution {
public:

    vector<vector<int>> arr;
    vector
    bool dfs(int i){

    }

    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {

        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1)
                arr[i].push_back(leftChild[i]);
            else
                arr[i].push_back(rightChild[i]);
        }

        if(dfs(0)) return true;
        return false;
    }
};
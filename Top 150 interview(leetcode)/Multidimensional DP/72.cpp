class Solution {
public:
    vector<vector<int>> arr;
    int recursive(string word1,string word2,int pos1,int pos2){
        if(pos2>=word2.length()){
            return (word1.length()-pos1);
        }

        if(pos1>=word1.length()){
            return (word2.length()-pos2);
        }

        if(arr[pos1][pos2]!=-1) return arr[pos1][pos2];
        
        if(word1[pos1]==word2[pos2]){
            return recursive(word1,word2,pos1+1,pos2+1);
        }

        //insert
        int c1 = recursive(word1,word2,pos1,pos2+1);
        //delete
        int c2 = recursive(word1,word2,pos1+1,pos2);
        //replace
        int c3 = recursive(word1,word2,pos1+1,pos2+1);

        arr[pos1][pos2] = 1+min(c1,min(c2,c3));
        return arr[pos1][pos2];
    }

    int minDistance(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();

        arr.resize(n1+1,vector<int>(n2+1,-1));
        return recursive(word1,word2,0,0);
    }
};
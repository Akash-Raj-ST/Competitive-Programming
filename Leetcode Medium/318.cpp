class Solution {
public:
    int maxProduct(vector<string>& words) {
       vector<vector<int>> arr(words.size(),vector<int>(26,0));

       for(int i=0;i<words.size();i++){
           for(int j=0;j<words[i].length();j++){
               arr[i][int(words[i][j])-97] = 1;
           }
       }

       for(int i=0;i<words.size();i++){
           for(int j=0;j<26;j++){
               cout<< arr[i][j]<<' ';
           }
           cout<<'\n';
       }

        int ans = 0;

        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                bool diff = true;
                for(int k=0;k<26;k++){
                    if(arr[i][k]==1 && arr[j][k]==1){
                        diff=false;
                        break;
                    }

                }
                if(diff){
                    int l = words[i].size()*words[j].size();
                    if(l>ans) ans = l;
                }
            }
        }

        return ans;
    }
};
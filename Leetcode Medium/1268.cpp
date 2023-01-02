class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());

        int n = searchWord.length();
        vector<vector<string>> ans;
        vector<string> arr;

        int count;
        for(int i=0;i<n;i++){
            count = 0;

            for(int j=0;j<products.size();j++){
                bool flag = false;
                for(int s1=0;s1<=i && s1<=products[j].size();s1++){
                    if(searchWord[s1]!=products[j][s1]){
                        flag = true;
                        break;
                    }
                }

                if(!flag){
                    count++;
                    arr.push_back(products[j]);
                }

                if(count==3) break;
            }
            ans.push_back(arr);
            arr.clear();
        }
        return ans;
    }
};
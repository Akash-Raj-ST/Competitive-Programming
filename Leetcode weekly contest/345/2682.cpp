class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> friends(n,false);
        
        friends[0] = true;
        
        int pos=0,count=1;
        while(true){
            pos = (pos + (count*k))%n;
            count++;
            
            if(friends[pos]){
                break;
            }
            friends[pos] = true;
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(!friends[i]){
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};
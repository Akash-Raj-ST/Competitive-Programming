class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        
        
        if(tomatoSlices%2!=0) return ans;
        
        long long sum = 2*cheeseSlices;

        if(tomatoSlices>=sum && tomatoSlices<=2*sum){
            long long req = tomatoSlices-sum;
            req = req/2;
            
            ans.push_back(req);
            ans.push_back(cheeseSlices-req);
            return ans;
        }
          
        return ans;
        
    }
};
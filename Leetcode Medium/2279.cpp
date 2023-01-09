class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> req;

        for(int i=0;i<rocks.size();i++){
            req.push_back(capacity[i]-rocks[i]);
        }

        sort(req.begin(),req.end());

        int count = 0;

        for(auto it: req){
            if(it==0){
                count++;
                continue;
            }

            if(it<=additionalRocks){
                count++;
                additionalRocks -= it;
            }else{
                break;
            }
        }
        return count;
    }
};
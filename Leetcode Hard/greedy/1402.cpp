class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();


        vector<int> arr_pos;
        vector<int> arr_neg;

        for(auto it: satisfaction){
            if(it>=0) arr_pos.push_back(it);
            else arr_neg.push_back(it);
        }

        sort(arr_pos.begin(),arr_pos.end());
        sort(arr_neg.begin(),arr_neg.end(),greater<int>());

        int sum = 0;

        for(auto it:arr_pos){
            sum += it;
        }

        int ans=0;

        for(int i=0;i<arr_pos.size();i++){
            ans += arr_pos[i]*(i+1);
        }

        for(int i=0;i<arr_neg.size();i++){
            if(ans+sum+arr_neg[i]>=ans){
                ans += sum+arr_neg[i];
                sum += arr_neg[i];
            }else{
                break;
            }
        }

        return ans;
    }
};
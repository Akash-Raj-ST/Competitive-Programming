class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<long long,bool> visited;

        long long curr_sum=0,_max=0;
        long long count = 0;
        long long l=0;
        for(long long i=0;i<nums.size();i++){
            if(visited[nums[i]]){
                long long l = i-(count);

                while(true){

                    if(nums[l]==nums[i]){
                        break;
                    }else{
                        curr_sum -= nums[l];
                        visited[nums[l]] = false;
                        count--;
                    }
                    l++;
                }

            }else{
                curr_sum += nums[i];
                visited[nums[i]] = true;

                count++;

                if(count==k){
                    if(curr_sum>_max){
                        _max=curr_sum;
                    }

                    curr_sum -= nums[i-(k-1)];
                    visited[nums[i-(k-1)]] = false;
                    count--;
                }
            }
        }
        return _max;
    }
};
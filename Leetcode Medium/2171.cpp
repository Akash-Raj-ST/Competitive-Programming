

class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        int n = beans.size();
        long long int val,min = LLONG_MAX;

        sort(beans.begin(),beans.end());

        long long int sum=0;

        for(int i=0;i<n;i++) sum += beans[i];

        for(int i=0;i<n;i++){
            long long int curr_beans = beans[i];
            curr_beans *= (n-i);
            long long int removed = sum-curr_beans;
            min = removed<min?removed:min;
        }
        return min;
    }
};
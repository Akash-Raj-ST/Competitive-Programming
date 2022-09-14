class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum = 0;
        long long high = 0;
        for(auto item: milestones){
            sum += item;
            if(item>high) high=item;
        }
        long long rest = sum-high;
        
        if(rest*2+1<sum) return rest*2+1;
        return sum;
    }
};
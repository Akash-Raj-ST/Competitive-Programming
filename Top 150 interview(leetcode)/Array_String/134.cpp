class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total_gas = 0,total_cost = 0;

        for(auto it:gas) total_gas += it;
        for(auto it:cost) total_cost += it;

        if(total_gas<total_cost) return -1;

        int index=0;
        int gas_tank = 0;
        for(int i=0;i<gas.size();i++){
            gas_tank += gas[i]-cost[i];

            if(gas_tank<0){
                gas_tank=0;
                index=i+1;
            }
        }
        return index;
    }
};
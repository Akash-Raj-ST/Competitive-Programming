class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
        if(boardingCost*4<runningCost) return -1;

        int wait = 0;
        int value = 0,rot=0;
        int max_value=0,max_rot=0;
        for(int i=0;i<customers.size();i++){

            if(customers[i]+wait>4){ 
                rot += (customers[i]+wait)/4;
                wait = (customers[i]+wait)%4;

                value += rot*(4*boardingCost-runningCost);
            }
            else{ 
                value += (customers[i]+wait)*boardingCost-runningCost;
                rot++;
                wait=0;
            }
            if(value>max_value){
                max_value = value;
                max_rot = rot;
            }
        }

        if(wait!=0){
            value += wait*boardingCost-runningCost;
            rot++;
            if(value>max_value){
                max_value = value;
                max_rot = rot;
            }
        }
        return max_rot;
    }
};


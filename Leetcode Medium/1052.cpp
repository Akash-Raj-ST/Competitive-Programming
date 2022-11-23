// https://leetcode.com/problems/grumpy-bookstore-owner/description/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisifed = 0;
        int n = customers.size();

        vector<int> arr;
        for(int i=0;i<n;i++){
            if(!grumpy[i]){ 
                satisifed += customers[i];
                arr.push_back(0);
            }else{
                arr.push_back(customers[i]);
            }
        }

        int pos=0,sum=0,max=0;

        for(int i=0;i<minutes;i++){
            sum += arr[i];
        }

        max = sum;

        for(int i=minutes;i<n;i++){
            sum = sum-arr[pos++];
            sum += arr[i];

            if(sum>max) max=sum;
        }

        return max+satisifed;


    }
};
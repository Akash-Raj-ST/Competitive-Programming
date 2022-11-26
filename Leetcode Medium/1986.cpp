// https://leetcode.com/problems/minimum-number-of-work-sessions-to-finish-the-tasks/

class Solution {
public:
    int minSessions(vector<int>& tasks, int sessionTime) {

        int n = tasks.size();
        int sessions = n;

        sort(tasks.begin(),tasks.end());

        int sum = tasks[0];
        int low=0,high=n-1;

        while(low<high){
            if(sum+tasks[high]<sessionTime){
                low++;
                high--;
                sum += tasks[high];
                sessions--;
            }else{
                high--;
            }
        }

        sessions++;
        return sessions;
    }
};
// [7,4,3,8,10] 12
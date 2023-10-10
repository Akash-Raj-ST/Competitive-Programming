class Solution {
public:
    vector<bool> visited;

    bool solve(vector<int>& arr, int start){
        if(arr[start]==0) return true;

        
        visited[start] = true;

        if(start+arr[start]<arr.size() && !visited[start+arr[start]] && solve(arr,start+arr[start]) ) return true;
        if(start-arr[start]>=0 && !visited[start-arr[start]] && solve(arr,start-arr[start])) return true;

        return false;
    }

    bool canReach(vector<int>& arr, int start) {
        visited = vector<bool>(arr.size(),false);
        return solve(arr,start);
    }
};
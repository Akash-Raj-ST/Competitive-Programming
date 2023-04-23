class Solution {
public:
    

    bool cycle(vector<int> arr[],int node,vector<bool> &visited,vector<bool> &visit){

        visited[node] = true;
        visit[node] = true;

        for(auto it: arr[node]){
            if(!visit[it]){
                if(cycle(arr,it,visited,visit)) return true;
            }else if(visit[it] && visited[it]){
                return true;
            }
        }
        visited[node] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> arr[numCourses];

        for(int i=0;i<prerequisites.size();i++){
            arr[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        vector<bool> visited(numCourses,false);
        vector<bool> visit(numCourses,false);

        for(int i=0;i<numCourses;i++){
            if(!visit[i]){
                if(cycle(arr,i,visited,visit)){
                    return false;
                }
            }
        }

        return true;
    }
};
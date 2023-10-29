class Solution {
public:

    bool cyclic(int node,map<int,vector<int>>& mp,vector<bool>& visited,vector<bool>& visit){

        visited[node] = true;
        visit[node] = true;

        for(auto it:mp[node]){
            if(!visit[it] && cyclic(it,mp,visited,visit)) return true;
            if(visited[it]) return true;
        }

        visited[node] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<bool> visit(numCourses,false);
        vector<bool> visited(numCourses,false);

        map<int,vector<int>> mp;

        for(auto it:prerequisites){
            mp[it[0]].push_back(it[1]);
        }

        for(int i=0;i<numCourses;i++){

            if(visit[i]) continue;

            if(cyclic(i,mp,visited,visit)) return false;

        }

        return true;
    }
};
class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        
        vector<int> nodes1(n+1,-1);
        vector<int> nodes2(n+1,-1);

        int curr,d;

        curr = node1;
        d = 0;
        while(true){
            if(nodes1[edges[curr]]!=-1){
                nodes1[edges[curr]] = ++d;
            }else break;
        }
        
        curr = node2;
        d = 0;
        while(true){
            if(nodes2[edges[curr]]!=-1){
                nodes2[edges[curr]] = ++d;
                if(nodes1[edges[curr]]!=-1)
            }else break;
        }
       
    }
};
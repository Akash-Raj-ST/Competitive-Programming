class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        
        vector<int> nodes1(n+1,false);
        vector<int> nodes2(n+1,false);

        int first = node1,first_hop=0;
        int second = node2,second_hop=0;
        while(true){

            if(edges[first]!=-1){
                if(nodes1[edges[first]]) return -1;

                nodes1[edges[first]] = true;
                first_hop++;
                first = edges[first];
            }

            if(first==second){
                return first_hop + second_hop;
            }

            if(edges[second]!=-1){
                if(nodes2[edges[second]]) return -1;

                nodes2[edges[second]] = true;
                second_hop++;
                second = edges[second];
            }

            
            if(first==second){
                return first_hop + second_hop;
            }
        }
    }
};
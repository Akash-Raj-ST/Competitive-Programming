class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i;
        for(i=0;i<heights.size()-1;i++){
            if(heights[i] >= heights[i+1]) continue;
            
            int diff = heights[i+1] - heights[i];
            
            if(bricks>=diff){
                bricks -= diff;
                pq.push(diff);
            }else{
                if(pq.size()>0 && ladders>0 && diff<=pq.top()){
                    bricks += pq.top();
                    pq.pop();
                    
                    ladders--;
                    pq.push(diff);
                    bricks -= diff;
                }
                else if(ladders>0) ladders--;
                else{
                    break;
                }
            }
        }
        return i;
    }
};
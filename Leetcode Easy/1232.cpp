class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slope = (double)(coordinates[1][1]-coordinates[0][1])/(double)(coordinates[1][0]-coordinates[0][0]);
        if(slope>=1e8 || slope<=-1e8)
            slope = abs(slope);

        for(int i=2;i<coordinates.size();i++){
            double slope2 = (double)(coordinates[i][1]-coordinates[0][1])/(double)(coordinates[i][0]-coordinates[0][0]);
            if(slope2>=1e8 || slope2<=-1e8)
                slope2 = abs(slope2);
            
            if(slope!=slope2){
                return false;
            }
        }
        return true;
    }
};
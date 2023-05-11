class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int _min=INT_MAX,_max=INT_MIN;

        for(int i=0;i<n;i++){
            _min = min(bloomDay[i],_min);
            _max = max(bloomDay[i],_max);
        }

        int ans = INT_MAX;

        while(_min<=_max){
            int mid = (_min+_max)/2;
            cout<<"mid: "<<mid<<"\n";
            int bloomed = 0;
            int bouquet = 0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    bloomed++;
                }else{
                    bloomed = 0;
                }

                if(bloomed==k){
                   bouquet++;
                   bloomed=0;
                }

                if(bouquet==m){
                    ans = min(ans,mid);
                    break;
                }
            }

            if(bouquet<m) _min = mid+1;
            else _max = mid-1;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};
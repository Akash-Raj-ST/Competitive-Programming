class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        int chosen = 0;
        
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({profits[i],capital[i]});
        }

        sort(arr.begin(),arr.end(),cmp);

        int ans = w,pos=0;
        priority_queue<pair<int,int>> pq;
        while(chosen<k){
            for(int i=pos;i<n;i++){
                if(arr[i].second<=w){
                    pq.push(arr[i]);
                    cout<<"adding "<<arr[i].first<<'\n';
                    pos = i+1;
                }else{
                    pos = i;
                    break;
                }
            }

            if(pq.empty()) break;
            chosen++;
            cout<<"chosen "<<pq.top().first<<'\n';
            ans += pq.top().first;
            w += pq.top().first;
            pq.pop();
        }
        return ans;
    }
};
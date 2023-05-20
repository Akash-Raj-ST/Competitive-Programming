class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        
        vector<int> n1(n+1,0),n2(n+1,0);
        
        if(derived[0]==1){
            n1[0] = 1;
            n2[1] = 1;
        }else{
            n2[0] = 1,
            n2[1] = 1;
        }
        
        for(int i=1;i<n-1;i++){
            if(derived[i]==0){
                if(n1[i]==1) n1[i+1]=1;
                
                if(n2[i]==1) n2[i+1]=1;
            }else{
                if(n1[i]==0) n1[i+1]=1;
                
                if(n2[i]==0) n2[i+1]=1;
            }
        }
        

        if((n1[n-1]^n1[0])==derived[n-1] || (n2[n-1]^n2[0])==derived[n-1]) return true;
        return false;
        
    }
};
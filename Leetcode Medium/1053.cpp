// https://leetcode.com/problems/previous-permutation-with-one-swap/description/

class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size(),temp;

        stack<int> st;
        int max = 0,index_1=-1,index_2=-1,val=0;

        for(int i=n-1;i>0;i--){
            if(arr[i]<arr[i-1]){
                max = arr[i];
                index_1 = i;

                while(!st.empty()){
                    index_2 = st.top();
                    val = arr[index_2];
                    st.pop();
                    if(val>max && val<arr[i-1]){
                        max = val;
                        index_1 = index_2;
                    }
                }
                temp = arr[i-1];
                arr[i-1] = arr[index_1];
                arr[index_1] = temp;
                break;
            }
            st.push(i);
        }
        return arr;
    }
};
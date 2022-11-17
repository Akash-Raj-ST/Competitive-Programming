// https://leetcode.com/problems/count-sorted-vowel-strings/


class Solution {
public:
    int countVowelStrings(int n) {
        int arr[] = {1,1,1,1,1};

        for(int i=1;i<n;i++){
            for(int j=3;j>=0;j--){
                arr[j] = arr[j]+arr[j+1];
            }
        }

        int sum=0;
        for(int i=0;i<5;i++){
            sum += arr[i];
        }
        return sum;
    }
};
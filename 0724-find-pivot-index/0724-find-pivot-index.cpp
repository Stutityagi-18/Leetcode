class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n+1,0);
        for(int i=0;i<n;i++){
            left[i+1]=nums[i]+left[i];
        }
        vector<int> right(n+1,0);
        for(int i=n-1;i>=0;i--){
            right[i]=nums[i]+right[i+1];
        }
        for(int i=0;i<n;i++){
            if(left[i]==right[i+1]){
                return i;
            }
        }
        return -1;
        
    }
};
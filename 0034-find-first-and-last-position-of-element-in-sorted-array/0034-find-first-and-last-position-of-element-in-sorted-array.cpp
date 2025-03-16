class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int s = nums.size();
        vector<int> v = {-1,-1};
        for(int i=0;i<s;i++){
            if(nums[i] == target){
                v[0] = i;
                break;
            }
        }
        for(int  i= s-1;i>=0;i--){
            if(nums[i] == target){
                v[1] = i;
                break;
            }
        }

        return v;
    }
};
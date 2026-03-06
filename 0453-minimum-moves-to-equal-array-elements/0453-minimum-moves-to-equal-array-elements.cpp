class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int moves=0;
        int min=*min_element(nums.begin(),nums.end());
        for(int x:nums)
        {
            moves+=x-min;
        }
        return moves;
    }
};
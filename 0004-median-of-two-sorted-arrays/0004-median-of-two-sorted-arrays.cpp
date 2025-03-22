class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v_arr;
        for(auto num:nums1)
            v_arr.push_back(num);
        for(auto num:nums2)
            v_arr.push_back(num);
        sort(v_arr.begin(),v_arr.end());
        int n=v_arr.size();
        return n%2?v_arr[n/2]:(v_arr[n/2-1]+v_arr[n/2])/2.0;
        
    }
};
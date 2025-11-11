class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int j=0,i=m;j<n;j++)
        // {
        //     nums1[i]=nums2[j];
        //     i++;
        // }
        // sort(nums1.begin(),nums1.end());
        int i=0;
        int j=0;
        vector<int>temp;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            temp.push_back(nums1[i]);
                i++;
        }
        while(j<n)
        {
            temp.push_back(nums2[j]);
            j++;
        }
        for(int k=0;k<n+m;k++)
        {
            nums1[k]=temp[k];
        }
        
        
    }
};
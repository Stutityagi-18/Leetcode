class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
     {
       
        int i,j,k;
            // set<vector<int>> sit;
            vector<vector<int>> ans;
            int n=nums.size();
            sort(nums.begin(),nums.end());
            for(i=0;i<n;i++)
            {
                if(i!=0 && nums[i]==nums[i-1]) continue;
                int j=i+1;
                int k=n-1;
                while(j<k){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum<0)
                    {
                        j++;
                    }    
                    else if(sum>0)
                    {
                        k--;
                    } 
                    else
                    {
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1]) j++;
                        while(j<k && nums[k]==nums[k+1]) k--;
                   }   
                } 
                    
            }
            // for(i=0;i<n;i++)
            // {
            //     set<int>hashset;
            //     for(j=i+1;j<n;j++)
            //     {
            //        int third=-(nums[i]+nums[j]);

            //             if(hashset.find(third)!=hashset.end())
            //             {
            //                 vector<int>temp={nums[i],nums[j],third};
            //                 sort(temp.begin(),temp.end());
            //                 sit.insert(temp);

            //             }
            //             hashset.insert(nums[j]);
            //         }
            //     }
            //     return vector<vector<int>>(sit.begin(), sit.end());
            // 
        return ans; 
        }
    };
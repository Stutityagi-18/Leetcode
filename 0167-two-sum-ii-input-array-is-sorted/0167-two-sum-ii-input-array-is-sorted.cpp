class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int i,j;
        // int n=numbers.size();
        // for(i=0;i<n;i++)
        // {
        //     for(j=i+1;j<n;j++)
        //     {
        //         if(numbers[i]+numbers[j]==target)
        //         {
        //             return {i+1,j+1};
        //         }
        //     }
        // }
        // return {};TLE
        // -----TWO POINTER APPROACH-----
        int start=0;
        int end=numbers.size()-1;
        while(start<end)
        {
            int sum=numbers[start]+numbers[end];
            if(sum==target)
                return {start+1,end+1};
            else if(sum<target)
                start++;
            else
                end--;
        }
        return {start++,end--};
        
    }
};
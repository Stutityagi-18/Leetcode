class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(int x:arr)
        {
            mpp[x]++;
        }
        unordered_set<int>s;
        for(auto &it:mpp)
        {
            if(s.count(it.second))
            {
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};
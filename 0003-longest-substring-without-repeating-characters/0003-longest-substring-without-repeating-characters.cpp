class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int n=s.length();
        int left=0;
        int maxlen=0;
        for( int rt=0;rt<n;rt++)
        {
            while(seen.count(s[rt]))
            {
                seen.erase(s[left]);
                    left++;
            }
            seen.insert(s[rt]);
            maxlen=max(maxlen,rt-left+1);
        }
        return maxlen;
        
    }
};
class Solution {
public:
bool isPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string longest = "";

        // Generate all substrings
        for (int i = 0; i < n; i++) {           // start index
            for (int j = i; j < n; j++) {       // end index
                if (isPalindrome(s, i, j)) {    // check palindrome
                    int len = j - i + 1;
                    if (len > (int)longest.size()) {
                        longest = s.substr(i, len);
                    }
                }
            }
        }
        return longest;
    }
};
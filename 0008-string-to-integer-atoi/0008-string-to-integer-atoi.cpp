class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        //ignoring leading spaces
        while (i < n && s[i] == ' ') i++;

        if (i == n) return 0;  //string has only spaces

        //checking sign
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        long ans = 0;

        // processing digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // if overflow 
            if (sign == 1 && ans > INT_MAX) return INT_MAX;
            if (sign == -1 && -ans < INT_MIN) return INT_MIN;

            i++;
        }

        return sign * ans;
    }
};

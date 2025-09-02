class Solution {
public:
int memo[101][101]; // to remember results

    int countuniquepaths(int i, int j, int m, int n) {
        // base case: reached destination
        if (i == m - 1 && j == n - 1) return 1;

        // base case: out of grid
        if (i >= m || j >= n) return 0;

        // if already solved, just return it
        if (memo[i][j] != -1) return memo[i][j];

        // otherwise solve and store it
        return memo[i][j] = countuniquepaths(i + 1, j, m, n) +
                            countuniquepaths(i, j + 1, m, n);
}
    int uniquePaths(int m, int n) {
       
      memset(memo, -1, sizeof(memo)); // fill with -1 initially
        return countuniquepaths(0, 0, m, n);
    }
};
class Solution {
public:
    int n, m;
    
    // Helper: get area of minimal rectangle covering 1's in [r1..r2][c1..c2]
    int getArea(vector<vector<int>>& grid, int r1, int r2, int c1, int c2) {
        int minR = n, maxR = -1, minC = m, maxC = -1;
        for (int r = r1; r <= r2; r++) {
            for (int c = c1; c <= c2; c++) {
                if (grid[r][c] == 1) {
                    minR = min(minR, r);
                    maxR = max(maxR, r);
                    minC = min(minC, c);
                    maxC = max(maxC, c);
                }
            }
        }
        if (maxR == -1) return 0; // no 1s
        return (maxR - minR + 1) * (maxC - minC + 1);
    }
    
    // Correct function name expected by LeetCode
   int minimumSum(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = INT_MAX;
        
        // Case 1: Horizontal strips
        for (int i = 0; i < n-2; i++) {
            for (int j = i+1; j < n-1; j++) {
                int a1 = getArea(grid, 0, i, 0, m-1);
                int a2 = getArea(grid, i+1, j, 0, m-1);
                int a3 = getArea(grid, j+1, n-1, 0, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        // Case 2: Vertical strips
        for (int i = 0; i < m-2; i++) {
            for (int j = i+1; j < m-1; j++) {
                int a1 = getArea(grid, 0, n-1, 0, i);
                int a2 = getArea(grid, 0, n-1, i+1, j);
                int a3 = getArea(grid, 0, n-1, j+1, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        // Case 3: Horizontal then vertical (bottom part)
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < m-1; j++) {
                int a1 = getArea(grid, 0, i, 0, m-1);
                int a2 = getArea(grid, i+1, n-1, 0, j);
                int a3 = getArea(grid, i+1, n-1, j+1, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        // Case 4: Horizontal then vertical (top part)
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < m-1; j++) {
                int a1 = getArea(grid, 0, i, 0, j);
                int a2 = getArea(grid, 0, i, j+1, m-1);
                int a3 = getArea(grid, i+1, n-1, 0, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        // Case 5: Vertical then horizontal (right part)
        for (int i = 0; i < m-1; i++) {
            for (int j = 0; j < n-1; j++) {
                int a1 = getArea(grid, 0, n-1, 0, i);
                int a2 = getArea(grid, 0, j, i+1, m-1);
                int a3 = getArea(grid, j+1, n-1, i+1, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        // Case 6: Vertical then horizontal (left part)
        for (int i = 0; i < m-1; i++) {
            for (int j = 0; j < n-1; j++) {
                int a1 = getArea(grid, 0, j, 0, i);
                int a2 = getArea(grid, j+1, n-1, 0, i);
                int a3 = getArea(grid, 0, n-1, i+1, m-1);
                ans = min(ans, a1 + a2 + a3);
            }
        }
        
        return ans;
    }
};

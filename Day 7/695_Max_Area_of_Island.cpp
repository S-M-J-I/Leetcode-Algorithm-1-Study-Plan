#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int localIslandArea = 0;
    int maxIslandArea = 0;
    
    int max(int a, int b) { return a > b ? a : b; }
    
    void moveAround(vector<vector<int>>& grid,vector<vector<bool>>& visited, int i, int j, int xLen, int yLen) {
        if(i < 0 || i >= xLen || j < 0 || j >= yLen) {
            return;
        }
        
        if(grid[i][j] == 0 || visited[i][j]) {
            return;
        }
        
        if(grid[i][j] == 1) {
            visited[i][j] = true;
            localIslandArea++;
            moveAround(grid, visited, i + 1, j, xLen, yLen);
            moveAround(grid, visited, i - 1, j, xLen, yLen);
            moveAround(grid, visited, i, j + 1, xLen, yLen);
            moveAround(grid, visited, i, j - 1, xLen, yLen);
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int xLen = grid.size();
        int yLen = grid[0].size();
        vector<vector<bool>> visited(xLen, vector<bool>(yLen, false));
        
        for(int i = 0; i < xLen; ++i) {
            for(int j = 0 ; j < yLen; ++j) {
                if(grid[i][j] == 1 && !visited[i][j]) {
                    localIslandArea = 0;
                    moveAround(grid, visited, i, j, xLen, yLen);
                    maxIslandArea = max(maxIslandArea, localIslandArea);
                }
            }
        }
        
        
        return maxIslandArea;
    }
};
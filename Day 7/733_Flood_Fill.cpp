#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    bool canMove(int xLen, int yLen, vector<vector<int>>& image, int x, int y, int newColor, int oldColor)
    {
        if(x >= xLen || x < 0 || y >= yLen || y < 0 || image[x][y] != oldColor || image[x][y] == newColor)
        {
            return false;
        }
        
        return true;
    }
    
    void move(int xLen, int yLen, vector<vector<int>>& image, int x, int y, int newColor, int oldColor)
    {
        image[x][y] = newColor;
        
        // move up
        if( canMove(xLen, yLen, image, x-1, y, newColor, oldColor) ) {
            move(xLen, yLen, image, x-1, y, newColor, oldColor);
        }
        // move down
        if( canMove(xLen, yLen, image, x+1, y, newColor, oldColor) ) {
            move(xLen, yLen, image, x+1, y, newColor, oldColor);
        }
        //move left
        if( canMove(xLen, yLen, image, x, y-1, newColor, oldColor) ) {
            move(xLen, yLen, image, x, y-1, newColor, oldColor);
        }
        //move right
        if( canMove(xLen, yLen, image, x, y+1, newColor, oldColor) ) {
            move(xLen, yLen, image, x, y+1, newColor, oldColor);
        }
        
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int xLen = image.size();
        int yLen = image[sr].size();
        move(xLen, yLen, image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};
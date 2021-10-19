/** Rotate array */
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
        vector<int> res = nums;
        for(int i = 0 ; i < n; ++i) {

            nums[(i + k) % n] = res.at(i);
        } 
    }
};
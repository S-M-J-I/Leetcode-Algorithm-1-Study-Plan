/** Search insert position */
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    int BSearch(vector<int>& nums, int low, int high, int target) {
        if(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                return BSearch(nums, mid + 1, high, target);
            }
            else {
                return BSearch(nums, low, mid - 1, target);
            }
        }
        
        return -1;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int res = BSearch(nums, 0, nums.size()-1, target);
        
        if(res == -1) {
            for(int i = 0; i < nums.size(); ++i) {
                if(target < nums[i]) {
                    return i;
                }
            }
            
            res = nums.size();
        }
        
        return res;
    }
};

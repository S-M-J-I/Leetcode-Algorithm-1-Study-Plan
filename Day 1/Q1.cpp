/** Binary Search */
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
    
    int search(vector<int>& nums, int target) {
        return BSearch(nums, 0, nums.size()-1, target);
    }
};

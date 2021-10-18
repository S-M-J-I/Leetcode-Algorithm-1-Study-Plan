/** Move Zeroes */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size() <= 1) {
            cout << "[";
            for(int i = 0; i < nums.size(); ++i) {
                
                
                if(i == nums.size() - 1) {
                    cout << nums[i] << "";
                }

                else {
                    cout << nums[i] << ",";
                }
            }
            cout << "]\n";
            return;
        }
        
        int deficit = 0;
        for(int i = 0; i < nums.size()-1; i++) {
                    
            if(nums.size() == 0) {
                break;
            }
            
            if(nums[i] == 0) {
                nums.erase(nums.begin() + i);
                deficit++;
                i--;
            }
        }
        
        while(deficit--) {
            nums.push_back(0);
        }
        
        cout << "[";
        for(int i = 0; i < nums.size(); ++i) {
            if(i == nums.size() - 1) {
                cout << nums[i] << "";
            }
            
            else {
                cout << nums[i] << ",";
            }
        }
        cout << "]\n";
        
    }
};
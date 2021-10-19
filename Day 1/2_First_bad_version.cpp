/** First bad version */
#include<bits/stdc++.h>

using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version); // this func is defined by Leetcode

class Solution {
public:
    int firstBadVersion(int n) {
        int mid,b=1,e=n;
        int ans=1;
        while(b<=e )
        {
            
            mid=b+(e-b)/2;
            if(isBadVersion(mid)==1)
            {
                ans=mid;
                e=mid-1;
                continue;
            }
            else 
            {
                b=mid+1;
            }    
        }    
        return ans;
    }
};


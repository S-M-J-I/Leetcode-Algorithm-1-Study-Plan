#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int max(int a, int b) {return a > b ? a : b;}

    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) {
            return 0;
        }

        unordered_map<char, int> position;
        int length = 0;

        for(int i = 0, j = 0; j < s.length(); ++j) {
            char ch = s[j];
            if(position.count(ch)) {
                i = max(i, position[ch] + 1);
            }
            position[ch] = j;
            length = max(length, j - i + 1);
        }

        return length;
    }
};
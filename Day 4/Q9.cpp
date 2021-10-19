#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    string reverseWords(string s) {
        string result = "";

        istringstream ss(s);

        string word;

        while (ss >> word) {
            reverse(word.begin(), word.end());
            result.append( word + " " );
        }

        result.pop_back();
        
        return result;
    }
    
};

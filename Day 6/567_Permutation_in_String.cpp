#include <bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2) {

    if (s1.length() > s2.length()){
        return false;
    }

    else if (s1 == s2) {
        return true;
    }

    int i = 0, j = 0;
    while (i < s2.length() && j < s2.length()) {
        
        while (j - i + 1 < s1.length()){
            j++;
        }

        string str(s2.begin() + i, s2.begin() + j + 1);
        if (is_permutation(str.begin(), str.end(), s1.begin())){
            return true;
        }

        i++;
        j++;
    }

    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    string t1 = "ab", t2 = "eidboaoo";

    cout << checkInclusion(s1, s2) << "\n";
    cout << checkInclusion(t1, t2) << "\n";
}
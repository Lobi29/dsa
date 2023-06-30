#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int maxLength = 0;
    int refCount = 1;

    unordered_set<char> st;

    for (int i = 0; i < s.length(); i++) {

        char chr = s.at(i);
        
        if (st.find(chr) == st.end()) 
        {
            refCount++;
        } else if (st.find(chr) != st.end())
        {
            refCount = 1;
            st.clear();
            st.insert(chr);
        }


        maxLength = max(maxLength, refCount);
    }

    return maxLength;
}
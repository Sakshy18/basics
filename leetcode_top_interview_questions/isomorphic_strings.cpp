// Given two strings s and t, determine if they are isomorphic.Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving 
// the order of characters. No two characters may map to the same character, but a character may map to itself.

// Input: s = "egg", t = "add"
// Output: true
// Example 2:
// Input: s = "foo", t = "bar"
// Output: false

code:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2;
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]] && m1[s[i]]!= t[i]) return false;
            if(m2[t[i]] && m2[t[i]]!= s[i]) return false;

            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }

        return true;
    }



// intuition:
// mp[s[i]] will be true only when s[i] appeared over once. After s[i] appeared, mp[s[i]] will record the corresponding letter t[i], and when it appeared second time, we will check if the corresponding letter recorded in first time was equal to t[i](second time) or not. If not, we return false.
// E.g.
// aabbaab
// bbaaabb
// when index = 4, s[4] = 'a' and 'a' has appeared over once, 'a' 's corresponding letter in t is 'b', so when (s[4] is exists and m[s[4]] ('b') != t[4] ('a')), we return false because the letter t[4] should be 'b'.
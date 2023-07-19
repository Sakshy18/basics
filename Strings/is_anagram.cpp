// This idea uses a hash table to record the times of appearances of each letter in the two strings s and t.
//  For each letter in s, it increases the counter by 1 while for each letter in t, it decreases the counter by 1. Finally, all the counters will be 0 if they two are anagrams of each other.
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

  bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<char,int> m1;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
            m1[t[i]]--;

        }

        for(auto x:m1)
        {
            if(x.second) return false;
        }
        return true;
    }
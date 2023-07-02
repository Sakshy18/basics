//given a string rreturn the max length of substring that can be formed without taking repeating characters
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

//brute:force:traverse whole string twice and find all the substring and store the freq and length using a hashmaps
//tc->o(n square) sc-> o(n)//as using extra data structure

<*****************************>
//better approach:using 2 pointers ie left and right both pointing at 0 first ; using aa set to store the elements for checking repetitinos; using a varibale length to update max length
//s is string:
//n=s.length();
//int left=s.begin()/s[0]
//int right=s.end()//s[n-1];
//we iterate string for a range l to r and length will be l-r+1
//tc->o(2n)  because we r using 2 pointers and each pointer has traversed an element once ie left ka o(n) + right ka o(n)=> o(2n)
//sc-> o(n) as we using set to store elements

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <int> store;
        int n=s.length();
        int l=0;
        int max_length=INT_MIN;
        if(s.size()==0)
        {
            return 0;
        }
        for(int r=0;r<n;r++)
        {
            if(store.find(s[r])!= store.end())   //if u find duplicate 
            {
                while(l<r && (store.find(s[r])!= store.end()) )
                {
                    store.erase(s[l]);   //removing characters from set until there r no repetitions
                    l++; ///increasing l agey as we r removing ek character
                }
            }
            store.insert(s[r]);
            max_length=max(max_length,r-l+1);
        }
        return max_length;  
    }
};
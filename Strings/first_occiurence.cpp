Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
  int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
        for(int i=0;i<n1-n2+1;i++)
        {
            int j=0;
            while(j<n2)
            {
                if(haystack[i+j]==needle[j]) j++;
                else break;
            }
            if(j==n2)
            {
                return i;
            }
        }
        return -1;
    }

    // intuition:just checking all substrings of length 3 with haystack and returning index
    // navive approach
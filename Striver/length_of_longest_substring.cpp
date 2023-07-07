given a string find length of longest substring without repeatinh characters
code:
//SLIDING WINDOW  - TIME COMPLEXITY O(2n)
        //                  SPACE COMPLEXITY O(m)   //size of array
        int lengthOfLongestSubstring(string s) {
        int store[256]={0}; //array to store the occurences of all the characters
        int l=0;    //left pointer
        int r=0;    //right pointer
        int ans=0;  //initializing the required length as 0
        
        while(r<s.length())     //iterate over the string till the right pointer reaches the end of the string 
        {
            store[s[r]]++;      //increment the count of the character present in the right pointer 
            
            while(store[s[r]]>1)    //if the occurence become more than 1 means the char is repeated
            { 
                store[s[l]]--;   //reduce the occurence of temp as it might be present ahead also in the string
                l++;         //contraction of the present window till the occurence of the 't' char becomes 1
            }
            
            ans = max(ans,r-l+1);    //As the index starts from 0 , ans will be (right pointer-left pointer + 1)
            r++;        // now will increment the right pointer 
        }
        return ans;
    }

approach: using a sliding window inorder to store  the range of length of 2 pointers left and right
we use right pointer to iterate over the string and left is lower range
jaise hi we come across an element put it in array and incdrement right check before putting ki array me same element to nahi hai
agar hai to left++ and right also agey jayega
if its present we also reduce its occurence

if not present then we just continue
l tabtak++ hoga jab tak our array is free of duplicates

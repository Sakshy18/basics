Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Input: s = " "
Output: true

bool isPalindrome(string s) {
       int n=s.size();
       int left=0;
       int right=n-1;
       while(left<right)
       {
           while(left<right && !isalnum(s[left]))
           {
               left++;
           }
           while(left<right && !isalnum(s[right]))
           {
               right--;
           }
           if(tolower(s[left++])!=tolower(s[right--]))
           {
               return false;
           }
       }
       return true;
    }
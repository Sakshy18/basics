Input: s = "the sky is blue"
Output: "blue is sky the"
Input: s = "a good   example"
Output: "example good a"

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
      int n=s.length();
      int start=0;
      int end=0;
      int i=0;

      while(i<n)
      {
          while(i<n && s[i]==' ')
          {
              i++;
          }

          while(i<n && s[i]!=' ')
          {
              s[end]=s[i];
              i++;
              end++;
          }

          if(start<end)
          {
            reverse(s.begin()+start,s.begin()+end);
            s[end]=' ';
            end++;
            start=end;


          }
      }
          if(end>0)
          {
              s.resize(end-1);
          }
          return s;

      
        
    }
};
intuition:
reverse the string
iterate until u r free of white spaces
once u get a character iterate till u get its end;
once got start and end for a word,reverse the word by using reverse fucntion again
add a space after word reversed
and new start is the end of last word;
if there are spaces after end we remove them so resize function

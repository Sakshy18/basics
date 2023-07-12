// Given a string s consisting of words and spaces, return the length of the last word in the string.
// Input: s = "Hello World"
// Output: 5
// Input: s = "   fly me   to   the moon  "
// Output: 4
  int lengthOfLastWord(string s) {
        int count=0;
        int temp=s.length()-1;
        while(temp>=0 && s[temp]==' ')  //if last word is space so we just take pointer left
        {
            temp--;
        }
        while(temp>=0 && s[temp] != ' ')//if not space, we increase counter and decrease pointer to go left
        {
            count++;
            temp--;
        }
        return count;
    }
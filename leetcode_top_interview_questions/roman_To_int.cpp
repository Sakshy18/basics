code:
 int romanToInt(string s) {
        unordered_map<char,int> m1;
        m1['I']=1;
        m1['V']=5;
        m1['X']=10;
        m1['L']=50;
        m1['C']=100;
        m1['D']=500;
        m1['M']=1000;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]]<m1[s[i+1]])
            {
                ans=ans-m1[s[i]];

            }
            else{
                ans=ans+m1[s[i]];
            }
        }
        return ans;

    }


// The for loop iterates over each character in the input string s.
// For the example "IX":

// When i is 0, the current character s[i] is 'I'. Since there is a next character ('X'), and the value of 'I' (1) is less than the value of 'X' (10), the condition m[s[i]] < m[s[i+1]] is true. In this case, we subtract the value of the current character from ans.

// ans -= m[s[i]];
// ans -= m['I'];
// ans -= 1;
// ans becomes -1.

// When i is 1, the current character s[i] is 'X'. This is the last character in the string, so there is no next character to compare. Since there is no next character, we don't need to evaluate the condition. In this case, we add the value of the current character to ans.

// ans += m[s[i]];
// ans += m['X'];
// ans += 10;
// ans becomes 9.

// For the example "XI":

// When i is 0, the current character s[i] is 'X'. Since there is a next character ('I'), and the value of 'X' (10) is greater than the value of 'I' (1), the condition m[s[i]] < m[s[i+1]] is false. In this case, we add the value of the current character to ans.

// ans += m[s[i]];
// ans += m['X'];
// ans += 10;
// ans becomes 10.

// When i is 1, the current character s[i] is 'I'. This is the last character in the string, so there is no next character to compare. Since there is no next character, we don't need to evaluate the condition. In this case, we add the value of the current character to ans.

// ans += m[s[i]];
// ans += m['I'];
// ans += 1;
// ans becomes 11.
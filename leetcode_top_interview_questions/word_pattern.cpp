// Given a pattern and a string s, find if s follows the same pattern.
// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true
// Input: pattern = "abba", s = "dog cat cat fish"
// Output: false

code:
 bool wordPattern(string pattern, string s) {
    unordered_map<char,int> m1;
    unordered_map<string,int> m2; 
    istringstream in(s);
    int i=0; int n=pattern.size();
    for(string word;st>>word ;i++ )
    {
        if(i==n || m1[pattern[i]]!= m2[word] ) return false;////If it reaches end before all the words in string 's' are traversed || if values of keys : pattern[i] & word don't match return false


        m1[pattern[i]]=m2[word]=i+1;  //else setting dono ka second value to i+1
        

    }
    return i==n;
    }

// intuition:
// Use two maps, one maps the letters of pattern to index+1 & the other maps the words in s to index+1.
// Use istringstream to extract words from s & i to traverse pattern.
// Return true if the values of both the keys ( m1[pattern[i]] & m2[word] ) are equal && i reaches pattern.size() & stops. (ie; No. of words in s = pattern.size() ), otherwise false.
// Time Complexity : O(m) - m = No. of words in s.
// Space Complexity : O(m)

// A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin). To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input. 

// Basic methods are:

// clear()- To clear the stream.
// str()- To get and set string object whose content is present in the stream. 
// operator <<- Add a string to the stringstream object. 
// operator >>- Read something from the stringstream object.
// Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

// Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

// For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
 

// Example 1:

// Input: s = "ab", goal = "ba"
// Output: true
// Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
// Example 2:

// Input: s = "ab", goal = "ab"
// Output: false
// Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.

   bool buddyStrings(string s, string goal) {
        int size = s.length();  
        if(s == goal){   //if both strings are equal check
            set<char> temp(s.begin(), s.end());  //making a set of char of s named temp
            return temp.size() < goal.size(); // Swapping same characters 
        
        // This comparison checks if the size of the set temp (number of unique characters in s) is less than the size of the string goal. If it is, it means there are duplicate characters in s, and swapping any two of them would result in s becoming equal to goal. In this case, the function returns true; otherwise, it returns false.

}

        int i = 0;
        int j = size - 1;
//j runs from back i from front check if  here s[i] and goal [i] are first pair of charcaters that are different
        while(i < j && s[i] == goal[i]){  //kuch nahi karna agey badhna if not equal eg ab and ba a!=b hence do nohting agey badho
            i++;
        }

        // ab'
        // ba'

        while(j >= 0 && s[j] == goal[j]){  //checking from back same like i wala
            j--;
        }

        if(i < j){
            swap(s[i], s[j]);   //alag characters mile toh swap them and then check if s==goal
        }

        return s == goal;
    }

    approach:
     to check if it is possible to swap two characters in string s to make it equal to string goal. 
     It first handles the case where s and goal are identical by checking for duplicate characters. If they are not identical, it looks for the first pair of mismatched characters and tries swapping them to achieve equality.

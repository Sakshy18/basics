// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 1:

// Input: nums = [2,2,3,2]
// Output: 3
// brute force:
// take a map and map freq with number to find later which element has feq 1 and return it
// but we using extra space ;
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m1;
        for(auto i:nums)   //putting nums ke elements in map
        {
            m[i]++;
        }

        for(auto x:m)  //checking in map to find element with 1 occurence
        {
            if(x.second==1)   //occurence of number 
            {
                return x.first;  //number itself
            }
        }

        return -1;
    }



optimal:bit manupilation

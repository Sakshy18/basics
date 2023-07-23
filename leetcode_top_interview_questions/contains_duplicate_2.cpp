Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true
code:
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]))   //checks if this number is already in map or not
            {
                if(abs(i-m[nums[i]]<=k) )
                {
                    return true;
                }


            }

            m[nums[i]]=i;  //putting number in map 
        }
return false;
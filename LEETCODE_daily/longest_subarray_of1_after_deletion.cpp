Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
Example 1:

Input: nums = [1,1,0,1]
Output: 3

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int zero=0;
        int ans=0;

        for(int right=0;right<n;right++)
        {
            if(nums[right]==0)
            {
                zero++;
            }

            while(zero>1)
            {
                if(nums[left]==0)
                {
                    zero--;
                }

                left++;
            }

            ans=max(ans, right-left+1-zero);  // as right - left gives total no of elements between them excluding zero and +1 as array index starts from 0
        }

        return (ans==n) ? ans-1 : ans;  //if length of array and subarray both are same ie no zero toh ans is ans-1
    // Input: nums = [1,1,1]
    // Output: 2
    // Explanation: You must delete one element.
        
    }
};

// approach: used sliding window here;
// left is to keep the sliding window ka track, right is traversing the array and moving forward while left is just increasing or decreaing window based on subarray size
// if encounters zeros left will decrease as length of window decreases, 

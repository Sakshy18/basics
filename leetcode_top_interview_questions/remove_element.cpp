Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5,

code:
 int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }


approach:
Initialize index to 0, which represents the current position for the next non-target element.
Iterate through each element of the input array using the i pointer.
For each element nums[i], check if it is equal to the target value.
If nums[i] is not equal to val, it means it is a non-target element.
Set nums[index] to nums[i] to store the non-target element at the current index position.
Increment index by 1 to move to the next position for the next non-target element.
Continue this process until all elements in the array have been processed.
Finally, return the value of index, which represents the length of the modified array.
Complexity
Time complexity:
O(n)

Space complexity:
O(1)
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
void moveZeroes(vector<int>& nums) {
       int j;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
           {
               j=i;
               break;
           }
       }

       for(int i=j+1;i<nums.size();i++)
       {
           if(nums[i]!=0)
           {
               swap(nums[j],nums[i]);
               j++;

           }
       }
}


// approach: 2 pointer approach take j aspointer which pooints only to zeros and i traverse in array whenever i comes across a non zero element we swap elements so that
// and i and j will be incremeneted  if both elements are zero we dont swap we just incremenet i 

// Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// subarray
// whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.
int minSubArrayLen(int target, vector<int>& nums) {
     int i=0;
     int j=0;
     int sum=0;
     int mini=INT_MAX;
     while(j<nums.size())
     {
         sum=sum+nums[j];
         while(sum>=target)
         {
             sum=sum-nums[i];
             mini=min(j-i+1,mini);
             i++;
         }
         j++;
     }

     if(mini==INT_MAX)
     {
         return 0;
     }

     return mini;
    }
 
// dry run:
// 7, nums = [2,3,1,2,4,3]
//         j=0 < 6
//         sum=0+2=2
//         j++
//         j=1 
//         sum=2+3=5
//         j++
//         j=2
//         sum=5+1=6
//         j++
//         j=3
//         sum=6+2=8
//         8>7
//         sum=sum-2=6
//         mn=min(4,mn)=4;
//         i=1

//         j=4
//         sum=10
//         10>7
//         sum=sum-3=7
//         mn=(4,4)=4
//         i=2
//         7>=7
//         sum=7-1=6
//         mn=min(3,4)=3
//         j=5
//         i=3
//         sum=6+3=9
//         9>7
//         sum=9-2=7
//         min=min(3,3)=3
//         i=4;j=5
//         7>=7;
//         sum=7-4=3;
//         mn=min(2,3)=2;

//         mn=2;

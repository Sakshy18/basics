// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

//  Input: nums = [1,3,4,2,2]
// Output: 2

   int findDuplicate(vector<int>& nums) {
        //nums is name of vector
        int slow = nums[0];
        int fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];

        }while(slow!=fast);
        fast=nums[0];
        
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];

        }
        return slow;
    }

// approach:
// keeping a slow and fast pointer to keep track of the repetitive element
// Assume each nums value as an address just like in linked list node addr.
//         Then since there is one number whith duplicates, that means there are multiple instances
//         of the same address, so it is a cycle just like in linked list. Do the same thing
//         as in linked list.
//         this approacg is called floyd's solution


// approach 2:
//     // TC: O(N), SC: O(1)
//     /*
//         Since the numbers are [1:N], so we use the array indices for storing the
//         visited state of each number, only the duplicate will be visited twice.
//         For each number we goto its index position and multiply by -1. In case
//         of duplicate it will be multiplied twice and the number will be +ve.
//     */
//     int indexSolution(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             int index = abs(nums[i]) - 1;
            
//             // mark as visited
//             nums[index] *= -1;
//             // incase of duplicate, this will become +ve 
//             if(nums[index] > 0)
//                 return abs(nums[i]);
//         }    
//         return -1;
//     }        
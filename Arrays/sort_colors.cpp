Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
 with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
 void sortColors(vector<int>& nums) {
        //nums is vector name;
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid]==0)
            {
                //eventually swapping items jo baju baju me hai
                swap(nums[mid],nums[low]);
                low++;
                mid++;

            }
            else if(nums[mid]==1)
            {
                mid++;
                
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
      
    }

    //approach: using the same technique for sort an array of 0 1's and 2's
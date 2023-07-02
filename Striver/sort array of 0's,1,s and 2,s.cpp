class Solution {
public:
    void sortColors(vector<int>& nums) {
        //nums is vector name;
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid]==0)
            {
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
};


//using dutch flag algorithm  in here we take 3 pointers mid low and high and make sure that mid to high contains unsorted array if we come acrooss 
//0 look in code what we do
//given an array containing only 0 1 and 2 sort them in ascending order
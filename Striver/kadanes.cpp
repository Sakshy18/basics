class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //nums is name of array:
        long long current_sum=0;
        long long max_sum=LONG_MIN;
        for(int i=0;i<nums.size();++i)
        {
            current_sum=current_sum+nums[i];
            if(current_sum>max_sum)
            {
                max_sum=current_sum;
            }
            if(current_sum<0)   //if sum is -ve we dont consider it as it will only bring any positive sum down.
            {
                current_sum=0;
            }
        }
    return max_sum;
    }
};
//given an array give the max sum of subbarray.
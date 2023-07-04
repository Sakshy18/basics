// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3

int majorityElement(vector<int>& nums) {
        int n=nums.size();
       //if we sort the array ( which will bring all the occurences of majority element together) 
       //, the (Nth element will always be the majority element.
       sort(nums.begin(),nums.end());
       return nums[n/2];

    }   

optimal
:    

int cnt=0;
int el;
int n=v.size();
for(int i=0;i<n;i++)
{
    if(cnt==0)
    {
        cnt=1;
        el=v[i];
    }
    else if(v[i]==el)
    {
        cnt++;
    }

    else{
        cnt--;
    }

    int counter=0;
    for(int i=0; i<n;i++)
    {
        if(v[i]==el) counter++;
    }

    if(counter>(n/2))
    {
        return el;
    }
    return -1;
}

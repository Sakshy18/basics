//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// //Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
//this is a better approach  //compleexity -> O(N) <- worst or O(logN)<- best and avg
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //nums is the name of array
        map<int,int> m1;  //making a vector to store each number so later when we r searching for missing number we can just check hash to find it
        int n=nums.size();
        for(int i=0;i<n;i++)  //traversing array
        {
            int a=nums[i];  //2  //current number
            int num2=target-a;  //7 //t=9;i=0;nums[i]=2 ;num2=7    //number tht is neeedd to make target
            if(m1.find(num2)!=m1.end())  //if map has the required number neede and it is not the end of map then we rrteurn the indexes of number and current index i

            {
                return{m1[num2],i};

            }
            m1[a]=i;   //storing value of current num ie a on ith index key value pair of int int
        }
        return{-1,-1};

    }
};
//a brute force approach would be to traverse array twice and comapre each number with adding every other number to target and seeing
//oif it adds up to target
//complexity -> O(N2)  o n square
//optimal approach is there but it wont give u index and only yes or no if pair exists
//its using 2 pointer but complexity is kinda similiar to better so use map
//in 2 pointer u keep have to sort the array first then make a left pointer at index 0 and right at last index
//comapre elements at both index if sum==target return yes
//if sum<target that means u need a greater value so left++ ie move forward as sorted so greater values are ahead
//if sum>target so right-- as we need to lessen value
//base: while(left<right)//once they crisscross that means no ppair exists so we return no

class Solution {
public:
    string read(vector<int>& nums, int target,int n) {
        //n is size of array
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(nums[left]+nums[right]==target)
            {
                return "yes";
            }
            else if(nums[left]+nums[right]<target)
            {
                left++;
            }
            else
                right--;

        }
    return "No";

    }
};
//tc: -> O(N)
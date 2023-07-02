class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //array 1=nums1 
        //arr1 size=m
        //arr2=nums2
        //arr2 size=n;
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
                j--;
                k--;
        }
    }
};
//given 2 sorted arrays merge them without using extra space
//gap method bhi hai but kinda comples
//1 4 7 8 10
//2 3 9 
//i=4
//j=2
//k=5
//1 4 7 8, , 10
//i=3,k=4
//9>8 ie  //1 4 7 8,9,10
//j=1; k=3; i=3;
//8>3 1,4,7,8,9,10 
//i=2,k=2,j=1;
//i=1;k=1;j=1 1,4,7,8,9,10;
//i=0;k=0;j=1;
//1,4,7,8,9,10;
//1<3 so j=0;i=0;k=0
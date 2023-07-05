// //brute: iterate in array and find kon missing hai and mkon repeat
// for(i=0->n
// {
//     repeating, missing =-1
//     cnt=0;
//     for(j=0->n-1)
//     {
//         if(arr[j=i])
//         {
//             cnt++
//         }
//         if(cnt==2)  repeating i;
//         else if(cnt==0)  missing =i

//         if(repeating != -1 && missing != -1)
//             break;

//     }


// })


// tc:o(n^2)
// sc->o(n)

// better: hashing whenever we want to count something
// take a hash array and take size=n+1 and initially take 0 as all elements
// go to iterating array and whatever element u find go to its hasharry and increment its count all no will have 1 count excpet repeating has 2
// and missing has 0

// code:
// int n=a.size()
// int hash[n+1]={0};
// for(auto i: a)
// {
//     hash[i]++
// }

// int repeating,missing=-1
// for(i=1->n)
// {
//     if(hash[i]==2) repeating=i
//     else if(hash[i]==0) missing=i

    
//     if(repeating != -1 && missing != -1)
//         break;
// }

// tc:o(n)
// sc:o(n)


// optimal: mathematics solution:
// x->repeating
// y=->missing
// s=sum of all elements
// sum all elements from 1 to 6 and sum all elements from array
// sum of n natural no's is n(n+1)/2
// now subtract them both
// we will be left with onluy 1 and -5 which gives me -4
// x-y=-4 now-equation1
// now sum up the squares of arr element : and subtract sum of squares of first n natural nos
// x^2 - y^2 =-24
// (x-y)(x+y)=-24 solve and get x+y=6 eqn 2
// now we have 2 eqn and solve them

// therefore we get both no's
// summation of squares of natural no's is n*(n+1)(2n+1)/6

// code:

// '
// long long n= a.size();
// long long sn= n*(n+1)/2
// long long s2n=(n)(n+1)(2n+1)/6
// long long s=0;s2=0

// for(i=0->n)
// {
//     s=s+a[i] //summing all elements of array
//     s2=s2+( long long) a[i] * ( long long) a[i]; //summing squares of elements of array

// }

// long long val1=s-sn //x-y
// long long val2=s2-s2n  //x+y

// val2=val2/val1;  //x+y
// long long x=(val1+val2)/2;
// long long y=x-val1;

// return {(int x), (int y)}

// tc:o(n)
// sc:o(n)

// q. You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	
   
    int hash[n+1] ={0};
    
    for(int i=0;i<n;i++){

        hash[arr[i]]++;

    }
	int repeating=-1;
    int missing=-1;
    
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==2)
        {
            repeating=i;
            
        }
        
        else if(hash[i]==0)
        {
            missing=i;
        }
        
        if(repeating!=-1 && missing !=-1)
		{
			break;
		}
            
        
    
    }
    return {missing,repeating};
    
    
	
}

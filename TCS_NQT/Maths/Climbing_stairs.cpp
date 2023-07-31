// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb .
// i/p=2;
// o/p=2;

// i/p=5;
// o/p=8;

// code
// tc->o(n)  //linearly traversing 
// sc->o(n) //as we used extra array to store

int climbStairs(int n) {
        if(n<=2)
        {
            return n;
        }

        vector<int> v1(n+1);
        v1[0]=0;
        v1[1]=1;
        v1[2]=2;
        for(int i=3;i<=n;i++)
            v1[i]=v1[i-1]+v1[i-2];
        return v1[n];
        
        

    }

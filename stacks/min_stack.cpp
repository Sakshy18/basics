// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

//  Input
// ["MinStack","push","push","push","getMin","pop","top","getMin"]
// [[],[-2],[0],[-3],[],[],[],[]]

// Output
// [null,null,null,null,-3,null,0,-2]

// Explanation
// MinStack minStack = new MinStack();
// minStack.push(-2);
// minStack.push(0);
// minStack.push(-3);
// minStack.getMin(); // return -3
// minStack.pop();
// minStack.top();    // return 0
// minStack.getMin(); // return -2

//  I am using Stack of Pair of Int. The first value of the pair would store the element of the normal stack and the second value would store the minimum up to that point in the stack.
// So even if the minimum element of the stack is removed from the top, we still have a backup of the next minimum element in the pair. So for every element pushed in the stack, it stores its corresponding minimum value.

code:
vector<pair<int,int>>s1;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s1.empty())
        {
            s1.push_back({val,val});
        }

        else
        {
            s1.push_back({val, min(s1.back().second,val)});
        }
    }
    
    void pop() {
        s1.pop_back();
    }
    
    int top() {
        return s1.back().first;
    }
    
    int getMin() {
        return s1.back().second;
    }
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current);

int main() {
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);
            
            
        }
        if(sizeOfStack==1)
        {
            cout<<myStack.top();
        }
        else
        {
        
            stack<int> modified=deleteMid(myStack,myStack.size(),0);
            
            
            while(!modified.empty())
            {
                cout<<modified.top()<<" ";
                modified.pop();
            }
        }
        cout<<endl;
        
    }   
	return 0;
}// } Driver Code Ends


//User function Template for C++

//You need to complete this function
stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    //Your code here
    if(s.empty())
        return s;
    int top = s.top();
    s.pop();
    stack<int> s1 = deleteMid(s, sizeOfStack, current + 1);
    if(current != sizeOfStack/2)
        s1.push(top);
    return s1;
}
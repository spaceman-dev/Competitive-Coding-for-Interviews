// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    Node *temp = head;
    Node *temp1 = head;
    int n = 0;
    while(temp1 != NULL)
    {
        n++;
        temp1 = temp1->next;
    }
    char *s = (char*)malloc(n*sizeof(char));
    int i = 0;
    while(temp != NULL)
    {
        s[i] =  temp->data;
        temp = temp->next;
        i++;
    }
    int flag = 0;
    for(int i = 0, j = n - 1 ; i < n ; i++, j--)
    {
        if(s[i] != s[j])
            flag++;
    }
    if(flag == 0)
        return true;
    else
        return false;
}
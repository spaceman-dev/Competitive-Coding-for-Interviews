// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *rotate(struct Node *head, int k);

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        head = rotate(head,k);
        printList(head);
    }
    return 1;
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

// This function should rotate list counter-clockwise
// by k and return new head (if changed)

Node* rotate(Node* head, int k)
{
    // Your code here
    Node* temp1 = head;
    Node* temp2 = NULL;
    Node* head1 = head;
    Node* temp = head;
    int n = 1;
    while(temp->next!=0)
    {
        n++;
        temp = temp->next;
    }
    for(int i = 0 ; i < k ; i++)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    Node *temp3 = temp1;
    while(temp3->next != NULL)
        temp3 = temp3->next;
    temp3->next = head1;
    head = temp1;
    return head;
}

//Another rotate code
// Node* rotate(Node* head, int k)
// {
//     // Your code here
// Node* temp = head;
// while(temp->next){
// temp = temp->next;
// }
// temp->next = head; // linking last node with first node
// Node *end;
// while(k--){
// end = head;
// head = head->next;
// }
// // end is previous of updated head, so make end of next as null as it is the last node of updated linked list
// end->next = NULL;
// return head;
// }
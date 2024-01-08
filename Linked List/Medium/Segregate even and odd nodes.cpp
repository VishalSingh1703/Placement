https://www.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        Node *oddStart = nullptr, *oddEnd = nullptr, *evenStart = nullptr, *evenEnd = nullptr;
        
        while(head)
        {
            if(head->data%2 == 0)
            {
                if(!evenStart) evenStart = evenEnd = head;
                else
                {
                    evenEnd->next = head;
                    evenEnd = evenEnd->next;
                }
            } else {
                if(!oddStart) oddStart = oddEnd = head;
                else
                {
                    oddEnd->next = head;
                    oddEnd = oddEnd->next;
                }
            }
            head = head->next;
        }
        if(evenStart)
        {
            evenEnd->next = oddStart;
            if(oddEnd) oddEnd->next = nullptr;
            return evenStart;
        } else {
            return oddStart;
        }
    // while (head) {
    //     if (head->data % 2 == 0) {
    //         if (!evenStart) {
    //             evenStart = evenEnd = head;
    //         } else {
    //             evenEnd->next = head;
    //             evenEnd = evenEnd->next;
    //         }
    //     } else {
    //         if (!oddStart) {
    //             oddStart = oddEnd = head;
    //         } else {
    //             oddEnd->next = head;
    //             oddEnd = oddEnd->next;
    //         }
    //     }
    //     head = head->next;
    // }

    // if (evenStart) {
    //     evenEnd->next = oddStart;
    //     if (oddEnd) {
    //         oddEnd->next = nullptr;
    //     }
    //     return evenStart;
    // } else {
    //     return oddStart;
    // }
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends

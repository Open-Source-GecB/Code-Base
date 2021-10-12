/*
Middle Element of Linked List | CPP | GeeksForGeeks | C++ | https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/ | By- Ajinkya Deshpande

Given a singly linked list of N nodes. The task is to find the middle of the linked list.

Example 1:

Input:
1->2->3->4->5

Output: 3

Explanation: The middle node of the list is 3.
*/

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
/* Function to get the middle of the linked list*/
int getMiddle(Node *head);
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		cout<<getMiddle(head)<<endl;
	}
	return 0; 
} 

// } Driver Code Ends


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head) {
    if (head==NULL) return -1;
    
    Node *slow = head;
    Node *fast = head->next;
    
    while (fast != NULL and fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next ->next;
    }
    
    if (fast != NULL) {
        return slow->next->data;
    }
    return slow-> data;
}

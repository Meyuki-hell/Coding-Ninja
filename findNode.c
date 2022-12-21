#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

int findNode(Node *head, int n){

	Node *temp = head; 
	if(head == NULL){
		return -1;
	}
	int i = 0;
	//Node *temp = head;
	while(temp != NULL){
		if(temp -> data == n){
			return i;
		}
		else{
			temp = temp -> next;
			i++;
		}	
	}
	if(temp == NULL){
		return -1;
	}
	
	
}


Node *takeinput(){
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data!= -1) {
		Node *newnode = new Node(data);
		if(head == NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail -> next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main(){
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;	
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}

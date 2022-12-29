Node *rev(Node *head){
	if(head == NULL){
		return NULL;
	}
	if(head -> next == NULL){
		return head;
	}
	Node *prev = head;
	Node *curr = head -> next;
	prev -> next = NULL;
	while(curr){
		Node *temp = curr -> next ;
		curr -> next = prev;
		prev = curr;
		curr = temp;
	}
	return prev;
}

int len(Node *head){
	int i = 0;
	Node *temp = head;
	while(temp){
		temp = temp -> next;
		i++;
	}
	return i;
}

Node *kReverse(Node *head, int k)
{
	int count =0;
	if(head == NULL){
		return NULL;
	}
	
	Node *front = head;
	Node *tail = head;
	Node *newhead;// store head of sub rev

	for(int i = 1; i < k; i++){
		if(tail -> next == NULL) break;
		else tail = tail -> next;
	}
	Node *newtail = front;
	Node *temp = tail -> next;
	tail -> next = NULL;
	
	newhead = rev(front);
	
	Node *sol = kReverse(temp, k);
	newtail -> next = sol;

	return newhead;

}

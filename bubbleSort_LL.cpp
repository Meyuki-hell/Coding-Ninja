
Node *bubbleSort(Node *head)
{
	// Write your code here
	Node *i = head;

	while(i){
		Node *j = head;
		Node *prev = head;
		while(j -> next){
			Node *temp = j -> next;
			if( j -> data > temp -> data){
				if(j == head){
					j -> next = temp -> next ;
					temp -> next = j;
					 prev = temp;
					 head = prev;
				}
				else{
					j -> next = temp -> next;
					temp -> next = j;
					prev -> next  = temp;
					prev = temp;
				}
				continue;
	
			}
			prev = j ;
			j = j -> next;
		}
		i = i -> next;
	}
	return head;

}

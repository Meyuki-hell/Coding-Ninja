
Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
		if(i > j){
		i = i + j;
		j = i - j;
		i = i - j;
	}
	
	if(i == 0){
		if(j == 1){
			Node *curr = head -> next;
			head -> next = curr -> next;
			curr -> next = head;
			return curr;
		}
		Node *pre = head;
		for(int k = 1; k < j; k++){
			pre = pre -> next;
		}
		
		Node *temp = head -> next;
		Node *curr = pre -> next;
		
		head -> next = curr -> next;
		pre -> next = head;
		curr -> next = temp;
		return curr;
		
	}
	if(j - i == 1){
		Node *pre = head;
		for(int k = 1 ; k < i; k++){
			pre = pre -> next;
			
		}
		Node *curr1 = pre -> next;
		Node *curr2 = curr1 -> next;
		
		curr1 -> next = curr2 -> next;
		pre -> next = curr2;
		curr2 -> next = curr1;
		return head;
	}
	
	Node *pre1 = head;
	Node * pre2 = head;
	
	for(int k = 1; k < i ; k++){
		pre1 = pre1 -> next;
	}
	for(int k = 1; k < j ; k++){
		pre2 = pre2 -> next;
	}
	
	Node *curr1 = pre1 -> next;
	Node *curr2 = pre2 -> next;
	
	Node * temp = curr1 -> next;
	curr1 -> next = curr2 -> next ;
	pre2 -> next  = curr1;
	pre1 -> next = curr2;
	curr2 -> next = temp;
	return head;

}

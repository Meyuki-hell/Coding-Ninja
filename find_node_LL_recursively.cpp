int check(Node *head, int i, int val){
	if(head == NULL){
		return -1;
	}
	if(head -> data == val){
		return i;
	}
	int sol = check(head -> next, i+1, val);
	return sol;
}
int findNodeRec(Node *head, int n)
{

	return check(head, 0, n);
}

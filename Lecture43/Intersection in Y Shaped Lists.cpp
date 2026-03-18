/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

Node* intersectPoint(Node* head1, Node* head2) {
    

	Node* slow = head1, *fast = head1, *curr = head1;

	while(curr->next){
		curr = curr->next;
	}

	curr->next = head2;

	while(fast&&fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast){
			break;
		}
	}

	slow=head1;
	// slow and fast ka meet poiint

	while(slow!=fast){
		slow = slow->next;
		fast = fast->next;
	}

	return fast;
}
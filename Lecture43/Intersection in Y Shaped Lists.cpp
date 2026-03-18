/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

Node* intersectPoint(Node* head1, Node* head2) {
    
    // slow and fast pointer solve krta hu

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
	// common point pe meet krenge

	while(slow!=fast){
		slow = slow->next;
		fast = fast->next;
	}

	return fast;
}
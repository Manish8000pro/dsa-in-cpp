/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

Node* sortedMerge(Node* head1, Node* head2) {
    Node* Head = new Node(0);
	Node* Tail = Head;

	while(head1&&head2){
		if(head1->data<=head2->data){
			Tail->next = head1;
			head1 = head1->next;
			Tail = Tail->next;
			Tail->next = NULL;
		}
		else{
			Tail->next = head2;
			head2 = head2->next;
			Tail = Tail->next;
			Tail->next = NULL;
		}
	}

	// Ya to Head2 exist krega ya Head1 

	if(!head1){
		Tail->next = head2;
	}
	else{
		Tail->next = head1;
	}

	// remove the dummy node

	Node *Temp = Head;
	Head = Head->next;
	delete Temp;

	return Head;
}
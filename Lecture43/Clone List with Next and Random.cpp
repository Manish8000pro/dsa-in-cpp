/* struct Node {
    int data;
    Node *next;
    Node *random;
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
}; */

Node* cloneLinkedList(Node* head) {
    
	// create a clone list with next pointer inside the original list

	Node *curr = head;

	while(curr){
		Node *temp = new Node(curr->data);
		temp->next = curr->next;
		curr->next = temp;
		curr = temp->next;
	}

	// Attach the random point into the clone list

	curr = head;

	while(curr){
		if(curr->random){
			curr->next->random = curr->random->next;
		}
		curr = curr->next->next;
	}

	//  Remove the clone list from here

	Node *result = head->next, *temp = head->next;

	curr = head;
	while(curr){
		curr->next = temp->next;
		curr= curr->next;
		if(curr){
			temp->next = curr->next;
			temp = curr->next;
		}
	}

	return result;
}
/* struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
}; */

void removeLoop(Node* head) {

	if(!head||!head->next){
		return;
	}


    Node* slow = head , *fast = head,*prev = NULL;

	while(fast&&fast->next){
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;

		if(slow==fast){
			break;
		}
	}

	// iska koi  loop exist hi  nhi krta  ho

	if(slow!=fast){
		return;
	}

	if(slow==head){
		while(fast->next!=head){
			fast = fast->next;
		}
		fast->next = NULL;
		return;
	}

	slow = head;

	while(slow->next!=fast->next){
		slow = slow->next;
		fast = fast->next;
	}

	fast->next = NULL;
}
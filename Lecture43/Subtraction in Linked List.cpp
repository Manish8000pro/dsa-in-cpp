// struct Node {
//     int data;
//     Node* next;
//     Node(int d) : data(d), next(nullptr) {}
// };

Node* removeStartingZero(Node* head){
	while(head&&head->data==0){
		Node* temp = head;
		head = head->next;
		delete temp;
	}

	return head;
}

int getLength(Node*head){
	int len = 0;
	while(head){
		len++;
		head = head->next;
	}
	return len;
}

int isFirstBigger(Node*head1,Node*head2){
	int len1 = getLength(head1);
	int len2 = getLength(head2);

	if(len1>len2){
		return 1;
	}
	else if(len1<len2){
		return 0;
	}
	else{
		while(head1){
			if(head1->data>head2->data){
				return 1;
			}
			else if(head1->data<head2->data){
				return 0;
			}
			head1 = head1->next;
			head2 = head2->next;
		}
	}
	return 2;
	// both are equal
}

Node *reverse(Node*head){
	Node*curr = head, *prev = NULL,*future;
	while(curr){
		future = curr->next;
		curr->next = prev;
		prev = curr;
		curr = future;
	}
	return prev;
}


Node* subtractLinkedLists(Node* l1, Node* l2) {
    l1 = removeStartingZero(l1);
	l2 = removeStartingZero(l2);

	int ans = isFirstBigger(l1,l2);

	// l1 should point to bigger list or Number

	if(ans==0){
		swap(l1,l2);
	}
	else if(ans==2){
		return new Node(0);
	}

	// l1 is begger then l2 ab subtraction kr sakta hun

	l1 = reverse(l1);
	l2 = reverse(l2);

	Node*result = NULL;
	int borrow = 0;

	while(l1){
		int val1 = l1->data;
		int val2 = l2? l2->data:0;

		int diff = val1-val2-borrow;

		if(diff<0){
			borrow = 1;
			diff+=10;
		}
		else{
			borrow = 0;
		}

		Node*temp = new Node(diff);
		temp->next = result;
		result = temp;

		l1 = l1->next;
		if(l2){
			l2 = l2->next;
		}
	}

	// remove the trailling zero from the result
	return removeStartingZero(result);
}
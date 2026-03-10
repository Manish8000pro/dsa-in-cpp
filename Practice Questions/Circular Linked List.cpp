/*
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {}
};
*/
bool isCircular(ListNode *head) {
    if(!head || !head->next){
		return 0;
	}

	ListNode *temp = NULL;
	temp = head->next;

	while(temp&&temp!=head){
		temp = temp->next;
	};

	if(temp==head){
		return 1;
	}
	else{
		return 0;
	}
}

// =========== 2nd Solution ================

// Oteher solution of Circular LinkedList

/*
struct ListNode {
    int data;
    ListNode* next;
    ListNode(int x) : data(x), next(nullptr) {}
};
*/
bool isCircular(ListNode *head) {
    if(!head){
		return 0;
	}

	ListNode* Temp = head->next;

	while(Temp&&Temp!=head){
		Temp = Temp->next;
	}
	if(!Temp){
		return 0;
	}
	return 1;
}
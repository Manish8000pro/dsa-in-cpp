/*
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
*/
pair<ListNode*, ListNode*> splitList(ListNode *head) {

	if(head==NULL || head->next==NULL){
		return {head,NULL};
		
	}


    ListNode* slow = head, *fast = head;

	while(fast->next&&fast->next->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	// Breaking the List

	ListNode* secondHalf = slow->next;
	
	slow->next = NULL;

	// written both Lists
	return {head,secondHalf};

}
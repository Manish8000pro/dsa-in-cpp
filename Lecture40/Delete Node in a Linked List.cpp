/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void deleteNode(ListNode* node) {
	// Node deletion
    
	ListNode *temp = node->next;
	node->val = temp->val;
	node->next = temp->next;
	delete temp;
}
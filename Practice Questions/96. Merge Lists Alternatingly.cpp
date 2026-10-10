//96. Merge Lists Alternatingly
// Time complexity o(min(n,m))

/*
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
*/
vector<ListNode*> mergeList(ListNode* head1, ListNode* head2) {
    ListNode* curr1 = head1;
    ListNode* curr2 = head2;

    while(curr1 && curr2){
        // save the next node before changing links

        ListNode* next1 = curr1->next;
        ListNode* next2 = curr2->next;

        curr2->next = next1;
        curr1->next = curr2;

        curr1 = next1;
        curr2 = next2;
    }

    return {head1,curr2};
}
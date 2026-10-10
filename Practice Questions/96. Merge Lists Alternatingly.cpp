//96. Merge Lists Alternatingly
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

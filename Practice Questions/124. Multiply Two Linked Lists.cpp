//124. Multiply Two Linked Lists
/*
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

// Time complexity o(N + N)
// Space complexity o(1)

long long multiplyTwoLists(ListNode* first, ListNode* second) {
    long long num1 = 0;
    long long num2 = 0;
    long long mod = 1e9 + 7;
    
    while (first != nullptr) {
        num1 = (num1 * 10 + first->val) % mod;
        first = first->next;
    }
    
    while (second != nullptr) {
        num2 = (num2 * 10 + second->val) % mod;
        second = second->next;
    }
    
    return (num1 * num2) % mod;
}

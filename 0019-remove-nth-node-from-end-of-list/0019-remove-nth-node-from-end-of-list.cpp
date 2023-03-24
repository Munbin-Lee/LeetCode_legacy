/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {
            ListNode *prevHead = new ListNode(-1, head);
            ListNode *fast = prevHead;
            ListNode *slow = prevHead;

            for (int i = 0; i < n + 1; i++)
            {
                fast = fast->next;
            }

            while (fast)
            {
                fast = fast->next;
                slow = slow->next;
            }

            slow->next = slow->next->next;
            return prevHead->next;
        }
};
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
            ListNode *pNode = head;
            int sz = 1;
            while (pNode->next)
            {
                pNode = pNode->next;
                sz++;
            }

            int prev = sz - n - 1;
            if (prev == -1)
            {
                return head->next;
            }

            pNode = head;
            while (prev--)
            {
                pNode = pNode->next;
            }
            pNode->next = pNode->next->next;
            return head;
        }
};
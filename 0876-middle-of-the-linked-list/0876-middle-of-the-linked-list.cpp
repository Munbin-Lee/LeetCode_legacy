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
        ListNode* middleNode(ListNode *head)
        {
            ListNode *pNode = head;
            ListNode *res = head;
            int size = 1;
            while (pNode->next)
            {
                pNode = pNode->next;
                size++;
                if (size % 2 == 0)
                {
                    res = res->next;
                }
            }
            return res;
        }
};
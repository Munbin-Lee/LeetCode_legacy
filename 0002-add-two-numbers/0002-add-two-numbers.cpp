/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    public:
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
        {
            ListNode *head = new ListNode();
            ListNode *pNode = head;
            int carry = 0;

            while (true)
            {
                int v1 = 0;
                int v2 = 0;

                if (l1)
                {
                    v1 = l1->val;
                    l1 = l1->next;
                }
                if (l2)
                {
                    v2 = l2->val;
                    l2 = l2->next;
                }

                int sum = v1 + v2 + carry;
                carry = sum / 10;
                sum %= 10;
                pNode->val = sum;

                if (!l1 && !l2 && !carry) break;

                pNode->next = new ListNode();
                pNode = pNode->next;
            }
            return head;
        }
};
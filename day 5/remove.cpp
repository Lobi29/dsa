#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode dummy = ListNode(0, head);
        ListNode *left = &dummy;
        ListNode *right = head;

        while (n > 0 && right != NULL) {
            right = right->next;
            n -= 1;
        }

        while (right != NULL) {
            left = left->next;
            right = right->next;
        }

        left->next = left->next->next;

        return head;
    }
};
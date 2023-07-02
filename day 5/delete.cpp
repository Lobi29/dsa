// Delete Node in a Linked List

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
    void deleteNode(ListNode *node)
    {
        ListNode *curr = node;
        ListNode *next = curr->next;
        while (true) {
            if (next->next != NULL) {
                curr->val = next->val;

                curr = next;
                next = curr->next;
            } else if (next->next == NULL) {
                curr->val = next->val;
                curr->next = NULL;
                break;
            }
        }
    }
};
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

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;

        int size = 0;
        while (curr != NULL) {
            curr = curr->next;
            size++;
        }

        int middleIndex = (size / 2);

        ListNode* ref = head;
        int count = 0;
        while (ref != NULL) {
            if (count == middleIndex) {
                return ref;
            }
            ref = ref->next;
            count++;
        }
    }
};

int main()
{
    return 0;
}
#include<iostream>
using namespace std;

struct ListNode {
    int data;
    struct ListNode *next;
};

ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
    }
// e_9898.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

    int sum(ListNode* h);
    int length(ListNode* h);
    int has_cycle(ListNode* h);
};

int ListNode::sum(ListNode* h)
{
    int sum = 0;
    while (h) {
        sum += h->val;
        h = h->next;
    }
    return sum;
}

int ListNode::length(ListNode* head)
{
    int l = 0;
    while (head) {
        ++l;
        head = head->next;
    }
    return l;
}

int ListNode::has_cycle(ListNode* head)
{
    if (head == NULL) return 0;
    ListNode* a = head;
    ListNode* b = head;
    while (a != NULL && a->next != NULL) {
        a = a->next->next;
        b = b->next;
        if (a == b)
            return 1;
    }
    return 0;
}

int main()
{
    ListNode numbers(0);
    numbers.next = new ListNode(5);

    cout << numbers.sum(numbers.next);

}


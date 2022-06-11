#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct ListNode
{
    struct ListNode* next;
    int val;

};
//struct ListNode* ReverseList(struct ListNode* head) {
//    // write code here
//    if (head == NULL)
//        return head;
//    struct ListNode* tail = NULL;
//    struct ListNode* next = head->next;
//    while (head != NULL)
//    {
//        head->next = tail;
//        tail = head;
//        head = next;
//        next = next->next;
//    }
//
//    return tail;
//
//}
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    // write code here
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (--n)
//    {
//        fast = fast->next;
//    }
//
//    struct ListNode* tail = fast->next;
//    fast->next = NULL;
//    struct ListNode* prev = dummyhead;
//    while (--m)
//    {
//        prev = slow;
//        slow = slow->next;
//    }
//    prev->next = NULL;
//    struct ListNode* tmp = ReverseList(slow);
//    prev->next = tmp;
//    slow->next = tail;
//    return dummyhead->next;
//}struct ListNode* reverseKGroup(struct ListNode* head, int k ) {
    // write code here



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//struct ListNode {
//   int val;
//    struct ListNode* next;
//    
//};
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//dummyhead->next = head;
//struct ListNode* fast = head;
//struct ListNode* slow = head;
//struct ListNode* prev = dummyhead;
//while (--n)
//{
//    fast = fast->next;
//}
//while (fast->next != NULL)
//{
//    fast = fast->next;
//    prev = slow;
//    slow = slow->next;
//}
//prev->next = prev->next->next;
//return dummyhead->next;
//
//}///////n牛客BM9
//
//int main()
//{
//
//
//	return 0;
//}
//
// 
// struct TreeNode {
// 	int val;
// 	struct TreeNode *left;
// 	struct TreeNode *right;
//  };
// /**
// * C语言声明定义全局变量请加上static，防止重复定义
// */
// /**
//  * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//  *
//  *
//  * @param root TreeNode类
//  * @return int整型一维数组
//  * @return int* returnSize 返回数组行数
//  */
//void _preorder(struct TreeNode* root, int* a, int* returnSize)
//{
//    static int i = 0;
//
//    if (root == NULL)
//        return;
//    a[i] = root->val;
//    i++;
//    (*returnSize)++;
//    _preorder(root->left, a, returnSize);
//    _preorder(root->right, a, returnSize);
//
//
//}
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    if (root == NULL)
//        return NULL;
//    *returnSize = 0;
//    int* a = (int*)malloc(sizeof(int*) * 100);
//    _preorder(root, a, returnSize);
//
//
//
//
//    return a;
//}.///////////////////////////////////BM23


//struct ListNode {
//    int val;
//    struct ListNode* next;
//    
//};
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
//}...................牛客BM1
//
//int main()
//{
//
//
//
//	return 0;
//}
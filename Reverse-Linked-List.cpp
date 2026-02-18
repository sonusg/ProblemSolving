1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13      ListNode* reverseList(  ListNode* head) {
14       if(head==NULL || head->next==NULL){
15        return head;
16       }
17       
18       ListNode* newHead=reverseList(head->next);
19       ListNode*front=head->next;
20       front->next=head;
21       head->next=NULL; 
22       
23      
24       return newHead;
25    }
26};
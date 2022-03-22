/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]


Input: list1 = [], list2 = [0]
Output: [0]

*/

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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1,*p2,*p3;
        p1 = list1;
        p2 = list2;
        
        ListNode *list = new ListNode(-1);
        p3 = list;
        
        ListNode *temp = NULL;
        
        while(p1 != NULL && p2 != NULL){
            
          /*  if(p1->val < p2->val){

                temp = new ListNode(p1->val);
                p3->next = temp;
                p1 = p1->next;
                
            }else if(p1-> val > p2->val){
                temp = new ListNode(p2->val);
                p3->next = temp;
                // p3 = p3->next;
                p2 = p2->next;
                
                // temp = new ListNode(p1->val);
                // p3->next = temp;
                // p1 = p1->next;
            }else{
                temp = new ListNode(p2->val);
                p3->next = temp;
                p3 = p3->next;
                p2 = p2->next;
                
                temp = new ListNode(p1->val);
                p3->next = temp;
                p1 = p1->next;
                
            }
            p3 = p3->next;*/
            
            if(p1->val < p2->val){
                p3->next = p1;
                p1 = p1->next;
            }else{
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
            
        }
        while(p1!= NULL){
            temp = new ListNode(p1->val);
            p3->next = temp;
            p3 = p3->next;
            p1 = p1->next;
        }
        while(p2 != NULL){
            temp = new ListNode(p2->val);
            p3->next = temp;
            p3 = p3->next;
            p2 = p2->next;
        }
        
        return list->next;
        
    }
};
/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
For example, the following two linked lists begin to intersect at node c1:
eg1
intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.

eg2
Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Intersected at '2'
Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.

eg3
intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: No intersection
Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.


*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        
     /* while(p1){
            p2 = headB;
            while(p2){ 
                if(p1 == p2)
                    return p1;
                else
                    p2 = p2->next;
            }
            p1 = p1->next;
        }
        return temp;
    }*/
    /*
    using count of both nodes
    1) count the nodes in both list
    2) calculate d = |c1-c2|
    3) in bigger list go to d place( so that both list will have same number of element before intersection node)
    4) travel both list until intersection node is reach 
    */
        int c1,c2;
        c1 = count(headA);
        c2 = count(headB);
        
        int d;
        if(c1 > c2){
            d = c1-c2;
            return returnIntersetingNode(d , headA , headB);
        }else{
            d = c2-c1;
            return returnIntersetingNode(d,headB , headA);
        }
        return NULL;
    }
    
    int count(ListNode *list){
        int count = 0;
        while(list){
            count++;
            list = list->next;
        }
        return count;
    }
    
    ListNode *returnIntersetingNode(int d, ListNode *A, ListNode *B){
        ListNode *p1 = A;
        ListNode *p2 = B;
        
        // going till d node
        for(int i=0;i<d ;i++){
            if(p1 == NULL)
                return p1;
            p1 = p1->next;
        }
        // move both pointer tilll get the saem node
        while(p1 != NULL && p2 != NULL){
            if(p1 == p2)
                return p1;
            p1 = p1->next;
            p2 = p2->next;
        }
        return NULL;
    }
};
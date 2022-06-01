// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
// If the two linked lists have no intersection at all, return null.

// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
// Output: Intersected at '8'
// Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
// From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. 
// There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.



/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        
        int t1 = 0;
        int t2 = 0;
        int diff = 0;
        
        ListNode *fh1 = h1;
        ListNode *fh2 = h2;
        
        
        
        
        while(fh1!=NULL|| fh2!=NULL)
        {
            if(fh1!=NULL)
            {
                t1++;
                fh1 = fh1->next;
            }
            
            if(fh2!=NULL)
            {
                t2++;
                fh2 = fh2->next;
            }
        }
        
        diff = t1-t2;
        
        
        
        if(diff<0)
        {
           while(diff++!=0)
           {
               h2 = h2->next;
           }
               
        }
        else
            while(diff--!=0)
                h1=h1->next;
        
        
        while(h1!=NULL)
        {
            if(h1==h2)
                return h1;
            h1=h1->next;
            h2=h2->next;
        }
        
        
        return h1;
        
    }
};
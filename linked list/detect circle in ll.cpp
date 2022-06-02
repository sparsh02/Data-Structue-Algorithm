//There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following





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
    bool hasCycle(ListNode *head) {
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        if(head == NULL || head->next==NULL)
            return false;
        
        while(fast->next !=NULL && fast->next->next!=NULL)
        {
            
            
            slow = slow->next;
            fast = fast->next->next;
              
            
           
            if(slow==fast)
                return true;
        }
        
        return false;
        
        
    }
};
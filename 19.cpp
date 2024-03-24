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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL ; 
        else if(head-> next==NULL) return NULL ; 

        ListNode* temp = head ; 

        int size = 0 ; 
        while(temp!=NULL){
            temp = temp-> next ; 
            size++ ; 
        }
        temp = head ; 
        if(size == n ){
            head = head-> next ;
            return head ;  
        }
        for(int i = 0 ; i<size-n-1 ; i++){
            temp = temp -> next ; 
        }
        if(temp -> next -> next) temp -> next = temp -> next -> next;
        else if (temp-> next ) 
        temp -> next = NULL ;

        return head ; 
    }
};
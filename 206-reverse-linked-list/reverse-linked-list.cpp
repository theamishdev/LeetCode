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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nextNode=NULL;
        while(curr!=NULL){
            nextNode=curr->next;    //points new node to next i.e 2 in this image
            curr->next=prev;        //points current's next to prev making it in opposite direction
            prev=curr;              //now setting prev on 1 
            curr=nextNode;          //then moving current node to 2
        }
    return prev;
        
    }
};
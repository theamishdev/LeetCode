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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        set<int>s;
        ListNode* temp=head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }

        ListNode*  newhead=NULL;
        ListNode* tail=NULL;
        for(int x:s){
            if(newhead==NULL){
            ListNode *newNode=new ListNode(x);
            newhead=newNode;
            tail=newNode;
            }
            else{
                ListNode *newNode=new ListNode(x);
                tail->next=newNode;
                tail=newNode;
            }
        }
        return newhead;
    }
};
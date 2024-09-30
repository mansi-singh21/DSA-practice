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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode* newtemp=head;
        while(newtemp!=nullptr){
            count++;
            newtemp=newtemp->next;
        }
        count=count/2;
        ListNode* temp=head;
        for(int i=0;i<count-1;i++){
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head;
    }
};
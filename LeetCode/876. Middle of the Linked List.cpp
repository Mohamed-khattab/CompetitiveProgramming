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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head ;
        int s = 0 ;
        while(curr != nullptr )
        {
            s ++ ;
            curr = curr->next ;
        }
        // cout<<s <<" " ;
        int index =1;
        curr = head ;

        while(index < s/2 +1){
            curr = curr->next ;
            index++ ;
        }
        return curr ;

    }
};

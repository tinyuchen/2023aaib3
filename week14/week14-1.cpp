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

//not finish
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;    //模仿前2週的寫法
        int carry =0;   //進位的小數字
        while(l1 != nullptr && l2 != nullptr){  //只對其中一個 list 1
            int here= l1->val +l2->val +carry;
            now->next=new ListNode(here%10);    //create a new "node"
            carry=here/10;
            l1=l1->next;  //下一筆
            l2=l2->next;  
            now=now->next;//下一筆
        }
        return ans -> next; //等一下要 return ans->next
    }
};
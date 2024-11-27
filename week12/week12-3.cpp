class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){    //有一個是空的
                now->next=list2;    //另外一個全部都要上
                list2=nullptr;    //清空
            }
            else if(list2==nullptr){    //有一個是空的
                now->next = list1;    //另外一個全部都要上
                list1 = nullptr;    //清空
            }
            else if(list1->val < list2->val){    //list1 是最小
                now->next = new ListNode(list1->val);    //答案放 now 的下一筆，放小的
                list1= list1->next;    //list1 換下一筆
                now = now->next;    //現在也換下一筆
            }
            else{
                now->next = new ListNode(list2->val);
                list2 = list2->next;
                now = now->next;
            }
        }
        return ans->next;
    }
}; 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
    }
}; 
*/
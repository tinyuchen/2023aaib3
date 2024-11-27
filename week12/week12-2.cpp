class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1;
        //ListNode* ans = ListNode(99);
        ListNode* ans = new ListNode(99,new ListNode(90));  //creat a new Node, and put "99" inside the Node. 後面轉接「新的Node ，裡面放"90"」。
        return ans;
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
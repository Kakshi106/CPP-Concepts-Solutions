#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
};


bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;        // THERE'S NEW CONCEPT IN LL , SLOW AND FAST METHODS
                                            // VERY IMPORTANT
            if(slow == fast)                // IF FAST CATCHES SLOW , THEREFORE THERES LOOP!!!!!!!
                return true;
        }

        return false;
        }
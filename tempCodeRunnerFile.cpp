#include <stdio.h>
 #include <iostream>
class Solution {


    struct ListNode {
     int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        auto trace1 = l1;
        auto trace2 = l2;
        ListNode* sum = new ListNode();
        bool carry = false;
        while( trace1 != NULL && trace2 != NULL)
        {   
            
            if(trace1==NULL)
                trace1->val = 0;
            if(trace2==NULL)
                trace2->val = 0;
            auto num = trace1->val+trace2->val;
            if(carry)
            {
                
                num++;
                carry = false;
                
            }
            sum->val = num;
            if(sum->val >=10)
            {
                carry = true; 
            }
            trace1 = trace1->next;
            trace2 = trace2->next;
            sum = sum->next;
            
        
        }
        return sum;
        
        
        
    }
};
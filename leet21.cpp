#include <bits/stdc++.h>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct ListNode* swap(struct ListNode* ptr1, struct ListNode* ptr2)
{
    struct ListNode* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode();
        auto it = *list;
        
        while(list1->next != nullptr){
            list->val = list1->val;
            list = list->next;
            list1 = list1->next;
        }
        while(list1->next != nullptr){
            list->val = list1->val;
            list = list->next;
            list1 = list1->next;
        }
        int bubbleSort(struct Node** head, int count){

                struct ListNode** h;
                int i, j, swapped;
            
            for (i = 0; i <= count; i++) {
        
                h = head;
                swapped = 0;
        
                for (j = 0; j < count - i - 1; j++) {
        
                    struct Node* p1 = *h;
                    struct Node* p2 = p1->next;
        
                    if (p1->data > p2->data) {
        
                        /* update the link after swapping */
                        *h = swap(p1, p2);
                        swapped = 1;
                    }
        
                    h = &(*h)->next;
                }
                if(swapped == 0){
                    break;
                }
    
             }
        }
    }
};
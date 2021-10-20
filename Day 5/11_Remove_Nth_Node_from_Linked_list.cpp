#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* len = head;
        int size = 0;
        while(len) {
            size++;
            len = len->next;
        }
        
        if(size <= 1) {
            ListNode *del = head;
            delete del;
            head = NULL;
            return head;
        }
        
        if(size - n == 0) {
            ListNode *del = head;
            head = del->next;
            delete del;
            return head;
        }
        
        ListNode* curr = head;
        for(int i = 1; i < size - n; ++i) {
            curr = curr->next;
        }
        
        ListNode *del = curr->next;
        curr->next = del->next;
        delete del;
        
        return head;
    }
};
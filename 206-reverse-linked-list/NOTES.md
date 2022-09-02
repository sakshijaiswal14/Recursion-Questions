**1-BRUTE FORCE**
*SAVE THE ELEMENTS IN REVERSE ORDER AND MAKE NEW LINKED LIST*
**TC-O(N)  SC-O(N)**
```
ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        vector<int> rev;
        ListNode* temp= head;
        while(temp!=NULL){
            rev.push_back(temp->val);
            temp=temp->next;
        }
        int n=rev.size();
        ListNode* root=new ListNode(rev[n-1]);
        ListNode* prev=root;
        root->next=NULL;
        for(int i=n-2;i>=0;i--){
            ListNode* node=new ListNode(rev[i]);
            root->next=node;
            root=root->next;
        }
        return prev;
    }
```

**2-EFFICIENT APPROACH**
**TC-O(N)  SC-O(1)**
HINT-THINK OF USING 3 POINTERS 
curr,next,prev

```
ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* curr=head;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
```

**3-USING RECURSION**
![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/2009/07/Linked-List-Rverse.gifhttp://)
 1) Divide the list in two parts - first node and 
      rest of the linked list.
 2) Call reverse for the rest of the linked list.
 3) Link rest to first.
 4) Fix head pointer
```
ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        /* reverse the rest list and put the first element at the end */
        ListNode* newhead=reverseList(head->next); 
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
```

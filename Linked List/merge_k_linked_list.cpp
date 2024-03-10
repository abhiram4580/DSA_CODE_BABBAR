 ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        int n=lists.size();
        for(int i=0;i<n;i++){
            ListNode *curr=lists[i];
            if(curr!=NULL){
            pq.push({curr->val,curr});
            }
        }
        ListNode *temp=new ListNode(-1);
        ListNode *curr1=temp;
        while(pq.empty()==false){
           auto x=pq.top();
           pq.pop();
           ListNode *curr=x.second;
           curr1->next=curr;
           curr1=curr1->next;
           if(curr->next!=NULL){
           pq.push({curr->next->val,curr->next});
           }
    }
    return temp->next;
    }
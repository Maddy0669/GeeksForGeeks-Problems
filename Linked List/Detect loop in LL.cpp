bool detectLoop(Node* head)
{
    Node* slow=head;
    Node* fast=head->next;
    bool ans=false;
    while(fast!=NULL and fast->next!=NULL and slow!=NULL){
        if(fast==slow){
            ans=true;
            break;
        }
        fast=fast->next->next;
        slow=slow->next;
        
    }
    return ans;    
}
int getNthFromLast(Node *head, int n)
{
    int t=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        t++;
    }
    if(n>t)
        return -1;
    Node* fast=head;
    Node* slow=head;
    while(n--)
        fast=fast->next;
    
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
}
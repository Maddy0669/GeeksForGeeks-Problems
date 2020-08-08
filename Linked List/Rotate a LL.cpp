Node* rotate(Node* head, int k)
{
    Node* tail=head;
    while(tail->next!=NULL)
        tail=tail->next;
    
    tail->next=head;
    k--;
    while(k>0){
        head=head->next;
        k--;
    }
    Node* prev=head;
    head=head->next;
    prev->next=NULL;
    return head;
}
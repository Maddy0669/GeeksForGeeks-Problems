int intersectPoint(Node* head1, Node* head2)
{
    int n1=0,n2=0;
    int ans=-1;
    Node* temp=head1;
    while(temp!=NULL){
        n1++;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        n2++;
        temp=temp->next;
    }
    if(n1>n2){
        int temp=n1-n2;
        while(temp--)
            head1=head1->next;
        while(head1!=NULL){
            if(head1==head2){
                return head1->data;
            }
            head1=head1->next;
            head2=head2->next;
        }
    }
    else{
        int temp=n2-n1;
        while(temp--)
            head2=head2->next;
        while(head1!=NULL){
            if(head1==head2){
                return head1->data;
            }
            head1=head1->next;
            head2=head2->next;
            
        }
    }
    return -1;
}
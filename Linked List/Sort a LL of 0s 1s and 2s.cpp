Node* segregate(Node *head) {
    
    if(head==NULL or head->next==NULL)
        return head;
        
    Node* zeroH= new Node(0);
    Node* oneH= new Node(0);
    Node* twoH= new Node(0);
    
    Node* zero=zeroH;
    Node* one=oneH;
    Node* two=twoH;
    
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
            temp=temp->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
            temp=temp->next;
        }
        else{
            two->next=temp;
            two=two->next;
            temp=temp->next;
        }
    }
    zero->next = (oneH->next)  ? (oneH->next) : (twoH->next); 
    one->next = twoH->next; 
    two->next = NULL; 
        
    head=zeroH->next;
        
    return head; 
}
bool isPalindrome(Node *head){
    stack<int> s;
    Node* temp=head;
    
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    temp=head;
    int k=len/2;
    while(k--){
        s.push(temp->data);
        temp=temp->next;
    }
    if(len%2==1)
        temp=temp->next;
        
    int flag=true;
    while(temp!=NULL){
        if(temp->data!=s.top())
            flag=false;
        temp=temp->next;
        s.pop();
    }
    return flag;
}
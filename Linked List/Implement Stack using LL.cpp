void MyStack ::push(int x) {
    StackNode *temp = new StackNode(x);
    
    if(top==NULL){
        top=temp;
        return;
    }
    temp->next=top;
    top=temp;
    return;
}

int MyStack ::pop() {
    if(top==NULL)
        return -1;
    StackNode* temp=top;
    top=top->next;
    temp->next=NULL;
    int ans=temp->data;
    delete temp;
    return ans;
    
}
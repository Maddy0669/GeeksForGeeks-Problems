void deleteNode(Node *node){   
    if(node->next==NULL){
        delete node;
        return;
    }
    Node* temp=node;
    temp->data=temp->next->data;
    temp->next=temp->next->next;
}

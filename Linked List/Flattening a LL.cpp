Node *merge(Node* a, Node* b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    
    Node* c;
    
    if(a->data<b->data){
        c=a;
        c->bottom=merge(a->bottom,b);
    }
    else{
        c=b;
        b->bottom=merge(a,b->bottom);
    }
    c->next=NULL;
    return c;
}
    
    
Node *flatten(Node *root){
    if(root==NULL or root->next==NULL)
        return root;
    
    return merge(root,flatten(root->next));
}
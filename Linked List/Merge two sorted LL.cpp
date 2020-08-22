Node* sortedMerge(Node* a, Node* b){  
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node* c;
    
    if(a->data<b->data){
        c=a;
        c->next=sortedMerge(a->next,b);
    }
    else{
        c=b;
        c->next=sortedMerge(a,b->next);
    }
    return c;
} 
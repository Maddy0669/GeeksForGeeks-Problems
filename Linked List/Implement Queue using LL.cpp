void MyQueue:: push(int x)
{
        QueueNode* temp= new QueueNode(x);
        
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
}

int MyQueue :: pop()
{
        if(front==NULL)
            return -1;
            
        QueueNode* temp=front;
        front=front->next;
        
        if(front==NULL)
            rear=NULL;
        
        return temp->data;
}

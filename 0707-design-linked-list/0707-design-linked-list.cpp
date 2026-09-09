class MyLinkedList {
public:
    struct node{
        int val;
        node* next;
        node(int val1,node* next1){
            val=val1;
            next=next1;
        }
        node(int val1){
            val=val1;
            next=nullptr;
        }
    };
    node* head;
    int size;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size){
            return -1;
        }
        node* temp=head;
        while(index!=0){
            temp=temp->next;
            index--;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        
        node* newhead=new node(val);
        newhead->next=head;
        head=newhead;
        size++;
        // return head;
    }
    
    void addAtTail(int val) {
        node* temp=head;
        if(size==0){
            head=new node(val);
            size++;
            return ;
        }
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next = new node(val);
        size++;
        // return temp;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) { return; } 
        if(index == 0) { 
            addAtHead(val);
             return; 
        } 
        if(index == size) {
             addAtTail(val); 
             return; 
        }
        node* temp=head;
        int i=0;
        while(i != index-1){
            temp=temp->next;
            i++;
        }
        node* curr=new node(val);
        node* front=temp->next;
        temp->next=curr;
        curr->next=front;
        size++;

    }
    
    void deleteAtIndex(int index) {
        node* temp=head;
        if(index<0 || index>=size){
            return;
        }
        if(index == 0) {
            node* deletenode = head;
            head = head->next; 
            delete deletenode; 
            size--; 
            return;
        }
        int i=0;
        while(i != index-1){
            temp=temp->next;
            i++;
        }
        node* deletenode=temp->next;
        temp->next=temp->next->next;
        delete(deletenode);
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
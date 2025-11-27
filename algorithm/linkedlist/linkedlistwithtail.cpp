#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
class linkedList{
    private:
    Node* head; 
    Node* tail;
    public:
    linkedList(){
        head = nullptr;
        tail = nullptr;
    }
void insertFront(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
        return;
    }else{
        newNode->next = head;
        head = newNode;
    }
}
void insertBack(int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
void deleteFront(){
    if(head == nullptr){
        cout<<"head is empty"<<endl;
        return;
    }
    Node* temp = head; // head = temp 
    head = head->next; // update to next 
    temp->next = nullptr; // the temp turn into nullptr
    delete temp;// and delete the temp 
}
void deleteEnd(){
    if(head == nullptr){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next = nullptr;
    delete tail;
    temp = tail;


}
void insertMiddle(int pos, int data){
    if(pos < 0){
        cout<<"invalid pos";
        return;
    }
    if(pos = 0){
        insertFront(data);
        return;
    }
    
    Node* temp = head;
    for(int i = 0; i < pos - 1; i++){
      temp = temp->next;
    } 
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;


}
void deleteAt(int pos){
    if(pos < 0){
        cout<<"invalid";
        return;
    }
    if(pos == 0){
        deleteFront();
        return;
    }
    Node* temp = head;
   for(int i = 0; i< pos - 1 && temp!= nullptr; i++){
    temp = temp->next;
   }
   Node* deleteNode = temp->next;
   temp->next = deleteNode->next;
   delete deleteNode;

}
void print(){
    Node* temp =head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"nullptr"<<endl;

}
int search(int key){
    Node* temp = head;
    int index = 0;
    while(temp != nullptr){
        if(temp->data == key){
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;

}

};
int main(){
    linkedList l;
    l.insertFront(7);
    l.insertFront(3);
    l.insertFront(4);
    l.insertBack(2);
    l.deleteFront();
    l.deleteEnd();
    l.print();
   
}
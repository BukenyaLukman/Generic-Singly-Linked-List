#include<iostream>
#include "singly_linked_list.h"


template <typename E>
SLinkedList<E>::SLinkedList()
: head(NULL) { } 


template <typename E>
bool SLinkedList<E>::empty() const
{ return head == NULL; } 


template <typename E>
const E& SLinkedList<E>::front() const
{ return head->elem; } 
template <typename E>
SLinkedList<E>::~SLinkedList()
{ 
    while (!empty()) removeFront(); 
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E>* v = new SNode<E>;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront() {
    SNode<E>* old = head;
    head = old->next;
    delete old;
}

template<typename E>
void SLinkedList<E>::printList(){
    SNode<E>* temp = head;
  
    if (head == NULL) {
        std::cout << "List empty" << std::endl;
        return;
    }
    // Traverse the list.
    while (temp != NULL) {
        std::cout << temp->elem << " ";
        temp = temp->next;
    }
}
 


int main(){

    SLinkedList<std::string> a;
    a.addFront("MSP");
    a.addFront("JFK");
    a.addFront("HEA");
    a.addFront("BEL");
    a.printList();
    std::cout << std::endl;

    SLinkedList<int> nums;
    nums.addFront(22);
    nums.addFront(23);
    nums.addFront(24);
    nums.addFront(25);
    nums.printList();
    std::cout << std::endl;
    

    return 0;
}
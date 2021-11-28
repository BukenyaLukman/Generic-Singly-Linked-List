#ifndef S_LINKED_LIST
#define S_LINKED_LIST
#include "string_node.h"

template <typename E>
class SLinkedList {
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    void addFront(const E& e);
    void removeFront();
    void printList();
private:
    SNode<E>* head;
};
#endif
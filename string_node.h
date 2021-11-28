#ifndef S_NODE
#define S_NODE
template<class> class SLinkedList; 
template <typename E>
class SNode {
private:
    E elem;
    SNode<E>* next;
    friend class SLinkedList<E>;
};

#endif
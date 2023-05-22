#include "layer.h"

Layer::Layer(Node* hd) : head(hd) { }

int Layer::size() const{
    unsigned int sz = 0;
    Node* nd = head;
    while(nd){
        ++sz;
        nd = nd->next;
    }
    return sz;
}

CanvasObject& Layer::operator[](int index) const{
    if (index >= size())
        throw std::out_of_range("Index out of range");

    Node* nd = head;

    while(index > 0){
        --index;
        nd = nd->next;
    }

    return nd->obj;
}

CanvasObject& Layer::first() const{
    return head->obj;
}

CanvasObject& Layer::last() const{
    return (*this)[size() - 1];
}

void Layer::push_back(CanvasObject& obj){
    Node* newNode = new Node{obj, nullptr};

    if (!head)
        head = newNode;
    else{
        Node* nd = head;
        while(nd->next)
            nd = nd->next;
        nd->next = newNode;
    }
}

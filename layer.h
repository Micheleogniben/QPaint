#ifndef LAYER_H
#define LAYER_H
#include "canvasobject.h"


class Layer
{
private:
    struct Node{
        CanvasObject& obj;
        Node* next;
    };

    Node* head;

public:
    Layer(Node* hd=nullptr);
    int size() const;
    CanvasObject& operator[](int) const;
    CanvasObject& first() const;
    CanvasObject& last() const;
    void push_back(CanvasObject&);
};

#endif // LAYER_H

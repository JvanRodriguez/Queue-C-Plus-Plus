#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
template <typename T>

class Queue
{
private:
    Node<T> *head;
    Node<T> *last;

public:
    Queue() : head(nullptr), last(nullptr) {}

    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == nullptr)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->setNext(newNode);
            newNode->setPrevious(last);
            last = newNode;
        }
    }
    bool isEmpty()
    {
        return head == nullptr;
    }
    T poll()
    {
        T data = nullptr;
        if (!isEmpty())
        {
            data = head->getData();
            Node<T> *tempPointer = head;
            head = head->getNext();
            delete tempPointer;
        }

        return data;
    }
    T peek()
    {
        T data = nullptr;
        if (!isEmpty())
            data = head->getData();
        return data;
    }
};
#endif

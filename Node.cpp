#include <iostream>

template<typename T>

class Node{
    private:
        Node<T>* previous;
        Node<T>* next;
        T data;

    public:
        Node(T data) : data(data), next(nullptr), previous(nullptr) {}

        Node<T>* getPrevious() {
            return previous;
        }

        void setPrevious(Node<T>* previous) {
            this->previous = previous;
        }

        Node<T>* getNext() {
            return next;
        }

        void setNext(Node<T>* next) {
            this->next = next;
        }

        T getData() {
            return data;
        }

        void setData(T data) {
            this->data = data;
        }
}

template<typename T>

class Queue{
    private:
        Node<T> head, last;

    public:
        Queue(): 
            head(nullptr), last(nullptr){}

        void push(T element) {
            Node<T> newNode(element);
            //Node<T> :: newNode(element);
            if (head == nullptr){
                head = newNode;
                last = newNode;
            }else{
                last.setNext(newNode);
                newNode.setPrevious(last);
                last = newNode;
            }    
        }
        bool isEmpty(){
            return head == nullptr;
        }
        T poll(){
            T data = null;
            if (!isEmpty()) {
                data = head.getData();
                head = head.getNext();
                //cuando se usa un apuntador se hace delete cuando se elimina
            }
                
            return data;
        }
        T peek(){
            T data = null;
            if (!isEmpty()) 
                data = head.getData();
            return data;
        }



};


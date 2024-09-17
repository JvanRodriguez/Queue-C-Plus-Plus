#include <iostream>
#include "structure/Queue.h"
using namespace std;

int main()
{
    Queue<int> queue;
    cout << "Cola vacia: " << queue.isEmpty() << " (1 = TRUE 0 = FALSE)" << endl ;
    
    queue.push(7);
    queue.push(5);
    queue.push(18);
    queue.push(23);

    cout <<"Ultimo elemento: "<< queue.peek() << endl;
    queue.poll();
    cout <<"Ultimo elemento: "<< queue.peek() << endl;
    queue.poll();
    cout <<"Ultimo elemento: "<< queue.peek() << endl;
    queue.poll();
    

}
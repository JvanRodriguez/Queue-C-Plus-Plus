#include <iostream>
#include "structure/Queue.h"

int main()
{
    Queue<int> queue;
    std::cout << queue.isEmpty();
    
    queue.push(7);
    queue.push(5);
    queue.push(18);
    queue.push(23);

    

}
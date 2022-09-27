// Cole O'Shaughnessy
// September 26, 2022
// CS 124
// This program tests the node, queue, and stack classes

// Includes
#include "Queue.h"
#include "Node.h"
#include "Stack.h"
#include <iostream>
#include "Race.h"
using namespace std;

// Program
int main() {

    // Create empty Queues of strings and integers
    Queue<int> i;
    Queue<string> s;

    s.enqueue("I'm");
    s.enqueue("up");
    s.enqueue("next");
    s.enqueue("!");
    s.print();
    s.dequeue();
    s.print();

    i.enqueue(0);
    i.enqueue(1);
    i.enqueue(2);
    i.enqueue(3);
    i.print();
    i.dequeue();
    i.print();

    return 0;
}
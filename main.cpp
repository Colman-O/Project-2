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

    // Test the Queues
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

    // Read formula race file and create vector
    vector<Race> races;
    getDataFromFile("../formula1_data_races.csv", races);

    // Create Queue and Stack objects for formula 1 races
    Queue<Race> f1q;
    Stack<Race> f1s;

    // Enqueue ten racers
    for (int x = 0; x < 10; ++x) {
        f1q.enqueue(races[x]);
    }
    f1q.print();

    // Dequeue and push
    Race moveOver;
    for (int x = 0; x < 10; ++x) {
        moveOver = f1q.dequeue();
        f1s.push(moveOver);
    }

    // Pop and print
    for (int x = 0; x < 10; ++x) {
        cout << f1s.pop() << endl;
    }

    return 0;
}
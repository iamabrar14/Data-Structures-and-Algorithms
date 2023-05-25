#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;  // Creating an empty queue of integers

    // Enqueue elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);
    myQueue.push(60);
    // Dequeue elements
    while (!myQueue.empty()) {
        int frontElement = myQueue.front();  // Get the front element
        myQueue.pop();  // Remove the front element
        std::cout << frontElement << " ";  // Print the front element
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <queue>

class Queue {
private:
    std::queue<int> data;

public:
    void enqueue(int value) {
        data.push(value);
    }

    void dequeue() {
        if (!data.empty()) {
            data.pop();
        } else {
            std::cerr << "Error: Queue is empty" << std::endl;
        }
    }

    int front() const {
        if (!data.empty()) {
            return data.front();
        } else {
            std::cerr << "Error: Queue is empty" << std::endl;
            return 0; // Return a default value, you may choose to handle this differently
        }
    }

    bool isEmpty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }

    void display() const {
        std::cout << "Queue Elements: ";
        std::queue<int> temp = data; // Create a copy to avoid modifying the original
        while (!temp.empty()) {
            std::cout << temp.front() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue myQueue;

    // Enqueue elements
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    // Display the initial elements
    myQueue.display();

    // Display the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Dequeue an element(remove)
    myQueue.dequeue();

    // Display the front element after removing
    std::cout << "Front element after removing: " << myQueue.front() << std::endl;

    // Display the size of the queue
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    // Check if the queue is empty
    std::cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}

#include <iostream>
#include <thread>

// Function to be executed by a thread
void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << "Thread ID: " << std::this_thread::get_id() << " - Number: " << i << std::endl;
    }
}

// Main function
int main() {
    // Create two threads
    std::thread t1(printNumbers, 1, 5);  // First thread prints numbers from 1 to 5
    std::thread t2(printNumbers, 6, 10); // Second thread prints numbers from 6 to 10

    // Wait for both threads to complete their execution
    t1.join();  // Join thread t1 back to the main thread
    t2.join();  // Join thread t2 back to the main thread

    std::cout << "Both threads have finished executing." << std::endl;

    return 0;
}

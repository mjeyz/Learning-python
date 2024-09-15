#include <iostream>
#include <thread>

// Function to be executed by a thread
void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << "Thread ID: " << std::this_thread::get_id() << " - Number: " << i << std::endl;
    }
}

int main() {
    std::thread t1(printNumbers, 1, 5);  
    std::thread t2(printNumbers, 6, 10); 

    t1.join(); 
    t2.join(); 

    std::cout << "Both threads have finished executing." << std::endl;

    return 0;
}

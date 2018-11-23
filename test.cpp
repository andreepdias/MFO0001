#include <condition_variable>
#include <iostream>
#include <random>
#include <mutex>
#include <thread>
#include <vector>

// global variables
std::condition_variable cv;
std::mutex mtx;
std::vector<char> data;

int count = 0, buff_size = 0;

char random_char() {
    thread_local std::random_device seed;
    thread_local std::mt19937 generator(seed());
    thread_local std::uniform_int_distribution<int> dist('A', 'Z');

    return static_cast<char>(dist(generator));
}

/* Consumer

Prints out the contents of the shared buffer.

*/
void consume() {
    std::unique_lock<std::mutex> lck(mtx);

    while (count == 0) {
        cv.wait(lck);
    }

    for (const auto& it : data) {
        std::cout << it << std::endl;
    }

    count--;
}

/* Producer

Randomly generates capital letters in the range of A to Z,
prints out those letters in lowercase, and then
inserts them into the shared buffer.

*/
void produce() {
    std::unique_lock<std::mutex> lck(mtx);

    char c = random_char();
    std::cout << " " << static_cast<char>(tolower(c)) << std::endl;
    data.push_back(c);

    count++;
    cv.notify_one();
}

int main() {
    std::cout << "The Producer-Consumer Problem (in C++11!)" << std::endl << "Enter the buffer size: ";
    std::cin >> buff_size;

    // keep the buffer in-range of the alphabet
    if (buff_size < 0) {
        buff_size = 0;
    }
    else if (buff_size > 26) {
        buff_size = 26;
    }

    std::thread production[26], processed[26];

    // initialize the arrays
    for (int order = 0; order < buff_size; order++) {
        production[order] = std::thread(produce);
        processed[order] = std::thread(consume);
    }

    // join the threads to the main threads
    for (int order = 0; order < buff_size; order++) {
        processed[order].join();
        production[order].join();
    }

    std::cout << "Succeeded with a shared buffer of " << data.size() << " letters!";
}
#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

int main() {
    // C-style array
    int fixedArray[5] = {1, 999, 3, 4, 5};

    // std::array
    std::array<int, 5> stdArray = {1, 2, 3, 4, 5};

    // std::vector
    std::vector<int> dynamicArray = {1, 2, 3, 4, 5};

    // std::deque
    std::deque<int> dequeArray = {1, 2, 3, 4, 5};

    // std::list
    std::list<int> linkedList = {1, 2, 3, 4, 5};

    // std::vector with std::begin and std::end
    std::vector<int> vectorArray = {1, 2, 3, 4, 5};
    auto beginIterator = std::begin(vectorArray);
    auto endIterator = std::end(vectorArray);

    // std::initializer_list
    std::initializer_list<int> initializerList = {1, 2, 3, 4, 5};

    // Print elements of each array
    std::cout << "C-style Array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << fixedArray[i] << " ";
    }

    std::cout << "\nstd::array: ";
    for (const auto& element : stdArray) {
        std::cout << element << " ";
    }

    std::cout << "\nstd::vector: ";
    for (const auto& element : dynamicArray) {
        std::cout << element << " ";
    }

    std::cout << "\nstd::deque: ";
    for (const auto& element : dequeArray) {
        std::cout << element << " ";
    }

    std::cout << "\nstd::list: ";
    for (const auto& element : linkedList) {
        std::cout << element << " ";
    }

    std::cout << "\nstd::vector with std::begin and std::end: ";
    for (auto it = beginIterator; it != endIterator; ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nstd::initializer_list: ";
    for (const auto& element : initializerList) {
        std::cout << element << " ";
    }

    return 0;
}

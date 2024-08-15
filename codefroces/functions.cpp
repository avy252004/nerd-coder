#include <iostream>
using namespace std;
template <typename T, size_t N>
void printArray(const T (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {10, 20, 30};
    double decimals[] = {1.1, 2.2, 3.3};

    printArray(numbers);
    printArray(decimals);
    cout<<numbers<<endl;
    cout<<&numbers[0]<<endl;
    return 0;
}

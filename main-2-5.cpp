#include <iostream>

bool is_descending(int array[], int n);

int main() {

    int array1[5] = { 6, 5, 4, 3, 2};
    std::cout << "Array1 is descending: " << (is_descending(array1, 5) ? "true" : "false") << std::endl;

    return 0;
    
}
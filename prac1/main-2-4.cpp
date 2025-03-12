#include <iostream>

bool is_ascending(int array [], int n);

int main() {

    int array1[4] = { 1, 2, 3, 4};
    std::cout << "Array1 is ascending: " << (is_ascending(array1, 4) ? "true" : "false") << std::endl;

    return 0;
}
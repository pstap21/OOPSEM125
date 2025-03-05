#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    //test case 1
    int array[5] = {4,5,6,7,8};
    std::cout << "The number of even numbers in the array is: " << count(array, 5) << std::endl;
    return 0;

    //testcase 2 all odd numbers
    int array2[4] = {3, 5, 7, 9};
    std::cout << "The number of even numbers in the array is: " << count(array2, 4) << std::endl;
    
}


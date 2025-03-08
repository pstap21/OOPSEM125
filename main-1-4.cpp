#include <iostream>

int sum_two_arrays( int array[], int secondarray [], int n);

int main () {
    int array1[4] = { 1, 2, 3, 4};
    int array2[4] = { 5, 6, 7, 8};
    std::cout << "The sum of array1 and array2 is: " 
    << sum_two_arrays(array1, array2, 4) <<std::endl;
    
    return 0;

}
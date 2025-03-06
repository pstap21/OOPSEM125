#include <iostream>

double array_mean( int array [], int n);

int main(){
    int array1 [5] = { 1, 2, 3, 4, 5};
    std::cout << "The average of elements in the array is: " <<array_mean(array1, 5) << std::endl;

    return 0;

    
}
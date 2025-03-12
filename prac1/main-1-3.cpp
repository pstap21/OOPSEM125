#include <iostream>

//function

int num_count (int array[], int n, int number);

int main (){
    int array1[5] = {1, 2, 3, 4, 5};

    std::cout << "The number of elements equal to 3 in the array1 is: " << num_count (array1, 5, 3) << std::endl;

    return 0;

}
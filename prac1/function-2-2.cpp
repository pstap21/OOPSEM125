#include <iostream>

int max_element(int array[], int n){
    if (n <1 ){
        return 0;

    }


    //initialise maxval
    int maxval = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maxval) {
            maxval = array[i];
        }
    }

return maxval;

}
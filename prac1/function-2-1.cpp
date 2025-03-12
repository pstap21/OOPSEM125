# include <iostream>

int min_element( int array [], int n){

if (n <1) {
return 0;
}

//initiatlise minvalue
int minval = array [0];

//start at second element
for ( int i = 1; i < n; i++){
    if (array[i] < minval) {
        minval = array[i];
    }

    }

    return minval;
}

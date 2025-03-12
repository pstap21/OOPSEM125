// transform between base 10 and base 2
//75 base 10 
// converting decimal to binary

#include <iostream>
#include <string>
using namespace std;

string dectoBinary (int dec_number){
    string binary_number = "";

    if (dec_number == 0){
        return "0";

    }

    while (dec_number > 0) {
        int remainder = dec_number % 2;
        binary_number = to_string(remainder) + binary_number;
        dec_number = dec_number/2;

    }

    return binary_number;
}

int main(){
    int dec_number;


    cout << "Please enter a decimal number: ";
    cin >> dec_number;


    // Convert to binary and output
    string binary = dectoBinary(dec_number);
    cout << "Binary representation: " << binary << endl;
    
    return 0;
}
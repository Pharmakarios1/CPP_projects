#include <iostream>

using std::cout; // this is used instead of the /using namespace std;/ this calls out the object class;

int main() // the main function lies in the iostream and it's the machine that helps our code to run.
{
    int slices = 5;
    /**
     * the cout function or object calls the machine to console out the statements resultant.
     * the << used along side is an operator pointing to the console
     * >> is an operator pointing to get value from users into the machine.
    */
    cout <<"i have " << slices << " slices of pizza" << std::endl;
    return 0; // 0 is returned coz it's an integer type function in the main and generally tells that the machine works fin
}
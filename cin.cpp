#include <iostream>
/**
 * cin is an object of o-stream
 * cout is an object of i-stream
*/
using std::cout;
using std::cin;

int main()
{
    int slices;
    
    cout << "enter a number  ";
    cin >> slices;

    cout << "You entered:  " << slices << std::endl;


    return 0;
}
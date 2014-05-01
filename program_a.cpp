#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    // a. wypisze wszystkie otrzymane argumenty w ososbnych liniach
    /// YOUR CODE HERE ///
    cout << "argc    :" << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] :" << argv[i] << endl;
    }
    /// YOUR CODE HERE ///
    return 0;
}


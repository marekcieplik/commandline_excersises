#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool rosnoco( int i, int j){ return i > j;}

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    d. posortowane rosnaco
    /// YOUR CODE HERE ///
    vector <int> vec;
    if ( argc > 1){
        ifstream input;
        input.open(argv[1]);
        while (input.good()){
            int in;
            input >> in;
            vec.push_back(in);
        }
        input.close();
    }
    sort(vec.begin(), vec.end(), rosnoco);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it ++)
    {
        cout << *it << endl;
    }
    /// YOUR CODE HERE ///
    return 0;
}


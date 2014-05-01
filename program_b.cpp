#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool lessfunc(int i, int j) {return i < j;}
bool morefunc(int i, int j) {return i > j;}

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    b. w tej samej kolejnosci
    /// YOUR CODE HERE ///
    if (argc > 1)
    {
        vector <int> vec;
        ifstream input;
        input.open(argv[1]);
        while(input.good())
        {
            int in;
            input >> in;
            cout << in <<endl;
            vec.push_back(in);
        }
        input.close();

        sort(vec.begin(), vec.end(), lessfunc);

        for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
        {
            cout << *it << endl;
        }
        cout << endl << endl;
        for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++)
        {
            cout << *it << endl;
        }
    }
    else
    {
        cout << endl << "Error: Brak pliku do otwarcia";
    }
    /// YOUR CODE HERE ///
    return 0;
}


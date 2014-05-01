#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char * argv[])
{
    // Program wczyta z pliku liczby (tyle ile ich bedzie) i wydrukuje je:
    //    c. w odwrotnej kolejnosci
    /// YOUR CODE HERE ///
    //wypisanie liczby parametrow wywolania pliku exe
    cout << argc << endl;
    //przygotowanie kontenera na liczby z pliku
    vector<int> vec;
    //otwieram plik, jesli jest dodany jako parametr z commandline
    if (argc > 1){
        cout << "Plik z danymi:" << endl << argv[1] << endl << "otwieram...";
        ifstream input;
        input.open(argv[1]);
        //zapisanie do kontenera kolejnych liczb z pliku
        while (input.good()){
            int in;
            input >> in;
            vec.push_back(in);
        }
        input.close();
    }// if (argc > 1)
    cout << endl << "wydruk liczb z pliku w odwrotnej kolejnosci" << endl;
    for ( vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *it << endl;
    }
    /// YOUR CODE HERE ///
    return 0;
}


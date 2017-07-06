#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    cout << "PRAIRIEVILLE POPULATION" << endl;
    cout << "(each * represents 1000 people)" << endl;

    ifstream inputfile;
    inputfile.open("People.txt");

   // if (!inputfile)
   // { cout << "Error failure to open file" << endl;
   // }

    for (int year = 1900; year <= 2000; year += 20)
    {
        cout << endl << year << ' ';
        int pop;
        inputfile >> pop;
        for (int i = 1; i <= pop / 1000; i++)
        {   cout << '*';

        }
    }
inputfile.close(); //Close the file

    return 0;
}


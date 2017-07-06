#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    cout << "PRAIRIEVILLE POPULATION";
    cout << "(each * represents 1000 people)";

    ifstream inputfile;
    inputfile.open("People.txt");
    
    if (!inputfile)
    { cout << "Error failure to open file" << endl;
    }
    
    for (int year = 1900; year <= 2000; year += 20)
    {
        cout << year;
        int pop;
        inputfile >> pop;
        for (int i = 1; i <= pop / 1000; i++)
        {
            cout << '*';
        }
        
      
    }
    inputfile.close();
    return 0;
    
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream infile;
    int stamp = 31;
    infile.open("src.cpp");
    for (int i = 0; getline(infile, line); ++i)
    {
        if(line != "" && i >= stamp)
        {
            cout << line << endl;
            stamp += 7;
        }

    }
    infile.close();
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream of("Test.txt", ios::trunc);
    of << "John" << endl;
    of << 25 << endl;
    of << "CS" << endl;
    of.close();
}
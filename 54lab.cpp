#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string stroka;
    ifstream f1("/media/shared/file_1");
    ofstream f2("/media/shared/file_2", ios::app);
    while (getline(f1, stroka)) {
        f2 << stroka << endl;
    }
    f1.close();
    f2.close();
    return 0;
}
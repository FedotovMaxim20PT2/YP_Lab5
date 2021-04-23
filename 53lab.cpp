#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string stroka;
    int len, k;
    ifstream f("/media/shared/data_v13.txt");
    double chislo, sum;
    sum = 0;
    k = 0;
    while (getline(f, stroka)) {
        len = stroka.length();
        string s;
        int sdvig;
        sdvig = 0;
        for (int i = 0; i <= len; i++) {
            if ((stroka[i] == ' ') or (stroka[i] == '\t') or (stroka[i] == '\0')) {
                s = stroka.substr(sdvig,i);
                chislo = stod(s);
                sum += chislo;
                sdvig = i+1;
                k += 1;
            } 
        }
    }
    f.close();
    cout << "Среднее арифметическое: " << sum/k << endl;
    return 0;
}
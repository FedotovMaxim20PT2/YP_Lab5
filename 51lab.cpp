#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
    int msv[10];
    int a;
    int i;
    cout << "������� 10 ����� �����" << endl;
    for (i = 0; i < 10; i++) {
        cin >> a;
        if (cin.good()) {
            msv[i] = a;
        } else {
            cout << "���� ������� �� ����� �����" << endl;
            break;
        }

    }
    if (i > 9) {
        cout << "����� �������� ����� �����" << endl;
        for (int i = 0; i < 10; i++) {
            cout << setw(5) << oct << msv[i] << setw(5) << dec << msv[i] << setw(5) << hex << msv[i] << endl;
        }
    }
    return 0;
}

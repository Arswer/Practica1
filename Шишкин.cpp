#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int zip;
    int eshhkere = 0;
    char cow;
    int visa;

    cout << " ������� ���������� ��������: ";
    cin >> zip;

    cout << " �������� ������, ������� �� ������: ";
    cin >> cow;

    cout << " �������� ���������: " << endl <<
        "1. ������������� " << endl <<
        "2. ����������� " << endl;
    cin >> visa;

    while (eshhkere < zip)
    {
        switch (visa)
        {
        case 1:
            cout << cow;
            eshhkere++;
            break;
        case 2:
            cout << cow << endl;
            eshhkere++;
            break;
        default:
            cout << " ����� ����� ���� ";
            break;
        }
    }
    cout << endl;

}

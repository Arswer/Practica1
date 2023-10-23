#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");

    int zip;
    int eshhkere = 0;
    char cow;
    int visa;

    cout << " Введите количество символов: ";
    cin >> zip;

    cout << " Выведите символ, который вы хотите: ";
    cin >> cow;

    cout << " Выберите диагональ: " << endl <<
        "1. Горизонтально " << endl <<
        "2. Вертикально " << endl;
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
            cout << " Такой линии нету ";
            break;
        }
    }
    cout << endl;

}

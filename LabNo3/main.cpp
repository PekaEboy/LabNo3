#include <iostream>
#include <Windows.h>
#include <locale>

// Сумма (-1)^n * x^(2n+1) / (2n+1)!, ввод от пользователя: e, x
// Это оказывается ряд Маклорена для sin(x)
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    double x, e;
    cout << "Введите число x в бесконечном сумме: ";
    cin >> x;
    cout << "Введите число e для точности: ";
    cin >> e;
    if (x >= e) {
        double delta = x;
        double summar = 0;
        int k = 1;
        do {
            summar += delta;
            delta *= ((-1.0 * x * x) / (2 * k * (2 * k + 1)));
            k++;
        } while (abs(delta) > e);
        cout << "Итоговая сумма (или sin(x)): " << summar << endl;
    }
    else {
        cout << "Итоговая сумма (или sin(x)): " << 0 << endl;
    }

    system("pause");
    return 0;
}
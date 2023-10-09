#include <iostream>
#include <Windows.h>
#include <locale>

// ����� (-1)^n * x^(2n+1) / (2n+1)!, ���� �� ������������: e, x
// ��� ����������� ��� ��������� ��� sin(x)
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    double x, e;
    cout << "������� ����� x � ����������� �����: ";
    cin >> x;
    cout << "������� ����� e ��� ��������: ";
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
        cout << "�������� ����� (��� sin(x)): " << summar << endl;
    }
    else {
        cout << "�������� ����� (��� sin(x)): " << 0 << endl;
    }

    system("pause");
    return 0;
}
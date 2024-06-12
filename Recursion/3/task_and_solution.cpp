/*
Функция Аккермана
Требуется вычислить значение A(m,n), где A — это функция Аккермана.

Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:

A(m,n)=n+1 при m=0;
A(m,n)=A(m−1,1) при m>0, n=0;
A(m,n)=A(m−1,A(m,n−1)) при m>0, n>0.

Входные данные
Даны два целых числа m и n (0 ⩽m⩽ 3, 0 ⩽n⩽ 7).

Выходные данные
Выведите одно число — A(m,n).

Примеры
Ввод
1 1

Вывод
3

*/

#include <iostream>

using namespace std;

int Akker(int m, int n) {
    int ans = 0;
    if (m == 0) {
        return (n + 1);
    }

    if (m > 0 && n == 0) {
        ans += Akker(m - 1, 1);
    }
    if (m > 0 && n > 0) {
        ans += Akker(m - 1, Akker(m, n - 1));
    }
    return ans;

}

int main() {
    int m, n;
    cin >> m >> n;
    int answer = Akker(m, n);
    cout << answer;
    return 0;

}

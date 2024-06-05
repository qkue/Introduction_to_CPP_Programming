/*
Минимальный простой делитель
Дано целое число, не меньшее 2. Выведите его наименьший простой делитель.

Входные данные
Вводится целое положительное число N⩽2⋅10^9.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
15
Вывод
3

Ввод
179
Вывод
179

*/

#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int answer = 2;
    while (answer * answer <= n) {
        if (n % answer == 0) {
            break;
        }
        answer++;
    }
    if (n % answer == 0) {
        cout << answer;
    } else {
        cout << n;
    }
}
/*
Чётные элементы
Выведите все чётные элементы массива.

Входные данные
В первой строке содержится число n — количество элементов в массиве. В следующей строке содержатся n чисел — элементы массива. Все числа во входных данных натуральные и не превосходят 100.

Выходные данныеВыведите ответ к задаче.

Примеры
Ввод
5
8 7 4 8 3

Вывод
8 4 8 

*/

#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> numbers(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        numbers[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

}
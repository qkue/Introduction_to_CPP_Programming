/*
Символы в заданном интервале
Выведите подряд без пробелов все символы, лежащие в таблице ASCII между двумя заданными символами.

Входные данные
Программа получает на вход два символа, каждый в отдельной строке.

Выходные данные
Программа должна вывести строку, начинающуюся первым из заданных символов и заканчивающуюся вторым.

Примеры
Ввод
A
D

Вывод
ABCD

Ввод
0
9

Вывод
0123456789

*/

#include <iostream>

using namespace std;

int main() {
    char start, fin;
    cin >> start >> fin;
    for (int i = ((int) start); i < (int) fin + 1; ++i) {
        cout << (char) i;
    }

}
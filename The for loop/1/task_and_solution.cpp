/*
Ряд
Даны два целых числа A и B (при этом A⩽B). Выведите все числа от A до B включительно.

Входные данные
Вводятся два целых числа, не превосходящие 200 по абсолютному значению.

Выходные данные
Выведите ответ к задаче.

Примеры
Ввод
1
10

Вывод
1 2 3 4 5 6 7 8 9 10 

*/

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    for (; a <= b; a++) {
        std::cout << a << " ";
    }

}
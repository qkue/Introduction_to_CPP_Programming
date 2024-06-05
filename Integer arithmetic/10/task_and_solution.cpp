/*
МКАД
Длина Московской кольцевой автомобильной дороги — 109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью v километров в час. На какой отметке он остановится через t часов?

Входные данные
Программа получает на вход значение v и t. Если v>0, то Вася движется в положительном направлении по МКАД; если же значение v<0, то в отрицательном. (Гарантируется, что исходные числа — целые и находятся в промежутке от −1000 до 1000.)

Выходные данные
Программа должна вывести целое число от 0 до 108 — номер отметки, на которой остановится Вася.

Примеры
Ввод
60
2
Вывод
11

Ввод
-1
1
Вывод
108

*/

#include <iostream>

using namespace std;
int main() {
    int v, t, dist;
    dist = 109;
    cin >> v >> t;
    int complete = v * t;
    cout << (complete % dist + dist) % dist ;
    return 0;
}
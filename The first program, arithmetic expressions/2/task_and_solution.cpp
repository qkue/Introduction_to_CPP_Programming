/*
Запустите данный код у себя на компьютере. Какое слово он выведет на экран?

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A = "jqmspo";
    for (int i = 0; i < A.size(); ++i) {
        A[i] = (A[i] - i) ^ 25;
    }
    cout << A << endl;
    return 0;
}

*/

sirius

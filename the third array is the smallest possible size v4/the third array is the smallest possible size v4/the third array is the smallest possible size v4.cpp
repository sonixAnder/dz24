#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int M;
    cout << "Размер массива: ";
    cin >> M;

    vector<int> A(M);
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    int choice;
    cout << "Введите 0, чтобы удалить нечетные числа, 1, чтобы удалить четные числа: ";
    cin >> choice;

    int newSize = 0;
    for (int i = 0; i < M; i++)
    {
        if ((A[i] % 2 == 0 && choice == 0) || (A[i] % 2 != 0 && choice == 1))
{
            A[newSize] = A[i];
            newSize++;
        }
    }

    cout << "Массив после удаления ";
    if (choice == 0)
    {
        cout << "нечетных чисел:" << endl;
    }
    else
    {
        cout << "четных чисел:" << endl;
    }

    for (int i = 0; i < newSize; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}

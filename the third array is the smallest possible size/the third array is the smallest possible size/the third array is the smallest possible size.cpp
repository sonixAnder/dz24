#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int M, N;

    cout << "Введите размер массива A: ";
    cin >> M;

    cout << "Введите размер массива B: ";
    cin >> N;

    vector<int> A(M);
    vector<int> B(N);
    vector<int> C;
    unordered_set<int> setB; //связанный контейнер, доступный в стандартной библиотеке шаблонов C++ (STL), который используется для уникальных элементов без какого-либо определенного порядка, он внутренне использует принцип работы хэш-таблицы для хранения элементов.

    cout << "Введите элементы массива A:\n";
    for (int i = 0; i < M; ++i)
    {
        cin >> A[i];
    }

    cout << "Введите элементы массива B:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
        setB.insert(B[i]); //insert —функция, которая позволяет добавить элемент или диапазон элементов в любое место
    }

    for (int i = 0; i < M; ++i)
    {
        if (setB.find(A[i]) == setB.end()) //нахождение элемента в массиве
        {
            if (find(C.begin(), C.end(), A[i]) == C.end())
            {
                C.push_back(A[i]); //добавление элементов в вектор
            }
        }
    }

    cout << "Элементы массива C (результат):\n";
    for (int i = 0; i < C.size(); ++i)
    {
        cout << C[i] << " ";
    }

    return 0;
}
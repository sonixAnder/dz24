#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int M, N;

    cout << "Размер массива A: ";
    cin >> M;

    vector<int> A(M);

    cout << "Элементы массива A: ";
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }

    cout << "\nРазмер массива B: ";
    cin >> N;

    vector<int> B(N);

    cout << "Элементы массива B: ";
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    vector<int> C(M + N);

    for (int i = 0; i < M; i++)
    {
        C[i] = A[i];
    }

    for (int i = 0; i < N; i++)
    {
        C[M + i] = B[i];
    }

    cout << "\nОбъединенный массив C: ";
    for (int i = 0; i < M + N; i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}
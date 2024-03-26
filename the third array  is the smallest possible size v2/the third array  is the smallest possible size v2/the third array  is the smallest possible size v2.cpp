#include <iostream>
#include <unordered_set>
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
    for (int i = 0; i < M; ++i)
    {
        cin >> A[i];
    }

    cout << "Размер массива B: ";
    cin >> N;
    vector<int> B(N);
    cout << "Элементы массива B: ";
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    unordered_set<int> common_elements;
    unordered_set<int> unique_elements;

    for (int i = 0; i < M; ++i)
    {
        common_elements.insert(A[i]);
    }

    for (int i = 0; i < N; ++i)
    {
        if (common_elements.find(B[i]) == common_elements.end())
        {
            unique_elements.insert(B[i]);
        }
    }

    vector<int> C(unique_elements.begin(), unique_elements.end());

    cout << "Уникальными элементами в массивах A и B являются: ";
    for (int num : C)
    {
        cout << num << " ";
    }

    return 0;
}

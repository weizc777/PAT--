#include<iostream>
using namespace std;
int main()
{
    int N, a[101] = { 0 },grade,K;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> grade;

        a[grade]++;
    }
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> grade;
        cout << a[grade];
        if (i != K - 1)
            cout << " ";
    }
}

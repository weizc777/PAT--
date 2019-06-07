
#include<iostream>

using namespace std;

class money
{
public:
    int Galleon;
    int Sickle;
    int Knut;
};

int main()
{
    money P, A, temp;

    cin >> P.Galleon;
    getchar();//¶ÁÈ¡ . ÏÂÍ¬
    cin >> P.Sickle;
    getchar();
    cin >> P.Knut;

    cin >> A.Galleon;
    getchar();
    cin >> A.Sickle;
    getchar();
    cin >> A.Knut;

    if (A.Knut < P.Knut)
    {
        temp.Knut = 29+ A.Knut - P.Knut;
        A.Sickle--;
    }
    else
        temp.Knut = A.Knut - P.Knut;

    if (A.Sickle < P.Sickle)
    {
        temp.Sickle =17+ A.Sickle - P.Sickle;
        A.Galleon--;
    }
    else
        temp.Sickle = A.Sickle - P.Sickle;

    temp.Galleon = A.Galleon - P.Galleon;

    if (temp.Galleon < 0)
    {
        if (temp.Knut > 0)
        {
            temp.Knut -= 29;
            temp.Sickle++;
        }

        if (temp.Sickle > 0)
        {
            temp.Sickle -= 17;
            temp.Galleon++;
        }

        cout << temp.Galleon << "." << -temp.Sickle << "." << -temp.Knut << endl;
    }
    else
        cout << temp.Galleon << "." << temp.Sickle << "." << temp.Knut << endl;

    return 0;
}

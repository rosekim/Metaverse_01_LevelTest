#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; i <= j; j--)
        {
            cout << " "; // �տ� ����. �پ���~~~
        }

        for (int k = 1; k <= (i * 2 - 1); k++)
        {
            cout << "*"; //*? �þ��~
        }

        cout << endl;
    }

    cout << endl;
}
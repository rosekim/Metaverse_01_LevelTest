#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; i <= j; j--)
        {
            cout << " "; // 앞에 공백. 줄어들게~~~
        }

        for (int k = 1; k <= (i * 2 - 1); k++)
        {
            cout << "*"; //*? 늘어날게~
        }

        cout << endl;
    }

    cout << endl;
}
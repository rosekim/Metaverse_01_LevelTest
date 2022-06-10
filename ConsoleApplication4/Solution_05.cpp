#include <iostream>
using namespace std;

int main()
{
   

        int n; //몇 개 출력 할 건지.
        int maxNum; //최대 수
        cin >> n; //받아 오기.
        cin >> maxNum;
        int* lotto = (int*)malloc(sizeof(int) * n);//아아아 배열 어캐 지정해줬지;이ㅏ 크게 만들어 두는 것 말고 사이즈 지정해서 넣어주고 싶음ㅇㅇㅇㅇ
     
        while (1)
        {
            srand(time(NULL)); //랜덤주기
            int r = rand() % maxNum - 1 + 1;  // 1~maxnum 사이의 랜덤 수 생성, 중복 가능
            int i = 0;
            for (i = 0; i < n; i++)         // 중복된 수인지 검사
              if (lotto[i] == r)
               break;    

            if (n == i) lotto[n++] = r;            // 중복 아닐 때 기억


        // 번호 출력
            for (i = 0; i < n; i++)
                cout << lotto[i] << " ";

            return 0;
            //뭐가 부족한ㄷ......머리가 안돌아가
        }
    }
        
#include <iostream>
using namespace std;

int main()
{
   

        int n; //�� �� ��� �� ����.
        int maxNum; //�ִ� ��
        cin >> n; //�޾� ����.
        cin >> maxNum;
        int* lotto = (int*)malloc(sizeof(int) * n);//�ƾƾ� �迭 ��ĳ ����������;�̤� ũ�� ����� �δ� �� ���� ������ �����ؼ� �־��ְ� ������������
     
        while (1)
        {
            srand(time(NULL)); //�����ֱ�
            int r = rand() % maxNum - 1 + 1;  // 1~maxnum ������ ���� �� ����, �ߺ� ����
            int i = 0;
            for (i = 0; i < n; i++)         // �ߺ��� ������ �˻�
              if (lotto[i] == r)
               break;    

            if (n == i) lotto[n++] = r;            // �ߺ� �ƴ� �� ���


        // ��ȣ ���
            for (i = 0; i < n; i++)
                cout << lotto[i] << " ";

            return 0;
            //���� �����Ѥ�......�Ӹ��� �ȵ��ư�
        }
    }
        
/*7.

�Է�
	: ���ϴ� ���� �Է�
	ó��
	�迭�� �����
	���� ���� ��ġ
	if ���ϴ� ���ڿ� �迭 �ȿ� ���� ������ üũ�ؼ� �ִٸ� �ٲ۴�
		�ʱ�ȭ cls
	  
		���� �񱳸� �ϸ� ��. 

		���
		1. ���� ���ڰ� ���ִ� �迭

#include <iostream>
int main(void)
{
	srand(time(NULL));

	int buf[25] = {}; 
	int buf2[25] = {};
	int num = 0;
	while (1)
	{
		if (num == 25)
			break;
		int k = rand() % 25;
		if (buf[k] == 0)
		{
			buf[k] = 1;
			buf2[num] = k;
			num++;
		}
	}
	//���ϱ� ���������� �ٵ�? �� ��°͹ۿ� �𸣰��� 12�� Ȯ�� �� �Է��ϴ� �� �ƴ� �� �ƴ�..
	int a;
		cout <<"����" <<n <<"���� ���� �ϼ��Ǿ����ϴ�");
		cout <<"���ڸ� �Է��� �ּ���";
		cin >> a;

		for (int k = 0; k < 25; k++)
		{
			if (buf2[k] == a)
				buf[k]=0;
		}
		system("cls");
	}

}
		*/

/*7.

입력
	: 원하는 숫자 입력
	처리
	배열을 만들고
	랜덤 숫자 배치
	if 원하는 숫자와 배열 안에 숫자 같은지 체크해서 있다면 바꾼다
		초기화 cls
	  
		이제 비교를 하면 됨. 

		출력
		1. 랜덤 숫자가 들어가있는 배열

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
	//비교하기 만들어줘야함 근데? 쭉 찍는것밖에 모르겠음 12개 확률 다 입력하는 건 아닐 거 아님..
	int a;
		cout <<"현재" <<n <<"줄의 빙고가 완성되었습니다");
		cout <<"숫자를 입력해 주세요";
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

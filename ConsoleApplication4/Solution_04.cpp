#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[5] = { 5,2,4,1,3 };
void sortArray(int* arr, int n)
{//��ĳ ���°��� �𸣰ʹ�
    vector<int> v;
    v.push_back(n);
    //�� �����
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout<< v[i];
    }
}

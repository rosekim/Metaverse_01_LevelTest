#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[5] = { 5,2,4,1,3 };
void sortArray(int* arr, int n)
{//어캐 쓰는건지 모르것다
    vector<int> v;
    v.push_back(n);
    //줄 세우기
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout<< v[i];
    }
}

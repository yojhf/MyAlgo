
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

//// 버블정렬
//void bubble_sort(int data[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = n - 1; j > i; j--)
//		{
//			if (data[j] < data[j-1])
//			{
//				swap(data[j], data[j-1]);
//
//			}
//		}
//	}
//}
//
//// 선택정렬
//void selection_sort(int data[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		// 정렬되지 않은 데이터중에 최소값을 가진 데이터의 인덱스
//		int idx = i;
//
//		for (int j = i + 1; j < n; j++)
//		{
//			if (data[j] < data[idx])
//			{
//				idx = j;			
//			}
//		}
//
//		swap(data[i], data[idx]);
//	}
//}
//
//// 삽입정렬 
//void insert_sort(int data[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		// 데이터의 맨 왼쪽 값
//		int key = data[i];
//		// 데이터의 바로 앞자리
//		int j = i - 1;
//
//		while (j >= 0 && data[j] > key)
//		{
//			data[j + 1] = data[j];
//
//			j--;
//		}
//
//		data[j + 1] = key;
//
//	}
//}
//
//// 병합
//int buff[256];
//
//void merge(int data[], int left, int mid, int right)
//{
//	int i = left, j = mid + 1, k = left;
//
//	while (i <= mid && j <= right)
//	{
//		if (data[i] <= data[j])
//		{
//			buff[k++] = data[i++];
//		}
//		else
//		{
//			buff[k++] = data[j++];
//		}
//	}
//
//	// 왼쪽에 데이터가 남아있으면
//	while(i <= mid)
//	{
//		buff[k++] = data[i++];
//	}
//
//	// 오른쪽에 데이터가 남아있으면
//	while (j <= right)
//	{
//		buff[k++] = data[j++];
//	}
//
//	// 임시변수에 저장된 데이터를 다시 옮기기
//	for (int x = left; x <= right; x++)
//	{
//		data[x] = buff[x];
//	}
//}
//
//// 병합정렬
//// left : 정렬한 데이터의 맨 앞, right : 정렬할 데이터의 맨뒤
//void merge_sort(int data[], int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		merge_sort(data, left, mid);
//		merge_sort(data, mid + 1, right);
//		merge(data, left, mid, right);
//	}
//
//	
//}
//
//// 분할
//int partition(int data[], int left, int right)
//{
//	int pivot = data[left];
//	int i = left + 1;
//	int j = right;
//
//	while (true)
//	{
//		// i의 위치를 pivot 보다 큰값까지 이동
//		while (data[i] <= pivot && i <= right)
//		{
//			i++;
//		}
//
//		// j의 위치를 pivot 보다 작은값까지 이동
//		while (data[j] > pivot && j > left)
//		{
//			j--;
//		}
//
//		// 이동이 완료되면 swap
//		if (i < j)
//		{
//			swap(data[i], data[j]);
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	swap(data[left], data[j]);
//
//	return j;
//}
//
//// 퀵정렬
//void quic_sort(int data[], int left, int right)
//{
//	if (left < right)
//	{
//		int p = partition(data, left, right);
//		quic_sort(data, left, p - 1);
//		quic_sort(data, p + 1, right);
//	}
//}
//
//
//int main()
//{
//	int data[] = { 4,2,3,5,1 };
//
//	bubble_sort(data, 5);
//
//	for (auto n : data)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	int data2[] = { 4,2,3,5,1 };
//
//	selection_sort(data2, 5);
//
//	for (auto n : data2)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	int data3[] = { 4,2,3,5,1 };
//
//	insert_sort(data3, 5);
//
//	for (auto n : data3)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	int data4[] = { 2,6,7,4,1,8,5,3 };
//
//	merge_sort(data4, 0,7);
//
//	for (auto n : data4)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	int data5[] = { 2,6,7,4,1,8,5,3,9 };
//
//	quic_sort(data5, 0, size(data) - 1);
//
//	for (auto n : data5)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//}
//

// ============================================================================================

// std::sort 예제
bool abs_com(const int a, const int b)
{
	return abs(a) < abs(b);
}

class AbsCmp
{
	bool operator()(int a, int b)
	{
		return abs(a) < abs(b);
	}

};
class Person
{
private:

public:
	string name;
	int age;

	void print()const
	{
		cout << name << ", " << age << endl;
	}

};



int main()
{
	// 
	int arr[5] = { 4,2,3,5,1 };

	// 오름차순
	sort(begin(arr), end(arr), less<>());

	for (auto e : arr)
	{
		cout << e << ", ";
	}

	cout << endl;

	// vector
	vector<string> vec = { "orange", "banana", "apple", "lemon" };
	// 내림차순
	sort(vec.begin(), vec.end(), greater<>());

	for (auto a : vec) 
	{
		cout << a << ", ";
	}

	cout << endl;

	// 비교방법 정의하고 지정 : 절대값 오름차순
	vector<int> nums = { 10,2,-3,5,7 };

	/*sort(nums.begin(), nums.end(), abs_com);*/
	/*sort(nums.begin(), nums.end(), AbsCmp());*/
	sort(nums.begin(), nums.end(), [](int a, int b) {
		return abs(a) < abs(b);
		});

	for (auto a : nums)
	{
		cout << a << ", ";
	}

	cout << endl;

	Person p;

}

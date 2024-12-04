
#include <iostream>
#include <array>
#include <vector>

using namespace std;

// 2행3열의 원소 합
// c++ vector 2차원 배열 활용
int main()
{
	// 2차원 배열 선언 및 초기화
	vector<vector<int>> mat1(2, vector<int>(3, 0));
	vector<vector<int>> mat2{
		{1,2,3},
		{4,5,6}
	};

	// 출력
	for (int r = 0; r < mat2.size(); r++)
	{
		for (int c = 0; c < mat2[r].size(); c++)
		{
			cout << mat2[r][c] << " ";
		}
		cout << endl;

	}

}

// ============================================================================================

// 2행3열의 원소 합
// c언어 2차원 배열
//int main()
//{
//	int mat[2][3] = {
//		{ 1, 2, 3 },
//		{ 4, 5, 6 }
//	};
//
//
//	int sum = 0;
//
//	for (int r = 0; r < 2; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			sum += mat[r][c];
//		}
//	}
//
//	cout << sum << endl;
//}

// ============================================================================================

// 가변형 배열 vector 활용
//int main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	// 0으로 초기화된 10개의 메모리 할당
//	vector<int> v2(10);
//	// 1로 초기화된 10개의 int 메모리 할당
//	vector<int> v3(10, 1);
//	vector<int> v4{ 10, 20, 30, 40, 50 };
//
//	vector<int> v5(v4);
//	vector<int> v6(v4.begin(), v4.begin() + 3);
//
//	for (int i = 0; i < v6.size(); i++)
//	{
//		cout << v6[i] << endl;
//	}
//}

// ============================================================================================

//int main()
//{
//    std::cout << "Hello World!\n";
//}

//// 동적 메모리를 관리하는 클래스
//class DynamicArray
//{
//private :
//	unsigned int sz;
//	int* arr;
//
//public : 
//	// 생성자 : 매개변수를 크기를 입력받아 동적 메모리 할당
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new int[sz] {};
//	}
//
//	// 소멸자 : 할당된 메모리를 해제
//	~DynamicArray() 
//	{
//		delete[] arr;
//
//		cout << "동적메모리 해제" << endl;
//	}
//
//	unsigned int size()
//	{
//		return sz;
//	}
//
//	int& operator[] (const int i) { return arr[i]; }
//
//};
//
//
//int main()
//{
//	// 메모리 할당
//	DynamicArray da(5);
//	da[0] = 10;
//	da[1] = 20;
//	da[2] = 30;
//	da[3] = 40;
//
//
//	for (int i = 0; i < da.size(); i++)
//	{
//		cout << da[i] << endl;
//	}

// ============================================================================================

// template 동적 메모리를 관리하는 클래스
//template <typename T>
//class DynamicArray
//{
//private:
//	unsigned int sz;
//	T* arr;
//
//public:
//	// 생성자 : 매개변수를 크기를 입력받아 동적 메모리 할당
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new T[sz] {};
//	}
//
//	// 소멸자 : 할당된 메모리를 해제
//	~DynamicArray()
//	{
//		delete[] arr;
//
//		cout << "동적메모리 해제" << endl;
//	}
//
//	unsigned int size()
//	{
//		return sz;
//	}
//
//	T& operator[] (const int i) { return arr[i]; }
//
//};
//
//
//int main()
//{
//	// 메모리 할당
//	DynamicArray<string> da(5);
//	da[0] = "10";
//	da[1] = "20";
//	da[2] = "30";
//	da[3] = "40";
//
//
//	for (int i = 0; i < da.size(); i++)
//	{
//		cout << da[i] << endl;
//	}
//
//
//}

// ============================================================================================


#include <iostream>
#include <numeric>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int sum_iterative(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

// 1부터 n 까지의 합을 반환하는 재귀함수 100 => sum_iterative(99) + 100
int sum_reiterative(int n)
{
	// 기저 조건부
	if (n < 1)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	// 재귀 호출부
	return sum_reiterative(n - 1) + n;
}

// n! 구하는함수 : n * (n-1) * (n-2) * ... * 3 * 2 * 1
long long factorial(int n)
{
	// 기저 조건부
	if (n <= 0)
	{
		return 1;
	}

	// 재귀 호출부
	return n * factorial(n - 1);
}

// 피보나치 수열 1,1,2,3,5............
// n번째 위치한 피보나치 수열 값
long long fibo(int n)
{
	// 기저 조건부
	if (n <= 1)
	{
		return n;
	}

	// 재귀 호출부
	return fibo(n - 1) + fibo(n - 2);
}

// HELLO 뒤집기
/*
f(HELLO)
	f(ELLO) + H
		f(LLO) + E
			f(LO) + L
				......
*/
string reverse(const string& str)
{
	if (str.length() == 0)
	{
		return "";
	}


	return reverse(str.substr(1)) + str[0];
}

// 최대공약수
int mgcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return mgcd(b, a % b);
	}

}

// 최소 공배수
int mlcm(int a, int b)
{
	return a * b / mgcd(a, b);
}

template<typename T>
void print_vector(const vector<T> vec)
{
	for (auto a : vec)
	{
		cout << a << ", ";
	}
	cout << endl;
}

void permutation(vector<int>& vec, int k)
{
	if (k == vec.size() - 1)
	{
		print_vector(vec);
		return;
	}

	for (int i = k; i < vec.size(); i++)
	{
		// 자리 바꾸기
		swap(vec[k], vec[i]);
		// 재귀호출
		permutation(vec, k + 1);
		// 제자리 돌리기
		swap(vec[k], vec[i]);
	}
}

int main()
{
	//cout << sum_iterative(100) << endl;
	//cout << sum_reiterative(100) << endl;
	//cout << factorial(5) << endl;
	//cout << factorial(10) << endl;
	//cout << factorial(20) << endl;

	//for (int i = 1; i <= 10; i++)
	//{
	//	cout << fibo(i) << ", ";
	//}
	//cout << endl;

	//cout << reverse("HELLO") << endl;

	//cout << mgcd(24, 18) << endl;
	//cout << mlcm(2, 5) << endl;

	vector<int> vec{ 1,2,3,4 };

	permutation(vec, 0);
	//print_vector(vec);

}


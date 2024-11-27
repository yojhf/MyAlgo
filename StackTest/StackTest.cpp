
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

// 매개변수로 입력받은 문자열 뒤집어 반환
string reverse(const string& str)
{
	stack<char> stk;

	for (char c : str)
	{
		stk.push(c);

	}

	string result;

	while (!stk.empty())
	{
		result += stk.top();

		stk.pop();
	}

	return result;
}

// 매개변수로 들어온 vector 데이터를 뒤집어 저장
template<typename T>
void reverse(vector<T>& vec)
{
	stack<T> stk;

	for (auto a : vec)
	{
		stk.push(a);
		vec.clear();
	}

	//for (int i = 0; i < vec.size(); i++)
	//{
	//	vec[i] = stk.top();
	//	stk.pop();
	//}

	T result;

	while (!stk.empty())
	{
		result = stk.top();

		vec.push_back(result);

		stk.pop();
	}
}

// 매개 변수로 들어온 괄호 문자열을 받아 올바른 괄호인지 체크
bool paren_check(const string& str)
{
	stack<char> stk;

	for (char c : str)
	{
		if (c == '(' || c == '{' || c == '[')
		{
			stk.push(c);
		}
		else // 닫는 괄호 ), }, ] 스택의 top 비교
		{
			if (stk.empty())
			{
				return false;
			}
			if(stk.top() == '(' && c == ')'
				|| stk.top() == '{' && c == '}'
				|| stk.top() == '[' && c == ']')
			{
				stk.pop();
			}
		}
	}

	return stk.empty();
}

int main()
{
	string str1 = "HELLO";
	string str2 = "ALGORITHM";

	cout << str1 << " -> " << reverse(str1) << endl;
	cout << str2 << " -> " << reverse(str2) << endl;


	// 
	vector<int> vec1{ 10,20,30,40,50 };

	reverse<int>(vec1);

	for (auto i : vec1)
	{
		cout << i << ", ";
	}
	cout << endl;


	cout << paren_check("(){}[]") << endl;
	cout << paren_check("((((()))))") << endl;
	cout << paren_check("(){[]}") << endl;

	cout << paren_check("((({}))") << endl;
	cout << paren_check(")(") << endl;
	cout << paren_check("({)}") << endl;


}

//template<typename T>
//class Stack
//{
//private:
//    vector<T> v;
//public:
//
//    Stack() {}
//
//    void push(const T& e)
//    {
//        v.push_back(e);
//    }
//    void pop()
//    {
//        v.pop_back();
//    }
//    const T& top() const
//    {
//        return v.back();
//    }
//    bool empty() const
//    {
//        return v.empty();
//    }
//    int size()
//    {
//        return v.size();
//    }
//
//    void print_all(Stack<T> stk)
//    {
//        while (!stk.empty())
//        {
//            auto e = stk.top();
//            cout << e << ", ";
//
//            stk.pop();
//        }
//
//        cout << endl;
//    }
//
//};
//
//
//int main()
//{
//    Stack<int> st;
//
//    st.push(10);
//    st.push(20);
//    st.push(30);
//
//    st.pop();
//
//    cout << st.top() << endl;
//
//    st.push(40);
//    
//    st.print_all(st);
//
//}

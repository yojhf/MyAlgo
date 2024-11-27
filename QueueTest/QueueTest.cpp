
#include <iostream>
#include <list>
#include <queue>
#include <deque>

using namespace std;

// =================================================================

int main()
{
	deque<int> d{ 10,20,30,40,50 };
	d.push_front(60);
	d.push_back(70);

	for (auto e : d)
	{
		cout << e << ", ";

	}

	cout << endl;

}

// =================================================================

// 배열로 환형 큐 구현
//template<typename T>
//class CircularQueue
//{
//private:
//	// 배열
//	T* arr;
//	// 앞 데이터 인덱스
//	int front_idx;
//	// 마지막 데이터 인덱스
//	int rear_idx;
//	// 큐에 들어간 데이터 갯수
//	int count;
//	// 큐에 들어갈 수 있는 데이터 용량
//	int capacity;
//
//public:
//	CircularQueue(int _size) 
//	{
//		arr = new T[_size];
//		
//		capacity = _size;
//		count = 0;
//		front_idx = 0;
//		rear_idx = -1;
//	}
//
//	~CircularQueue() 
//	{
//		delete[] arr;
//	}
//
//	// 마지막에 위치에 데이터 넣기
//	void enqueue(const T& e)
//	{
//		// 풀체크
//		if (full())
//		{
//			cout << "Overflow" << endl;
//			return;
//		}
//
//		// 넣을 자리
//		rear_idx = (rear_idx + 1) % capacity;
//
//		arr[rear_idx] = e;
//		count++;
//	}
//
//	// 처음 데이터 삭제
//	void dequeue()
//	{
//		// 풀체크
//		if (empty())
//		{
//			cout << "Underflow" << endl;
//			return;
//		}
//
//
//		// front_idx의 위치를 오른쪽으로 이동
//		front_idx = (front_idx + 1) % capacity;
//
//		count--;
//	}
//
//	const T& front() const
//	{
//		return arr[front_idx];
//	}
//
//	bool empty() const
//	{
//		return count == 0;
//	}
//
//	bool full() const
//	{
//		return capacity == count;
//	}
//
//	int size() const
//	{
//		return count;
//	}

	//void print_all(CircularQueue<T> q)
 //   {
 //       while (!q.empty())
 //       {
 //           auto& e = q.front();
 //           cout << e << ", ";

	//		q.dequeue();
 //       }

 //       cout << endl;
 //   }

//};

//int main()
//{
//	CircularQueue <int> q(5);
//
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//	q.enqueue(50);
//	
//	q.dequeue();
//	q.dequeue();
//
//	q.enqueue(60);
//	q.enqueue(70);
//	q.enqueue(80);
//
//
//	//q.print_all(q);
//
//	while (!q.empty())
//	{
//		auto& e = q.front();
//		cout << e << ", ";
//
//		q.dequeue();
//	}
//
//	cout << endl;
//
//}

// =================================================================

//template<typename T>
//class  Queue
//{
//private:
//	list<T> lst;
//public:
//	Queue() {}
//
//	void enqueue(const T& e)
//	{
//		lst.push_back(e);
//	}
//	void dequeue()
//	{
//		lst.pop_front();
//	}
//
//	const T& front() const
//	{
//		return lst.front();
//	}
//
//	bool empty()
//	{
//		return lst.empty();
//	}
//	int size()
//	{
//		return lst.size();
//	}
//
//	void print_all(Queue<T> q)
//    {
//        while (!q.empty())
//        {
//            auto e = q.front();
//            cout << e << ", ";
//
//			q.dequeue();
//        }
//
//        cout << endl;
//    }
//
//};
//
//int main()
//{
//	Queue<int> q;
//
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//
//	q.dequeue();
//
//	cout << q.front() << endl;
//
//	q.enqueue(40);
//
//	q.print_all(q);
//
//
//	queue<int> qe;
//	qe.push(10);
//	qe.push(20);
//	qe.push(30);
//
//	qe.pop();
//
//	cout << qe.front() << endl;
//
//	qe.push(40);
//
//	while (!qe.empty())
//	{
//		auto e = qe.front();
//		cout << e << ", ";
//
//		qe.pop();
//	}
//
//	cout << endl;
//
//
//}


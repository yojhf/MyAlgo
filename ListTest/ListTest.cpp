
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

// std::forward_list(단방향) 활용
int main()
{
	forward_list<int> fl1{ 10,20,30,40 };

	fl1.push_front(40);
	fl1.push_front(30);

	for (auto a : fl1)
	{
		cout << a << ", ";
	}

	cout << endl;


	int count = std::distance(fl1.begin(), fl1.end());

	cout << count << endl;


	fl1.remove(40);

	for (auto a : fl1)
	{
		cout << a << ", ";
	}

	cout << endl;


	fl1.remove_if([](int n) { return n > 20; });

	for (auto a : fl1)
	{
		cout << a << ", ";
	}

	cout << endl;
}

// =================================================================

// 양방향 리스트
//int main()
//{
//	list<int> ll;
//	ll.push_back(10);
//	ll.push_back(20);
//
//	list<int> l2{ 10,20,30,40 };
//
//	for (auto a : l2)
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//	// 다른 리스트와연결
//	l2.splice(l2.end(), ll);
//
//	for (auto a : l2)
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//	// 정렬
//	l2.sort();
//
//	for (auto a : l2)
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//
//	// 중복제거
//	l2.unique();
//
//	for (auto a : l2)
//	{
//		cout << a << ", ";
//	}
//	cout << endl;
//	
//
//}

// =================================================================

//template <typename T>
//// 이중 연결 리스트
//struct Node
//{
//	T data;
//	// 현재 노드의 이전 노드
//	Node* prev;
//	// 현재 노드의 다음 노드
//	Node* next;
//};
//
//template <typename T>
//class DoubleLinkedList
//{
//private:
//	// 노드의 갯수
//	int count;
//	// 리스트 앞부분 더미 노드
//	Node<T>* header;
//	// 리스트 뒷부분 더미 노드
//	Node<T>* trailer;
//
//public:
//	// 반복자 (iterator) 클래스
//	class iterator
//	{
//	private:
//		Node<T>* ptr;
//
//	public:
//		// 생성자
//		iterator() : ptr(NULL) {}
//		iterator(Node<T>* p): ptr(p)
//		{
//			
//		}
//
//		T& operator*() { return ptr->data; }
//
//		// ++iterator;
//		iterator& operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		// --iterator;
//		iterator& operator--()
//		{
//			ptr = ptr->prev;
//			return *this;
//		}
//
//		bool operator==(const iterator it)
//		{
//			return ptr == it.ptr;
//		}
//
//		bool operator!=(const iterator it)
//		{
//			return ptr != it.ptr;
//		}
//
//		friend class DoubleLinkedList;
//
//	};
//	// 생성자
//	DoubleLinkedList()
//	{
//		count = 0;
//		header = new Node<T>{ 0, NULL, NULL };
//		trailer = new Node<T>{ 0, NULL, NULL };
//
//		header->next = trailer;
//		trailer->prev = header;
//	}
//
//	// 소멸자
//	~DoubleLinkedList()
//	{
//		// 생성한 node의 메모리 해제
//        while (!empty())
//        {
//            pop_front();
//        };
//	}
//
//	// 맨앞에 데이터 노드를 가진 iterator
//	iterator begin()
//	{
//		return iterator(header->next);
//	}
//	// 맨뒤에 노드(trailer)를 가진 iterator
//	iterator end()
//	{
//		return iterator(trailer);
//	}
//
//	// 특정하는 iterator pos가 가진노드(p) 앞에 value 값을 가진 노드 삽입
//	void Insert(const iterator& pos, T value)
//	{
//		// value 값을가진 노드를 생성
//		Node<T>* p = pos.ptr;
//
//		Node<T>* new_node = new Node<T>{ value, p -> prev, p };
//
//		// 10
//		new_node->prev->next = new_node;
//		// 20
//		new_node->next->prev = new_node;
//
//		count++;
//	}
//
//	// 맨앞에 value 값을 가진 노드 삽입
//	void push_front(T value)
//	{
//		// 해더의 다음 node 앞에 삽입하기
//		Insert(header->next, value);
//	}
//
//	// 맨뒤에 value 값을 가진 노드 삽입
//	void push_back(T value)
//	{
//		Insert(trailer, value);
//	}
//
//	// 특정하는 iterator pos가 가진 노드(p)의 삭제
//	void erase(const iterator& pos)
//	{
//		Node<T>* p = pos.ptr;
//		// 10(p->prev) / 30(p->next)
//		p->prev->next = p->next;
//		p->next->prev = p->prev;
//
//		delete p;
//		count--;
//	}
//
//	// 맨 앞에 있는 노드 삭제
//	void pop_front()
//	{
//		if(!empty())
//			erase(header->next);
//	}
//	 
//	// 맨 뒤에 있는 노드 삭제
//	void pop_back()
//	{
//		if (!empty())
//			erase(trailer->prev);
//	}
//
//	// 데이터가 있는지 체크
//	bool empty()
//	{
//		return count == 0;
//	}
//	
//	// 노드의 갯수
//	int size()
//	{
//		return count;
//	}
//
//	void print_all()
//	{
//		Node<T>* cur = header->next;
//		
//		// cur가 trailer이 될때까지 반복
//		while (cur != trailer)
//		{
//		    // 현재 cur 노드의 데이터를 출력
//		    cout << cur->data << " , ";
//		
//		    // cur 노드가 다음 노드로 이동
//		    cur = cur->next;
//		
//		}
//		
//		cout << endl;
//	}
//
//	// 역순으로 출력
//	void print_reverse()
//	{
//		Node<T>* cur = trailer->prev;
//
//		// cur가 header이 될때까지 반복
//		while (cur != header)
//		{
//			// 현재 cur 노드의 데이터를 출력
//			cout << cur->data << " , ";
//
//			// cur 노드가 이전 노드로 이동
//			cur = cur->prev;
//
//		}
//
//		cout << endl;
//	}
//
//	iterator find(const T& value)
//	{
//		Node<T>* cur = header->next;
//
//		while (cur->data != value && cur != trailer)
//		{
//			cur = cur->next;
//
//		}
//
//		return iterator(cur);
//	}
//
//};

//int main()
//{
//	DoubleLinkedList<int> dl;
//
//	//dl.push_back(10);
//	//dl.push_back(20);
//	//dl.push_back(30);
//
//	//dl.print_all();
//	//dl.print_reverse();
//
//	//dl.pop_front();
//	//dl.pop_back();
//	//dl.print_all();
//
//	//dl.push_front(100);
//	//dl.push_back(300);
//	//dl.print_all();
//	
//
//	dl.push_back(10);
//	dl.push_back(20);
//	dl.push_back(30);
//
//	dl.print_all();
//
//	auto it = dl.find(20);
//
//	if (it != dl.end())
//	{
//		dl.Insert(it, 50);
//	}
//
//	dl.print_all();
//
//
//}

// =================================================================

//struct Node
//{
//    // 저장할 데이터
//    int data;
//    // 다음에 오는 노드
//    Node* next;
//};
//
//class LinkedList
//{
//private:
//    // 제일 앞에 있는 노드
//    Node* head;
//
//public:
//    // 생성자
//    LinkedList() : head(NULL)
//    {
//
//    }
//    //소멸자
//    ~LinkedList() 
//    {
//        // 생성한 node의 메모리 해제
//        while (!empty())
//        {
//            pop_front();
//        };
//    }
//
//    // 매개변수를 데이터(value)를 입력 받아 리스트 맨앞에 삽입
//    void push_front(int value)
//    {
//        // 데이터(value)를 가진 Node 생성
//
//        Node* new_node = new Node{value, NULL};
//
//        if (head != NULL)
//        {
//            new_node->next = head;
//        }
//
//        head = new_node;       
//    }
//
//    // 리스트 맨 앞에 있는 데이터 삭제
//    void pop_front()
//    {
//        if (head == NULL)
//            return;
//
//        Node* first = head;
//        head = head->next;
//        delete first;
//    }
//
//    // 리스트의 모든 노드 데이터 출력
//    void print_all()
//    {
//        Node* cur = head;
//
//        // cur가 null이 될때까지 반복
//        while (cur != NULL)
//        {
//            // 현재 cur 노드의 데이터를 출력
//            cout << cur->data << " , ";
//
//            // cur 노드가 다음 노드로 이동
//            cur = cur->next;
//
//        }
//
//        cout << endl;
//    }
//
//    // 데이터 유무
//    bool empty()
//    {
//        return head == NULL;
//    }
//};
//
//int main()
//{
//    LinkedList ll;
//
//    ll.push_front(10);
//    ll.push_front(20);
//    ll.push_front(30);
//    ll.print_all();
//
//    ll.pop_front();
//    ll.print_all();
//
//    ll.push_front(40);
//    ll.print_all();
//
//}

#include <iostream>

// �̱� ��ũ�� ����Ʈ �Դϴ�
template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// list �ȿ� �ִ� Node�� ����ų�� �ִ� 
// ������ ��Ȱ�� Ŭ����(iterator)�� ����� ���ô�.
template<typename T> class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}

	// �츮�� ��ǥ�� find�� ������ �־�� �մϴ�.
	// ++, !=, ==, * �� ������ �ؼ�
	// "raw pointer" ó�� �����Ҽ� �ְ� �ؾ� �մϴ�.

	slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	T& operator*() { return current->data ; }

	bool operator==(const slist_iterator& it) const { return current == it.current; }
	bool operator!=(const slist_iterator& it) const { return current != it.current; }
};

//slist_iterator p(400����);
//++p; // p.operator++()
//*p;  // p.operator*()





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	// find �� �������� ó���� ����Ű�� �ݺ��ڿ� ������ ������ ����Ű�� �ݺ��ڰ� �ʿ��մϴ�.
	// ��� �����̳�(list���� Ŭ����)�� �Ʒ� 2���� �Լ��� ������ ����մϴ�.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end()   { return slist_iterator<T>(0); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist_iterator<int> p = s.begin();

	// ���� p�� �����Ϳ� �����ϰ� �����մϴ�.
	// ������ ó�� �����ϰ� ����ϼ���.
	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}
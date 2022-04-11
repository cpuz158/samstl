#include <iostream>

template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

template<typename T> class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr) : current(p) {}

	slist_iterator& operator++()
	{
		current = current->next;
		return *this;
	}
	T& operator*() { return current->data; }

	bool operator==(const slist_iterator& it) const { return current == it.current; }
	bool operator!=(const slist_iterator& it) const { return current != it.current; }
};




template<typename T> class slist
{
	Node<T>* head = nullptr;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	// list ���� �����̳ʸ� ����� ����� �ݵ�� �ڽ��� �ݺ��� Ŭ���� �̸���
	// ��ӵ� ���� "iterator" ��� �̸����� �ܺο� �˸���� ����մϴ�

	using iterator = slist_iterator<T>; 

	// typedef slist_iterator<T> iterator �� ���� �ǹ� �Դϴ�

	
	
	iterator begin() { return iterator(head); }
	iterator end()   { return iterator(nullptr); }
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

	std::cout << *p << std::endl; 

	++p; 

	std::cout << *p << std::endl; 
}
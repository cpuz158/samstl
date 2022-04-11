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
	using iterator = slist_iterator<T>;
	using value_type = T;


	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
	
	iterator begin() { return iterator(head); }
	iterator end() { return iterator(nullptr); }
};




template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first;
}

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p = find(s.begin(), s.end(), 30);

	if (p == s.end())
	{
		std::cout << "�˻� ����" << std::endl;
	}
	else
	{
		std::cout << "�˻� ���� : " << *p << std::endl;
	}

}
// 40 page ���� ����
// STL : Standard Template Library
// STL �� 3�� ��� : Container, Iterator, Algorithm(find ���� �Ϲ��Լ����ø�)

// �ڷᱸ���� �˰����� �и��� ������ ���̺귯��
// �˰���(find) �����ڴ� �ڽ��� � �ڷᱸ������ �����˻��ϴ��� ���ʿ� ���� ����

// 1���� : Iterator(5�ð��̻�
// 2���� : �˰���(4~5), Container(8�ð�)
// 3���� : Container
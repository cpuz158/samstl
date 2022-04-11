#include <iostream>

// �̱� ��ũ�� ����Ʈ �Դϴ�
template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

template<typename T> class slist
{
	Node<T>* head = 0;
public:
	// �̱۸���Ʈ�� �Ʒ� ó�� �����ڸ� �� Ȱ���ϸ�
	// �����ϰ� ����� �ֽ��ϴ�.
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
	// ���߿� pop_front(), �Ҹ��� ���� �ڵ� ���弼��
	// delete �Ҽ� �ְ� �غ�����..
};

int main()
{
	// 31 page �׸� ���� �ϼ���
	slist<int> s;
	
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);
}
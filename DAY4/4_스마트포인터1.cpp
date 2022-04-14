#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// ����Ʈ �����Ͷ� ?
// ���� : ������ ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��
// 
// ���� : -> �� * �����ڸ� ������ �ؼ� ������ ó�� ���̰� �����
// 
// ���� : raw pointer �� �ƴ� "��ü"��� ��.!
//       ����/����/����/�ı��� ��� ������ �ش��ϴ� �Լ��� ȣ��ǰ�
//		 �پ��� ����� �߰��Ҽ� �ִ�.
//		 ��ǥ���� Ȱ�� ������ "�Ҹ��ڿ��� ��ü�� ����" ����

// �Ʒ� �ڵ尡 �ٽ� �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; } // ���������ؾ� �մϴ�.
};

int main()
{
	// Ptr Ÿ���� "��ü p" �� "Car Ÿ���� ������" ó�� ���˴ϴ�.
	// 1. �Ʒ� �ڵ� ����(�޸� �׸� �׷� ������)
	Ptr p = new Car; // Ptr p(new Car)


	// 2. �Ʒ� �ڵ�� ���� ������ ������
	p->Go(); // p.operator->()Go() �� ����ε�
			 // (p.operator->())->Go()�� �ؼ��˴ϴ�.

	(*p).Go(); // p.operator*() �� �ʿ� �մϴ�.


	std::cout << sizeof(p) << std::endl; // ����ҽ��� raw pointer ũ��� ����
	std::cout << sizeof(Car*) << std::endl;
}



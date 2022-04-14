#include <iostream>

// C++11�� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// �ٽ� 1. ǥ�� ����Ʈ ������ �̸��� "shared_ptr" �Դϴ�.
	std::shared_ptr<int> p1(new int);   // ok
//	std::shared_ptr<int> p2 = new int;  // error. 
										// ������ �տ� explicit �� ���̸� () �ʱ�ȭ��
										// �����մϴ�.


	// �ٽ� 2. ����Ʈ �������� ũ��
	//        ������ ���� �޶� ���� ������ ��κ� "raw pointer ũ���� 2��"
	std::cout << sizeof(p3)   << std::endl; // ?
	std::cout << sizeof(int*) << std::endl; // ?



	
	// �ٽ� 3. -> �� . ������
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;


	// -> : ���ü(Car) �� ����� ����
	sp1->Go(); // Car �� ��� �Լ�

	// . : shared_ptr ��ü�� ��� �Լ�
	int n = sp1.use_count();

	std::cout << n << std::endl; // ������� 2

	Car* p = sp1.get();
	
	sp1.reset(); // 
	sp1 = 0;
	sp1 = nullptr;
}




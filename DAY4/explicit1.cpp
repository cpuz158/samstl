// explicit1
#include <iostream>

class Bike
{
	int gear;
public:
	// explicit  ������ : ���� �ʱ�ȭ�� �����ϰ�, ���� �ʱ�ȭ�� �Ҽ� ����.
	explicit Bike(int n) : gear(n) {}
};
// �Լ� ���ڸ� �޴� ���� �Ʒ� �ּ� ó�� �Ǿ� �ִ� �ڵ� �Դϴ�.
void fn(Bike b) {} // "Bike b = 10"  ó�� ���� �ʱ�ȭ�� �Ǵ� �� �Դϴ�.
				   // "Bike b = Bike(10)"
int main()
{
	// ���ڰ� �Ѱ��� �����ڰ� ������ �Ʒ�ó�� 4���� ���·� ��ü ������ �����մϴ�.
	// C++98
	Bike b1(10);	// ����(direct) �ʱ�ȭ
	Bike b2 = 10;	// ����(copy) �ʱ�ȭ

	// C++11 
	Bike b3{ 10 };		// ����(direct) �ʱ�ȭ
	Bike b4 = { 10 };	// ����(copy) �ʱ�ȭ

	fn(10); // error
	fn( Bike(10) ); // ok. �̰��� "Bike b = Bike(10)" �̹Ƿ�
							// int ���� �Ѱ��� �����ڰ� �ƴ�
							// ���� �����ڸ� ȣ���ϰ� �˴ϴ�.
}
// explicit1
#include <iostream>

class Bike
{
	int gear;
public:
	Bike(int n) : gear(n) {}
};

void fn(Bike b) {}

int main()
{
	// ���ڰ� �Ѱ��� �����ڰ� ������ �Ʒ�ó�� 4���� ���·� ��ü ������ �����մϴ�.
	Bike b1(10);
	Bike b2 = 10;
	Bike b3{ 10 };
	Bike b4 = { 10 };
}
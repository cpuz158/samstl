#include <iostream>
#include <thread>
#include <functional>

void f1(int  n) { n = 100; }
void f2(int& n) { n = 100;  }

int main()
{
	int v = 10;
	f1(v);	// call by value - f1�� ����Ǵ� ���߿� v �� �ı��Ǿ
			//				���纻���� ����ϰ� �ǹǷ� ������ �����մϴ�.

	f2(v);	// call by reference - f2�� ����Ǵ� ���� v�� �ı��Ǹ�
			//				���� �մϴ�.
			// �׷���, ��Ƽ�����尡 �ƴϹǷ� v�� �ı��� Ȯ�� �����ϴ�.

}

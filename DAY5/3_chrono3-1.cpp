// 3_chrono3-1
#include <iostream>
#include <chrono>
using namespace std::literals; // min ���� user define literal

int main()
{
	std::chrono::hours h(1); // 1�ð�
	std::chrono::seconds s(h); // ū ���� => ���� ������ �ֱ�
								// ����Ÿ �ս� ����. ok..

	std::cout << s.count() << std::endl;

	s = s + 70s;  // 3670 ��

	//-------------------------
//	std::chrono::minutes m(s); // ���� ���� => ū ������ �ֱ�
								// error.  ĳ���� �ʿ�
	std::chrono::minutes m =
		std::chrono::duration_cast<std::chrono::minutes>(s); // ok

	std::cout << m.count() << std::endl;

	
					
}

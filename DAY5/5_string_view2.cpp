// 5_string_view
#include <iostream>
#include <string>
#include <string_view>

void* operator new(std::size_t sz)
{
	std::cout << sz << "�޸� �Ҵ�" << std::endl;
	return malloc(sz);
}

// ���ڷ� ���ڿ��� �ް� �ͽ��ϴ�.
// 1. ���� ���� �ڵ�
// void foo(std::string name)  {}

// 2. ���� ���� �ڵ�
//void foo(std::string_view name) {}

// 3. �Ʒ� �ڵ带 �ϸ���� �ʳ��� ?
void foo(const std::string& name) {}

int main()
{
//	std::string s = "sdjfsljflsjlsdkjfssfsd";
//	foo(s);

	// string_view �� const string& �� ���� �Ϸ��� �Ʒ� ��츦 ������ ������
	foo("sdjfsljflsjlsasdadadasdkjfssfsd");
}







/*
void* operator new(std::size_t sz)
{
	std::cout << sz << "�޸� �Ҵ�" << std::endl;
	return malloc(sz);
}
*/

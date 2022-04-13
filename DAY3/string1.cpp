// string
#include <iostream>
#include <string>

// std::string �� ���� Ŭ���� �̸��� "basic_string" �Դϴ�.
// �Ʒ� ��� ����
template<typename T,   // char �Ǵ� wchar_t ���
	     typename Traits = std::char_traits<T>, // �� ��å�� ���� ��������
		 typename Alloc = std::allocator<T> >   // �޸� �Ҵ��
class basic_string
{
};

using string = basic_string<char>;		// ansi ���ڿ�
using wstring = basic_string<wchar_t>;	// unicode ��

int main()
{
	std::string s1 = "abcd";

}
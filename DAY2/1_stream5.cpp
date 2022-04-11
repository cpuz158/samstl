#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> 
#include <fstream> 

int main()
{
	std::ifstream fin("1_stream5.cpp"); 

	// istream_iterator �� white space(space, tab, enter ��)�� ����
//	std::istream_iterator<char> p1(fin); 
//	std::istream_iterator<char> p2; // ������ ���ڸ� �������� ������ EOF��
									// ��Ÿ���ϴ�.

	// �Ʒ� �ݺ��ڴ� ���鵵 �Է� �����մϴ�
	std::istreambuf_iterator<char> p1(fin); 
	std::istreambuf_iterator<char> p2; 


	std::ostream_iterator<char> p3(std::cout, "");

	std::copy(p1, p2, p3);

}
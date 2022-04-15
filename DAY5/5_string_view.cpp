// 5_string_view
#include <iostream>
#include <string>
#include <string_view> // C++17 ���� �߰�

int main()
{
	std::string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 


	// "s2" �� "sv" �� �޸� �׸��� �� �˾� �μ���
	std::string s2 = s1; // s1 �� ���ڿ��� ���������ؼ�
						 // s2 �� ������ �޸𸮷� ����

	std::string_view sv = s1;	
						// sv �� ���ڿ��� �������� �ʰ�
						// s1 ���ڿ��� ����
						// ��, sv�δ� �б⸸ ����
	auto ret = sv[0]; // ok

	sv[0] = 'A'; // error
}
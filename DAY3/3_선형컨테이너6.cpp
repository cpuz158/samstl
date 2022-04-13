#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

class FindChar
{
	std::string data;
public:
	FindChar(const std::string& s) : data(s) {}

	inline bool operator()(char c) const 
	{
		return std::find(data.begin(), data.end(), c) != data.end();
	}
};


int main()
{
	std::vector<std::string> v;

	std::ifstream f("3_���������̳�6.cpp"); // ���� �����̸�

	std::string s;

	// f >> s        : ���Ͽ��� �Ѵܾ� �б�  
	// getline(f, s) : ���Ͽ��� �� ����     getline(std::cin, s)�� �˴ϴ�.
	
	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // ������ ������ ���� ������.
//	std::reverse(v[0].begin(), v[0].end()); // 1��° �ٸ� �¿� ������

	for (auto& e : v)
	{
//		std::reverse(e.begin(), e.end());
//		std::replace(e.begin(), e.end(), 'i', ' ');

		// ��� ������ ���� ó���� �޶�.
//		std::replace_if(e.begin(), e.end(), 
//						[](char c) { return c == 'a' || c == 'e'; },
//						' ');

//		FindChar fc("aeiouAEIOU");
//		bool b = fc('a'); // true
		FindChar fc("0123456789");

		std::replace_if(e.begin(), e.end(), fc,	' ');


	}

	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}



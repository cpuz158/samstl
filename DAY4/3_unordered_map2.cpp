// 1_map2 ���� �����ؿ�����
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <unordered_map>
#include "show.h"

int main()
{
//	std::map< std::string, std::list<int> > indexMap;
	std::unordered_map< std::string, std::list<int> > indexMap;

	std::ifstream f("1_map2.cpp");

	int no = 0; // line number ����

	std::string s;

	while (std::getline(f, s))   // ���Ͽ��� ���� ���� �б�
	{
		++no;
		std::istringstream iss(s);  // ������ ������
		std::string word;
		while (iss >> word)			// �ܾ�� �и�
		{
			// map["Ű"] : Ű�� ������ value ��ȯ, 
			//			   ������ "Ű" ����
			indexMap[word].push_back(no);
		}
	}
	//------------------------------
	for (auto& p : indexMap)
	{
		std::cout << p.first << " : "; // �ܾ� ���
		show(p.second); // p.second �� std::list<int> �Դϴ�.
	}
}




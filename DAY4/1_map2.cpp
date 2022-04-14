#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>

int main()
{
	std::map< std::string, std::list<int> > indexMap;

	std::ifstream f("readme.txt");

	int no = 0; // line number ����

	std::string s;

	while ( std::getline(f, s) )   // ���Ͽ��� ���� ���� �б�
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
}



#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
int main()
{
	int pc = 0;
	cin >> pc;
	//vector<int> p[100];
	map<int, vector<int>> m;
	while (pc)
	{
		int idn = 0; int data = 0;
		int des = 0; int sou = 0;
		string command;
		cin >> command;
		if (command == "new")
		{
			cin >> idn;
		}
		else if (command == "add")
		{
			cin >> idn >> data;
			m[idn].push_back(data);
		}
		else if (command == "merge")
		{
			cin >> des >> sou;
			m[des].insert(m[des].end(), m[sou].begin(), m[sou].end());
			m[sou].clear();
		}
		else if (command == "out")
		{
			cin >> idn;
			sort(m[idn].begin(), m[idn].end());
			for (auto op = m[idn].begin(); op != m[idn].end(); op++)
			{
				cout << (*op) << " ";
			}
			cout << endl;
		}
		else if (command == "unique")
		{
			cin >> idn;
			sort(m[idn].begin(), m[idn].end());
			auto up = m[idn].begin();
			while (up != m[idn].end())
			{
				auto tmp = up;
				tmp++;
				while (tmp != m[idn].end() && *tmp == *up)
				{
					tmp = m[idn].erase(tmp);
				}
				up = tmp;
			}
		}
		pc--;
	}

	return 0;
}
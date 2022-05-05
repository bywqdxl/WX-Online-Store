#include<iostream>
#include<cstring>
#include<windows.h>
using namespace std;
string psr, acii;
int acnum = 3, id, nuqizhi = 0, blknum = 3;
double moneyr;
void pcsb(int n)
{
	cout << "爬出四班！" << endl;
	exit(0);
}
struct WX
{
	int UID;
	string scn;
	string pas;
	double money;
	string chase[10];
};
struct books
{
	int IDb;
	string title;
	double priice;
};
WX ac[10] = { {1000,"wxwx","wxwxwx",1000},{1001,"GZYSB","ZCLZS",1000} };
bool log(int m)
{
	int c = 3;
	string psi;
	for (int i = 1; i <= 1000; i++)
	{
		if (c == 0)
		{
			pcsb(0);
		}
		cin >> psi;
		if (psi == psr)
		{
			cout << "PASS" << endl;
			return true;
		}
		else
		{
			cout << "FALSE" << endl;
			c--;
			cout << c << "chances left" << endl;
		}
	}
}
int main()
{
	int w = 0;
	cout << "欢迎来到WX ONLINE STORE，请输入你的用户名" << endl;
	for (int i = 1; i <= 100; i++)
	{
		if (w == 1)
		{
			break;
		}
		if (nuqizhi == 4)
		{
			pcsb(0);
		}
		cin >> acii;
		for (int m = 0; m < acnum; m++)
		{
			if (acii == ac[m].scn)
			{
				psr = ac[m].pas;
				moneyr = ac[m].money;
				id = ac[m].UID;
				w = 1;
				cout << "查找到你的账户，请输入密码" << endl;
				break;
			}
		}
		if (w != 1)
		{
			cout << "错误，没有找到你的账户" << endl;
			nuqizhi++;
			cout << "怒气值：" << nuqizhi << endl;
		}
	}
	if (log(0))
	{
		cout << "PASS" << endl;
	}
	return 0;
}

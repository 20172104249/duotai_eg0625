// duotai_eg0625.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	virtual void display()
	{
		cout << "基类" << endl;
	}
};
class CDervid :public CBase
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "派生类" << endl;
	}
};

int main()
{
	CBase *p;
	CDervid *q;
	CBase obj1;
	CDervid obj2;
	p = &obj1;
	q = &obj2;
	obj1.display();
	obj2.CBase::display();
	obj2.display();
	p->display();
	q->CBase::display();
	q->display();
	return 0;
}


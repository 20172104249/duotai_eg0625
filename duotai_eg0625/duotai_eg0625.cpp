// duotai_eg0625.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
public:
	virtual void display()
	{
		cout << "����" << endl;
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
		cout << "������" << endl;
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


// ���ƿռ�Ķ����ʹ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using std::cout;
using std::endl;
namespace welcome{
	int count=3;
	float getCount(){
		return 3.33f;
	}
}
using namespace welcome;
namespace hello{
	int count=4;
		float getCount(){
			return 4.44f;
		}
}
float getCount(){
	return 1.11f;
}
int main()
{
	int count=1;
	cout<<"ֱ�ӵ���getCount�ĺ�����ʹ��count"<<endl;
	//cout<<"getCount:"<<getCount()<<endl;
	cout<<"count:"<<count<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"ʹ�ñ�ʶ������getCount������ʹ��count"<<endl;
	cout<<"::getCount:"<<::getCount()<<endl;
	cout<<"count:"<<::count<<endl;
	cout<<"welcome::getCount:"<<welcome::getCount()<<endl;
	cout<<"welcome::count:"<<welcome::count<<endl;
	cout<<"::getCount:"<<hello::getCount()<<endl;
	cout<<"hello::count"<<hello::count<<endl;
	return 0;
}


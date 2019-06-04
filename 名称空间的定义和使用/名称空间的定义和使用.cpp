// 名称空间的定义和使用.cpp : 定义控制台应用程序的入口点。
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
	cout<<"直接调用getCount的函数和使用count"<<endl;
	//cout<<"getCount:"<<getCount()<<endl;
	cout<<"count:"<<count<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"使用标识符调用getCount函数和使用count"<<endl;
	cout<<"::getCount:"<<::getCount()<<endl;
	cout<<"count:"<<::count<<endl;
	cout<<"welcome::getCount:"<<welcome::getCount()<<endl;
	cout<<"welcome::count:"<<welcome::count<<endl;
	cout<<"::getCount:"<<hello::getCount()<<endl;
	cout<<"hello::count"<<hello::count<<endl;
	return 0;
}


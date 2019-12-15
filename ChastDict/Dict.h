#pragma once
#include <string>
#include <map>
#include <msclr\marshal_cppstd.h>

using namespace System::IO;
using namespace std;
using namespace System;
class Dict
{
private:
	map<string, int> mp;
	string text;
	// ���������� ���� �� ������
	void words();
	//������� �� ����� �� ��������
	void dirctFromFile();
	//���������� ������� � ����
	void WriteToFile();

public:
	//��������� ����� �� ����� �� ���������� ����
	void read(String^ path);
	//��������� ����� �� ����� �� ���������� ����(���� � ����� ����� �������)
	void readFromFile(String^ path);
	//���������� �������
	String^ getMap();
	//����� ����� � �������
	int findWord(String^ word);
};


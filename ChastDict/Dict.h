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
	// считывание слов из текста
	void words();
	//Словарь из файла со словарем
	void dirctFromFile();
	//записывает словарь в файл
	void WriteToFile();

public:
	//считывает текст из файла по указанному пути
	void read(String^ path);
	//считывает текст из файла по указанному пути(если в файле лежит словарь)
	void readFromFile(String^ path);
	//Возвращает словарь
	String^ getMap();
	//Поиск слова в словаре
	int findWord(String^ word);
};


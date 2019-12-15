#include "Dict.h"

void Dict::words()
{
	bool flag = true;
	string word = "";
	map<string, int>::iterator it;
	for (int i = 0; i < text.length(); i++) 
	{
		if (text[i] != ' ')
			word += text[i];
		it = mp.find(word);
		if (it == mp.end() && text[i] == ' ')
		{
			mp[word] = 1;
			word = "";
		}
		else if (it != mp.end() && text[i] == ' ') 
		{
			mp[word]++;
			word = "";
		}
	}

}

void Dict::dirctFromFile()
{
	string word = "";
	string number = "";
	bool flag = true;
	map<string, int>::iterator it;
	for (int i = 0; i < text.length(); i++) 
	{
		if (text[i] != ' ' && flag)
			word += text[i];
		if (text[i] == ' ')
			flag = !flag;
		if (text[i] != '\n' && !flag)
			number += text[i];

		it = mp.find(word);
		if (text[i] == '\n' && it == mp.end())
		{
			mp[word] = int::Parse(gcnew String(number.c_str()));
			word = "";
			number = "";
			flag = true;
		}
		else if (text[i] == '\n' && it != mp.end()) 
		{
			mp[word]++;
			word = "";
			number = "";
			flag = true;
		}

	}


}

void Dict::read(String^ path)
{
	mp.clear();
	StreamReader^ sr = gcnew StreamReader(path,System::Text::Encoding::Default);
	this->text = msclr::interop::marshal_as<std::string>(sr->ReadToEnd());
	words();
	WriteToFile();
	sr->Close();
}

void Dict::readFromFile(String^ path)
{
	mp.clear();
	StreamReader^ sr = gcnew StreamReader(path, System::Text::Encoding::Default);
	this->text = msclr::interop::marshal_as<std::string>(sr->ReadToEnd());
	dirctFromFile();
	sr->Close();
}

String^ Dict::getMap()
{
	String^ str = "";
	map<string, int>::iterator it = mp.begin();
	while (it != mp.end()) 
	{
		str += gcnew String(it->first.c_str()) + " " + it->second.ToString() + "\r\n";
		it++;
	}
	return str;
}

int Dict::findWord(String^ word)
{
	string wordstr = msclr::interop::marshal_as<std::string>(word);
	word = "";
	map<string, int>::iterator it;
	it = mp.find(wordstr);
	if (it != mp.end())
		return it->second;
	else if (it == mp.end())
		return -1;
}

void Dict::WriteToFile()
{
	StreamWriter^ sw = gcnew StreamWriter("C:\\Users\\Dict.txt",false,System::Text::Encoding::Default);
	sw->Write(getMap());
	sw->Close();
}



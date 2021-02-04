#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <iterator>

class CoDec
{
private:
	std::vector<char> parola;
	std::vector<char> codedParola;
	std::vector<char> decodedParola;
	std::vector<int> key;
	int x, y;

public:
	CoDec();

	void inputParola(std::string par);
	void genKey();
	void codifica();
	void decodifica();
	
	std::string getDecodedParola();
	std::string getCodedParola();
	std::string getParola();
	std::string getKey();
};


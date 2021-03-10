//comment test
#include "codifica.h"

CoDec::CoDec() {
	x = y = 0;
}

void CoDec::inputParola(std::string par) {
	parola.assign(par.begin(), par.end());
}

void CoDec::genKey() {
	int parolaS = CoDec::parola.size();
	int s, x, y;

	x = y = 1;
	while (1) {
		s = x * y;
		if (parolaS <= s) break;

		if (x > y)
			y++;
		else if (x < y)
			x++;
		else
			y++;
	}

	this->x = x;
	this->y = y;
}

void CoDec::codifica() {
	std::vector<std::vector<char>> matrix(x, std::vector<char>(y));

	int a = 0, c = 0;
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			if (c != parola.size()) {
				matrix[i][j] = parola[c];
				c++;
				//std::cout << matrix[i][j] << " "; //debug
			}
			else break;
		}
		//std::cout << std::endl; //debug
	}

	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			codedParola.push_back(matrix[i][j]);
		}
	}

}

void CoDec::decodifica() {
	std::vector<std::vector<char>> matrix(x, std::vector<char>(y));

	int a = 0, c = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (c != codedParola.size()) {
				matrix[i][j] = codedParola[c];
				c++;
				//std::cout << matrix[i][j] << " "; //debug
			}
			else break;
		}
		//std::cout << std::endl; //debug
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			decodedParola.push_back(matrix[j][i]);
		}
	}
}

std::string CoDec::getKey() {
	std::string key = std::to_string(x) + " " + std::to_string(y);
	return key;
}

std::string CoDec::getParola() {
	//std::copy(parola.begin(), parola.end(), std::ostream_iterator<char>(std::cout, "")); 
	std::string str(parola.begin(), parola.end());
	return str;
}

std::string CoDec::getCodedParola() {
	//std::copy(codedParola.begin(), codedParola.end(), std::ostream_iterator<char>(std::cout, "")); 
	std::string str(codedParola.begin(), codedParola.end());
	return str;
}

std::string CoDec::getDecodedParola() {
	//std::copy(decodedParola.begin(), decodedParola.end(), std::ostream_iterator<char>(std::cout, ""));
	std::string str(decodedParola.begin(), decodedParola.end());
	return str;
}
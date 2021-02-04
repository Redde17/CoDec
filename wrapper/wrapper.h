#pragma once
#include "../Coding/codifica.h"
namespace wrp {
	public ref class wrapper{
		CoDec* w_CoDec;
	public:
		wrapper();
		~wrapper();
		!wrapper();

		//void inputParola(std::string par);
		void WRPinputParola(System::String^ Ipar);
		void genKey();
		void codifica();
		void decodifica();

		System::String^ WRPgetKey();
		System::String^ WRPgetParola();
		System::String^ WRPgetCodedParola();
		System::String^ WRPgetDecodedParola();

		//std::string getDecodedParola();
		//std::string getCodedParola();
		//std::string getParola();
		//void getKey();
	};
}


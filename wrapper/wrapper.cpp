#include "wrapper.h"
#include <msclr\marshal_cppstd.h>
#include <string>

wrp::wrapper::wrapper() {
	wrp::wrapper::w_CoDec = new CoDec();
}

wrp::wrapper::~wrapper() {
	this->wrp::wrapper::!wrapper();
}

wrp::wrapper::!wrapper() {
	delete wrp::wrapper::w_CoDec;
}



void wrp::wrapper::WRPinputParola(System::String^ Ipar) {
	std::string Opar = msclr::interop::marshal_as<std::string>(Ipar);
	wrp::wrapper::w_CoDec->CoDec::inputParola(Opar);
}

void wrp::wrapper::genKey() {
	wrp::wrapper::w_CoDec->CoDec::genKey();
}

void wrp::wrapper::codifica() {
	wrp::wrapper::w_CoDec->CoDec::codifica();
}

void wrp::wrapper::decodifica() {
	wrp::wrapper::w_CoDec->CoDec::decodifica();
}


System::String^ wrp::wrapper::WRPgetDecodedParola() {
	//std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getDecodedParola();
	//System::String^ Opar = gcnew System::String(Ipar.c_str());

	std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getDecodedParola();
	System::String^ Opar = msclr::interop::marshal_as<System::String^>(Ipar);
	return Opar;
}

System::String^ wrp::wrapper::WRPgetCodedParola() {
	//std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getCodedParola();
	//System::String^ Opar = gcnew System::String(Ipar.c_str());

	std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getCodedParola();
	System::String^ Opar = msclr::interop::marshal_as<System::String^>(Ipar);
	return Opar;
}

System::String^ wrp::wrapper::WRPgetParola() {
	//std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getParola();
	//System::String^ Opar = gcnew System::String(Ipar.c_str());

	std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getParola();
	System::String^ Opar = msclr::interop::marshal_as<System::String^>(Ipar);
	return Opar;
}

System::String^ wrp::wrapper::WRPgetKey() {
	//std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getKey();
	//System::String^ Opar = gcnew System::String(Ipar.c_str());

	std::string Ipar = wrp::wrapper::w_CoDec->CoDec::getKey();
	System::String^ Opar = msclr::interop::marshal_as<System::String^>(Ipar);
	return Opar;
}

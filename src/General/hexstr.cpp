#include "../headers/hexstr.hpp"

opencpr::Hexstr::Hexstr(std::string arg){
	std::stringstream ss;
	for (int i = 0; i < arg.length(); ++i){
		ss<<std::setbase(16)<<static_cast<unsigned>(arg[i]);
	}
	this->formatted = ss.str();
}


#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
namespace opencpr{
	class Hexstr{

		public:
			std::string formatted;
			
			Hexstr(std::string arg);
			~Hexstr(){}

		std::string decode();
		
		friend std::ostream& operator<<(std::ostream& out,Hexstr arg){
			out<<arg.formatted;
			return out;
		}

	};


}

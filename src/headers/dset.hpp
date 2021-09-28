#include <list>
#include <ranges>
#include <initializer_list>
#include <iostream>
#include <algorithm>

namespace ranges = std::ranges;

namespace opencpr{
	template<typename T>
	class DSet{
		public:
			std::list<T> datac;


			DSet(std::list<T> arg);
			DSet(std::initializer_list<T> arg);
			// 
			DSet(auto ...arg){
				((this->datac.push_back(arg)),...);
			}
			//
			friend std::ostream& operator<<(std::ostream& out,DSet<T> arg){
				std::cout<<"[";
				ranges::for_each(arg.datac,[](T num){std::cout<<num<<", ";});
				std::cout<<"\b\b]"<<std::endl;
				return out;
			}
			// multiply content in vector with * operator
			DSet<T> operator*(T arg){
				std::for_each_n(this->datac.begin(),this->datac.size(),[=](auto& n){ n *= arg; });
				return *this;
			}
			// standard deviation
			double stdev();

	};

}

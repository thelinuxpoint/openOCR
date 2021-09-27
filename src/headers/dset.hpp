#include <list>
#include <ranges>
#include <initializer_list>
#include <iostream>

namespace opencpr{
	template<typename T>
	class DSet{
		public:
			std::list<T> datac;

			DSet(std::list<T>);
			DSet(std::initializer_list<T>);
			friend std::ostream operator <<(std::ostream,DSet<T> arg);
	};


}

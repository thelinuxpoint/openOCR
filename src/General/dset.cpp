#include <algorithm>
#include <list>
#include <ranges>
#include <initializer_list>
#include <iostream>
/*@Our imports goes below*/
#include "../headers/dset.hpp"

template <typename T>
opencpr::DSet<T>::DSet(std::list<T> arg){
	this->datac(arg);
}
template <typename T>
opencpr::DSet<T>::DSet(std::initializer_list<T> arg):datac(arg){

}
template <typename T>
double opencpr::DSet<T>::stdev(){
	
}

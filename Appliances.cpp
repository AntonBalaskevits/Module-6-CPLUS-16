#include "Appliances.h"
#include <iostream>

Appliances::Appliances(std::string type, std::string colour, int watts) : _type(type), _colour(colour), _watts(watts)
{
}
Appliances::Appliances(int watts) : _watts(watts)
{
}
void Appliances::DisplayItem()
{
}
void Appliances::ShowSpecs()
{
}

Kettle::Kettle(std::string type, std::string colour, int watts, double volume) : Appliances(type, colour, watts), _volume(volume)
{
}
void Kettle::DisplayItem()
{
	std::cout << "\nItem type   : " << _type << std::endl;
	std::cout << "Item Colour : " << _colour << std::endl;
}
void Kettle::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Power usage : " << _watts << "W" << std::endl;
	std::cout << "Volume      : " << _volume << "litre" << std::endl;
}

Microwave::Microwave(std::string type, std::string colour, int watts, int capacity) : Appliances(type, colour, watts), _capacity(capacity)
{
}
void Microwave::DisplayItem()
{
	std::cout << "\nItem type   : " << _type << std::endl;
	std::cout << "Item colour : " << _colour << std::endl;
}
void Microwave::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Power usage : " << _watts << "W" << std::endl;
	std::cout << "Capacity    : " << _capacity << " litres " << std::endl;
}

Toaster::Toaster(std::string type, std::string colour, int watts, short numOfSlices) : Appliances(type, colour, watts), _numOfSlices(numOfSlices)
{
}
void Toaster::DisplayItem()
{
	std::cout << "\nItem type   : " << _type << std::endl;
	std::cout << "Item colour : " << _colour << std::endl;
}
void Toaster::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Power usage      : " << _watts << "W" << std::endl;
	std::cout << "Number of Slices : " << _numOfSlices << " slices " << std::endl;
}
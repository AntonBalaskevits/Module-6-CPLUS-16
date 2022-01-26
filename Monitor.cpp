#include "Monitor.h"

// this class is inherits from bought (DIY and Appliances classes)
Monitor::Monitor(std::string type, std::string colour, int volts, int watts, short refreshRate) : _type(type), _colour(colour), DIY(volts), Appliances(watts), _refreshRate(refreshRate)
{
}
void Monitor::DisplayItem()
{
	std::cout << "Item type   : " << _type << std::endl;
	std::cout << "Item colour : " << _colour << std::endl;
}
void Monitor::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Voltage      : " << _volts << "v" << std::endl;
	std::cout << "Power usage  : " << _watts << "W" << std::endl;
	std::cout << "Refresh Rate : " << _refreshRate << "Hz" << std::endl;
}
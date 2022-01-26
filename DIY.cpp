#include "DIY.h"
#include <iostream>

DIY::DIY(std::string type, std::string colour, int volts) : _type(type), _colour(colour), _volts(volts)
{
}
DIY::DIY(int volts) : _volts(volts)
{
}
void DIY::DisplayItem()
{
}
void DIY::ShowSpecs()
{
}

Drill::Drill(std::string type, std::string colour, int volts, int RPM) : DIY(type, colour, volts), _RPM(RPM)
{
}
void Drill::DisplayItem()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Item type   : " << _type << std::endl;
	std::cout << "Item Colour : " << _colour << std::endl;
}
void Drill::ShowSpecs()
{
	std::cout << "\nVoltage        : " << _volts << "v" << std::endl;
	std::cout << "Rotation speed : " << _RPM << "RPM" << std::endl;
}

JigSaw::JigSaw(std::string type, std::string colour, int volts, short cableLenght) : DIY(type, colour, volts), _cableLenght(cableLenght)
{
}
void JigSaw::DisplayItem()
{
	std::cout << "\nItem type   : " << _type << std::endl;
	std::cout << "Item Colour : " << _colour << std::endl;
}
void JigSaw::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Voltage      : " << _volts << "v" << std::endl;
	std::cout << "Cable Lenght : " << _cableLenght << "m" << std::endl;
}

Sander::Sander(std::string type, std::string colour, int volts, int weight) : DIY(type, colour, volts), _weight(weight)
{
}
void Sander::DisplayItem()
{
	std::cout << "\nItem type   : " << _type << std::endl;
	std::cout << "Item Colour : " << _colour << std::endl;
}
void Sander::ShowSpecs()
{
	std::cout << "\nItem Specifications. " << std::endl;
	std::cout << "Voltage     : " << _volts << "v" << std::endl;
	std::cout << "Item weight : " << _weight << "kg" << std::endl;
}
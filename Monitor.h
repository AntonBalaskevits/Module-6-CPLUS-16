#pragma once
#include <iostream>
#include <string>
#include "DIY.h"
#include "Appliances.h"

class Monitor final : public DIY, Appliances // class that inherits from bought DIY and Appliances
{
public:
	Monitor(std::string type, std::string colour, int volts, int watts, short refreshRate);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	std::string _type;
	std::string _colour;
	short _refreshRate;
};


#pragma once
#include "IElectronics.h"
#include <string>

class Appliances : virtual public IElectronics
{
public:
	Appliances(std::string type,std::string colour, int watts);
	Appliances(int watts);
	void DisplayItem() override;
	void ShowSpecs() override;
protected:
	std::string _type;
	std::string _colour;
	int _watts;
};

class Kettle final : public Appliances
{
public:
	Kettle(std::string type,std::string colour, int watts, double volume);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	double _volume;
};

class Microwave final : public Appliances
{
public:
	Microwave(std::string type, std::string colour, int watts, int capacity);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	int _capacity;
};

class Toaster final : public Appliances
{
public:
	Toaster(std::string type, std::string colour, int watts, short numOfSlices);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	short _numOfSlices;

};
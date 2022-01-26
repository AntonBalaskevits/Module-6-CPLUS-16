#pragma once
#include "IElectronics.h"
#include <string>

class DIY : virtual public IElectronics
{
public:
	DIY(std::string type, std::string colour, int volts);
	DIY(int volts);
	void DisplayItem() override;
	void ShowSpecs() override;
protected:
	std::string _type;
	std::string _colour; 
	int _volts;
};

class Drill final : public DIY
{
public:
	Drill(std::string type, std::string colour, int volts, int RPM);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	int _RPM;
};

class JigSaw final : public DIY
{
public:
	JigSaw(std::string type, std::string colour, int volts, short cableLenght);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	short _cableLenght;
};

class Sander final : public DIY
{
public:
	Sander(std::string type, std::string colour, int volts, int weight);
	void DisplayItem() override;
	void ShowSpecs() override;
private:
	int _weight;
};
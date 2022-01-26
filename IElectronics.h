#pragma once

class IElectronics // abstract class
{
public:
	virtual void DisplayItem() = 0;
	virtual void ShowSpecs() = 0;
	virtual ~IElectronics() = default;
};


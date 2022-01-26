#include "Appliances.h"
#include "DIY.h"
#include "Monitor.h"
#include <iostream>
#include <string>

int main()
{
	bool open = true;
	int choice;
	
	IElectronics* appliances[7]; // main array of items availible

	appliances[0] = new Kettle(std::string("Kettle"), std::string("Black"), 2000, 1.9); // basic description of objects and their specs
	appliances[1] = new Microwave(std::string("Microwave"), std::string("White"), 1100, 24);
	appliances[2] = new Toaster(std::string("Toaster"), std::string("Red"), 600, 2);
	appliances[3] = new Drill(std::string("Drill"), std::string("Green"), 220, 3800);
	appliances[4] = new JigSaw(std::string("JigSaw"), std::string("Orange"), 220, 3);
	appliances[5] = new Sander(std::string("Sander"), std::string("Yellow"), 230, 2);
	appliances[6] = new Monitor(std::string("Monitor"), std::string("Grey"), 220, 800, 75);

	std::cout << "         *Welcome To IElectronics!* " << std::endl; // welcoming message

	while (open)
	{
		std::cout << "\nEnter 1 to check Kettle." << std::endl;
		std::cout << "Enter 2 to check Microwave." << std::endl;
		std::cout << "Enter 3 to check Toaster." << std::endl;
		std::cout << "Enter 4 to check Drill." << std::endl;
		std::cout << "Enter 5 to check JigSaw." << std::endl;
		std::cout << "Enter 6 to check Sander." << std::endl;
		std::cout << "Enter 7 to check Monitor." << std::endl;
		std::cout << "Or 0 to quit." << std::endl;
		std::cout << "\nEnter your choice here: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			appliances[0]->DisplayItem();
			appliances[0]->ShowSpecs();
			break;

		case 2:
			appliances[1]->DisplayItem();
			appliances[1]->ShowSpecs();
			break;

		case 3:
			appliances[2]->DisplayItem();
			appliances[2]->ShowSpecs();
			break;

		case 4:
			appliances[3]->DisplayItem();
			appliances[3]->ShowSpecs();
			break;

		case 5:
			appliances[4]->DisplayItem();
			appliances[4]->ShowSpecs();
			break;

		case 6:
			appliances[5]->DisplayItem();
			appliances[5]->ShowSpecs();
			break;

		case 7:
			appliances[6]->DisplayItem();
			appliances[6]->ShowSpecs();
			break;

		case 0:
			open = false;
			break;

		default:
			std::cout << "You Entered invalid number. Please try Again." << std::endl;
			std::cout << "Remember the input number should be between 0 - 7 :) " << std::endl;
			break;
		}
	}

	std::cout << "\nThanks for checking out IElectronics. See U next time:) " << std::endl;

	delete appliances[0];
	delete appliances[1];
	delete appliances[2];
	delete appliances[3];
	delete appliances[4];
	delete appliances[5];
	delete appliances[6];

	return 0;
}
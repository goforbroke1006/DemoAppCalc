#include "ScreenController.h"

#include <cstdlib>
#include <string>
#include <iostream>

ScreenController::ScreenController()
{
	mScreen = nullptr;
}

void ScreenController::setActiveScreen(AbstractScreen* bs)
{
	mScreen = bs;
}

bool ScreenController::showScreen()
{
	system("cls");
	mScreen->showOptions();

	std::cout << mLastResponse << std::endl;

	AbstractScreen* nextScreen = nullptr;
	std::string response;

	mScreen->waitInputAndProcess(this, nextScreen, response);
	
	mScreen = nextScreen;
	mLastResponse = response;
	
	return (nextScreen != nullptr);
}

History& const ScreenController::getHistory() const
{
	return const_cast<History & const>(mHistory);
}

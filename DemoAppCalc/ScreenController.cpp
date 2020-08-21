#include "ScreenController.h"

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
	mScreen->showOptions();
	mScreen = mScreen->waitInputAndProcess();
	return (mScreen != nullptr);
}

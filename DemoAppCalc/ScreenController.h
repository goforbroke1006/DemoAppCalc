#pragma once

#include "AbstractScreen.h"

class ScreenController
{
public:
	ScreenController();
	void setActiveScreen(AbstractScreen* bs);
	bool showScreen();
private:
	AbstractScreen* mScreen;
};


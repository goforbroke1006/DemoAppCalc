#pragma once

#include "AbstractController.h"
#include "AbstractScreen.h"
#include "History.h"

class ScreenController : public AbstractController
{
public:
	ScreenController();
	void setActiveScreen(AbstractScreen* bs);
	bool showScreen();

	History& const getHistory() const;
private:
	AbstractScreen* mScreen;
	std::string mLastResponse;
	History mHistory;
};


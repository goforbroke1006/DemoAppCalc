#pragma once

#include <memory>

#include "AbstractController.h"
#include "AbstractScreen.h"
#include "History.h"

class ScreenController : public AbstractController
{
public:
	ScreenController();
	void setActiveScreen(const std::shared_ptr<AbstractScreen>& bs);
	bool showScreen();

	History* getHistory() const override;
private:
	AbstractScreen* mScreen;
	std::string mLastResponse;
	std::unique_ptr<History> mHistory;
};


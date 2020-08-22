#pragma once

#include <iostream>
#include <map>
#include <functional>

#include "AbstractController.h"
#include "AbstractScreen.h"
#include "ScreenOption.h"

class BaseScreen : public AbstractScreen
{
public:
	void setParent(AbstractScreen* parent);

	void showOptions();

	void waitInputAndProcess(const AbstractController *ctrl, AbstractScreen*& nextScreen, std::string &response);

protected:
	AbstractScreen* mParent;
	std::map<int, ScreenOption> mOptions;
};


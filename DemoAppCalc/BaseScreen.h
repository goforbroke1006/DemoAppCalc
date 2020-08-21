#pragma once

#include <iostream>
#include <map>
#include <functional>

#include "AbstractScreen.h"
#include "ScreenOption.h"

class BaseScreen : public AbstractScreen
{
public:
	void setParent(AbstractScreen* parent);

	void showOptions();

	AbstractScreen* waitInputAndProcess();

	//static bool optionEnterChild(BaseScreen* parent, BaseScreen* child);

	//static bool optionBack();

protected:
	AbstractScreen* mParent;
	std::map<int, ScreenOption> mOptions;
};


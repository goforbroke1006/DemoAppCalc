#pragma once

#include "AbstractController.h"

class AbstractScreen
{
public:
	AbstractScreen() {}

	virtual void setParent(AbstractScreen* parent) = 0;

	virtual void showOptions() = 0;

	virtual void waitInputAndProcess(const AbstractController* ctrl, AbstractScreen*& nextScreen, std::string& response) = 0;
};


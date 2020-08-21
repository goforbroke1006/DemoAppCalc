#pragma once

#include <string>
#include <functional>

#include "AbstractScreen.h"

class ScreenOption
{
public:
	ScreenOption(const std::string& name, std::function<AbstractScreen* ()> action);
	std::string GetName() const;
	std::function<AbstractScreen* ()> GetAction();

private:
	std::string mName;
	std::function<AbstractScreen* ()> mAction;
};


#pragma once

#include <string>
#include <functional>

#include "AbstractScreen.h"
#include "types.h"

class ScreenOption
{
public:
	ScreenOption(const std::string& name, std::function<OptionActionType> action);
	std::string GetName() const;
	std::function<OptionActionType> GetAction();

private:
	std::string mName;
	std::function<OptionActionType> mAction;
};


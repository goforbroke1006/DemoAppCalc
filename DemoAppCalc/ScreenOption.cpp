#include "ScreenOption.h"

ScreenOption::ScreenOption(const std::string& name, std::function<OptionActionType> action) :
	mName(name),
	mAction(action) {}

std::string ScreenOption::GetName() const {
	return mName;
}

std::function<OptionActionType> ScreenOption::GetAction() {
	return mAction;
}

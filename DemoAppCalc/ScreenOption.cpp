#include "ScreenOption.h"

ScreenOption::ScreenOption(const std::string& name, std::function<AbstractScreen* ()> action) :
	mName(name),
	mAction(action) {}

std::string ScreenOption::GetName() const {
	return mName;
}

std::function<AbstractScreen* ()> ScreenOption::GetAction() {
	return mAction;
}

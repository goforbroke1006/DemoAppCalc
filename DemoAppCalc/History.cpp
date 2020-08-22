#include "History.h"

void History::clear()
{
	mExprs.clear();
}

void History::append(const std::string& expression)
{
	mExprs.push_back(expression);
}

std::string History::asString(const std::string& delimiter) const
{
	std::string result;
	for (auto el : mExprs) {
		result += el + delimiter;
	}
	return result;
}

#pragma once

#include <string>
#include <list>

class History
{
public:
	void clear();
	void append(const std::string& expression);
	std::string asString(const std::string& delimiter) const;

private:
	std::list<std::string> mExprs;
};


#pragma once
class AbstractScreen
{
public:
	AbstractScreen() {}

	virtual void setParent(AbstractScreen* parent) = 0;

	virtual void showOptions() = 0;

	virtual AbstractScreen* waitInputAndProcess() = 0;
};


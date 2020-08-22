#pragma once

#include "History.h"

class AbstractController {
public:
	virtual History& const getHistory() const = 0;
};
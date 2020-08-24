#pragma once

#include "History.h"

class AbstractController {
public:
    virtual History *getHistory() const = 0;
};
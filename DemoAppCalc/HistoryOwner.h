#pragma once

#include "History.h"

class HistoryOwner {
public:
    virtual History *getHistory() const = 0;
};
#pragma once

#include <memory>

class AbstractScreen {
public:
    virtual void setParent(AbstractScreen *parent) = 0;
};


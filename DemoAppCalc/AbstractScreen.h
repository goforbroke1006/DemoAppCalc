#pragma once

#include <memory>
#include "AbstractController.h"

class AbstractScreen {
public:
    virtual void setParent(AbstractScreen* parent) = 0;

    virtual void showOptions() = 0;

    virtual void waitInputAndProcess(
            const AbstractController *ctrl,
            AbstractScreen *&nextScreen,
            std::string &response
    ) = 0;
};


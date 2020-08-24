#pragma once

#include <iostream>
#include <map>
#include <functional>

#include "AbstractScreen.h"
#include "ScreenOption.h"
#include "HistoryOwner.h"

class BaseScreen : public AbstractScreen {
public:
    void setParent(AbstractScreen *parent) override;

    std::map<int, ScreenOption> getOptions();

protected:
    AbstractScreen *mParent;
    std::map<int, ScreenOption> mOptions;
};


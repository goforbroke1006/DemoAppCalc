#pragma once

#include <memory>

#include "AbstractScreen.h"
#include "History.h"
#include "HistoryOwner.h"

class Router :
        public HistoryOwner {
public:
    Router();

    void setActiveScreen(const std::shared_ptr<AbstractScreen> &bs);

    bool showScreen();

    History *getHistory() const override;

private:
    AbstractScreen *mScreen;
    std::string mLastResponse;
    std::unique_ptr<History> mHistory;
};


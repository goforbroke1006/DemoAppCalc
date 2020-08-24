#include "ScreenController.h"

#include <cstdlib>
#include <memory>
#include <string>
#include <iostream>

ScreenController::ScreenController() {
    mScreen = nullptr;
    mHistory = std::make_unique<History>();
}

void ScreenController::setActiveScreen(const std::shared_ptr<AbstractScreen> &bs) {
    mScreen = bs.get();
}

bool ScreenController::showScreen() {
    system("cls");
    mScreen->showOptions();

    std::cout << mLastResponse << std::endl;

    AbstractScreen* nextScreen;
    std::string response;

    mScreen->waitInputAndProcess(this, nextScreen, response);

    mScreen = nextScreen;
    mLastResponse = response;

    return (nextScreen != nullptr);
}

History *ScreenController::getHistory() const {
    return mHistory.get();
}

#include "Router.h"
#include "BaseScreen.h"

#include <cstdlib>
#include <memory>
#include <string>
#include <iostream>

Router::Router() {
    mScreen = nullptr;
    mHistory = std::make_unique<History>();
}

void Router::setActiveScreen(const std::shared_ptr<AbstractScreen> &bs) {
    mScreen = bs.get();
}

bool Router::showScreen() {
    system("cls");

    const std::map<int, ScreenOption> &options = ((BaseScreen *) mScreen)->getOptions();

    for (auto it = options.begin(); it != options.end(); ++it) {
        std::cout << it->first << ". " << it->second.GetName() << std::endl;
    }

    std::cout << mLastResponse << std::endl;

    AbstractScreen *nextScreen;
    std::string response;

    int selectedOption = -1;
    std::cin >> selectedOption;

    if (options.find(selectedOption) == options.end()) {
        // TODO: add validation
        return true;
    }
    ScreenOption option = options.at(selectedOption);
    const std::function<OptionActionType> &action = option.GetAction();
    action(this, nextScreen, response);

    mScreen = nextScreen;
    mLastResponse = response;

    return (nextScreen != nullptr);
}

History *Router::getHistory() const {
    return mHistory.get();
}

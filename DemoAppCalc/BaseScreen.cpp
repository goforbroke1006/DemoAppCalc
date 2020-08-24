#include "BaseScreen.h"

void BaseScreen::setParent(AbstractScreen *parent) {
    mParent = parent;
}

void BaseScreen::showOptions() {
    for (auto it = mOptions.begin(); it != mOptions.end(); ++it) {
        std::cout << it->first << ". " << it->second.GetName() << std::endl;
    }
}

void BaseScreen::waitInputAndProcess(
        const AbstractController *ctrl,
        AbstractScreen *&nextScreen,
        std::string &response
) {
    int selectedOption = -1;
    std::cin >> selectedOption;

    // TODO: add validation

    ScreenOption &option = mOptions.at(selectedOption);
    const std::function<OptionActionType> &action = option.GetAction();

    action(ctrl, nextScreen, response);
}

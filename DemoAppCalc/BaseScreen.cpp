#include "BaseScreen.h"

void BaseScreen::setParent(AbstractScreen *parent) {
    mParent = parent;
}

void BaseScreen::showOptions() {
    for (auto it = mOptions.begin(); it != mOptions.end(); ++it) {
        std::cout << it->first << ". " << it->second.GetName() << std::endl;
    }
}

AbstractScreen *BaseScreen::waitInputAndProcess() {
    int selectedOption = -1;
    std::cin >> selectedOption;

    // TODO: add validation

    ScreenOption &option = mOptions.at(selectedOption);
    const std::function<AbstractScreen *()> &action = option.GetAction();
    auto nextScreen = action();

    return nextScreen;
}

//bool BaseScreen::optionEnterChild(BaseScreen* parent, BaseScreen* child) {
//	child->setParent(parent);
//	parent->getController()->setActiveScreen(child);
//	return true;
//}
//
//bool BaseScreen::optionBack()
//{
//	return false;
//}

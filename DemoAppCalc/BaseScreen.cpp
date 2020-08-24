#include "BaseScreen.h"

void BaseScreen::setParent(AbstractScreen *parent) {
    mParent = parent;
}

std::map<int, ScreenOption> BaseScreen::getOptions() {
    return mOptions;
}

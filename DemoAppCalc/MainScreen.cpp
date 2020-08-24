#include "MainScreen.h"

#include "MathActionsScreen.h"
#include "HistoryActionsScreen.h"

MainScreen::MainScreen() {

    mOptions.insert({0,
                     ScreenOption(
                             "�����\\�����",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ns = nullptr;
                                     })
                     )
                    });
    mOptions.insert({1,
                     ScreenOption(
                             "�������������� ��������",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ns = new MathActionsScreen();
                                         ns->setParent(this);
                                     })
                     )
                    });
    mOptions.insert({2,
                     ScreenOption(
                             "�������",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ns = new HistoryActionsScreen();
                                         ns->setParent(this);
                                     })
                     )
                    });

}
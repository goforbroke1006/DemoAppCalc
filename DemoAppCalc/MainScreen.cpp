#include "MainScreen.h"

#include "types.h"
#include "MathActionsScreen.h"
#include "HistoryActionsScreen.h"

MainScreen::MainScreen() {

    mOptions.insert({0,
                     ScreenOption(
                             "�����\\�����",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen* &nextScreen,
                                            std::string &response) {
                                         //
                                     })
                     )
                    });
    mOptions.insert({1,
                     ScreenOption(
                             "�������������� ��������",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen* &nextScreen,
                                            std::string &response) {
                                         nextScreen = new MathActionsScreen();
                                         nextScreen->setParent(this);
                                     })
                     )
                    });
    mOptions.insert({2,
                     ScreenOption(
                             "�������",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen* &nextScreen,
                                            std::string &response) {
                                         nextScreen = new HistoryActionsScreen();
                                         nextScreen->setParent(this);
                                     })
                     )
                    });

}
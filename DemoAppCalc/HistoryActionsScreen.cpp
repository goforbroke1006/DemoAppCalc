#include "HistoryActionsScreen.h"

#include <fstream>

#include "types.h"

HistoryActionsScreen::HistoryActionsScreen() {
    mOptions.insert({0,
                     ScreenOption(
                             "Сохранить в файл",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::ofstream out("history.txt");
                                         if (out.is_open()) {
                                             out << ctrl->getHistory()->asString("\n") << std::endl;
                                             out.close();
                                             response = "Сохранено в файл 'history.txt'";
                                         } else {
                                             response = "Ошибка сохранения";
                                         }

                                         nextScreen = this;
                                     })
                     )
                    });

    mOptions.insert({1,
                     ScreenOption(
                             "Не сохранять",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         ctrl->getHistory()->clear();

                                         nextScreen = this->mParent;
                                     })
                     )
                    });

    mOptions.insert({2,
                     ScreenOption(
                             "Вывести всю историю на экран",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         nextScreen = this;
                                         response = ctrl->getHistory()->asString("\n");
                                     })
                     )
                    });

    mOptions.insert({3,
                     ScreenOption(
                             "Назад",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         nextScreen = this->mParent;
                                     })
                     )
                    });
}

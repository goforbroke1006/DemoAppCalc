#include "HistoryActionsScreen.h"

#include <fstream>

#include "types.h"

HistoryActionsScreen::HistoryActionsScreen() {
    mOptions.insert({0,
                     ScreenOption(
                             "��������� � ����",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::ofstream out("history.txt");
                                         if (out.is_open()) {
                                             out << ctrl->getHistory()->asString("\n") << std::endl;
                                             out.close();
                                             response = "��������� � ���� 'history.txt'";
                                         } else {
                                             response = "������ ����������";
                                         }

                                         nextScreen = this;
                                     })
                     )
                    });

    mOptions.insert({1,
                     ScreenOption(
                             "�� ���������",
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
                             "������� ��� ������� �� �����",
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
                             "�����",
                             std::function<OptionActionType>(
                                     [this](const AbstractController *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         nextScreen = this->mParent;
                                     })
                     )
                    });
}

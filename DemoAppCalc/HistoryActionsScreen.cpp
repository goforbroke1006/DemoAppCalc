#include "HistoryActionsScreen.h"

#include <fstream>

HistoryActionsScreen::HistoryActionsScreen() {
    mOptions.insert({0,
                     ScreenOption(
                             "��������� � ����",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         std::ofstream out("history.txt");
                                         if (out.is_open()) {
                                             out << ctrl->getHistory()->asString("\n") << std::endl;
                                             out.close();
                                             resp = "��������� � ���� 'history.txt'";
                                         } else {
                                             resp = "������ ����������";
                                         }

                                         ns = this;
                                     })
                     )
                    });

    mOptions.insert({1,
                     ScreenOption(
                             "�� ���������",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ctrl->getHistory()->clear();

                                         ns = this->mParent;
                                     })
                     )
                    });

    mOptions.insert({2,
                     ScreenOption(
                             "������� ��� ������� �� �����",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ns = this;
                                         resp = ctrl->getHistory()->asString("\n");
                                     })
                     )
                    });

    mOptions.insert({3,
                     ScreenOption(
                             "�����",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&ns, std::string &resp) {
                                         ns = this->mParent;
                                     })
                     )
                    });
}

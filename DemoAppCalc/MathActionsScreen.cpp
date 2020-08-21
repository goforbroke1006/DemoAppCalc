#include "MathActionsScreen.h"

MathActionsScreen::MathActionsScreen() {
    auto self = this;

    mOptions.insert({0,
                     ScreenOption(
                             "���������",
                             std::function<MathActionsScreen *()>([this] {
                                 std::cout << "a * b" << std::endl;
                                 double a, b;
                                 std::cin >> a >> b;
                                 std::cout << (a * b) << std::endl;
                                 return this;
                             }))
                    });
    mOptions.insert({1,
                     ScreenOption(
                             "�������",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({2,
                     ScreenOption(
                             "��������",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({3,
                     ScreenOption(
                             "���������",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({4,
                     ScreenOption(
                             "����������� ��� ���",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             }))
                    });
    mOptions.insert({5,
                     ScreenOption(
                             "�����",
                             std::function<AbstractScreen *()>([this] {
                                 return this->mParent;
                             })
                     )
                    });
}

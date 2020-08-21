#include "MathActionsScreen.h"

MathActionsScreen::MathActionsScreen() {
    auto self = this;

    mOptions.insert({0,
                     ScreenOption(
                             "Умножение",
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
                             "Деление",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({2,
                     ScreenOption(
                             "Сложение",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({3,
                     ScreenOption(
                             "Вычитание",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             })
                     )
                    });
    mOptions.insert({4,
                     ScreenOption(
                             "Попробовать еще раз",
                             std::function<MathActionsScreen *()>([this] {
                                 return this;
                             }))
                    });
    mOptions.insert({5,
                     ScreenOption(
                             "Назад",
                             std::function<AbstractScreen *()>([this] {
                                 return this->mParent;
                             })
                     )
                    });
}

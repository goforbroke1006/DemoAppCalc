#include "MathActionsScreen.h"

#include "types.h"

MathActionsScreen::MathActionsScreen() {
    auto self = this;

    mOptions.insert({0,
                     ScreenOption(
                             "Умножение",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::cout << "a * b" << std::endl;
                                         double a, b;
                                         std::cin >> a >> b;
                                         std::cout << (a * b) << std::endl;

                                         nextScreen = this;
                                         response = std::to_string(a) + " * " + std::to_string(b) + " = " +
                                                    std::to_string(a * b);

                                         ctrl->getHistory()->append(response);
                                     }))
                    });
    mOptions.insert({1,
                     ScreenOption(
                             "Деление",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::cout << "a / b" << std::endl;
                                         double a, b;
                                         std::cin >> a >> b;
                                         std::cout << (a / b) << std::endl;

                                         nextScreen = this;
                                         response = std::to_string(a) + " / " + std::to_string(b) + " = " +
                                                    std::to_string(a / b);

                                         ctrl->getHistory()->append(response);
                                     })
                     )
                    });
    mOptions.insert({2,
                     ScreenOption(
                             "Сложение",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::cout << "a + b" << std::endl;
                                         double a, b;
                                         std::cin >> a >> b;
                                         std::cout << (a + b) << std::endl;

                                         nextScreen = this;
                                         response = std::to_string(a) + " + " + std::to_string(b) + " = " +
                                                    std::to_string(a + b);

                                         ctrl->getHistory()->append(response);
                                     })
                     )
                    });
    mOptions.insert({3,
                     ScreenOption(
                             "Вычитание",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         std::cout << "a - b" << std::endl;
                                         double a, b;
                                         std::cin >> a >> b;
                                         std::cout << (a - b) << std::endl;

                                         nextScreen = this;
                                         response = std::to_string(a) + " - " + std::to_string(b) + " = " +
                                                    std::to_string(a - b);

                                         ctrl->getHistory()->append(response);
                                     })
                     )
                    });
    mOptions.insert({4,
                     ScreenOption(
                             "Попробовать еще раз",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         nextScreen = this;
                                     }))
                    });
    mOptions.insert({5,
                     ScreenOption(
                             "Назад",
                             std::function<OptionActionType>(
                                     [this](const HistoryOwner *ctrl, AbstractScreen *&nextScreen,
                                            std::string &response) {
                                         nextScreen = this->mParent;
                                     })
                     )
                    });
}

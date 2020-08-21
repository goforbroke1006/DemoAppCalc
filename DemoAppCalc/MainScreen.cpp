#include "MainScreen.h"

#include "MathActionsScreen.h"

MainScreen::MainScreen() {

	mOptions.insert({ 0,
					 ScreenOption(
							 "Выход\\Назад",
							 std::function<AbstractScreen* ()>([this]() {
								 return nullptr;
							 })
					 )
		});
	mOptions.insert({ 1,
					 ScreenOption(
							 "Математические действия",
							 std::function<AbstractScreen* ()>([this]() {
								 auto math = new MathActionsScreen();
								 math->setParent(this);
								 return math;
							 })
					 )
		});
	mOptions.insert({ 2,
					 ScreenOption(
							 "История",
							 std::function<AbstractScreen* ()>([this] {
								 return nullptr;
							 })
					 )
		});

}
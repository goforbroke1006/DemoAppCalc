project(DemoAppCalc-DemoAppCalc)

add_executable(${PROJECT_NAME}

        main.cpp

        AbstractScreen.cpp
        AbstractScreen.h
        BaseScreen.cpp
        BaseScreen.h

        History.cpp
        History.h

        MainScreen.cpp
        MainScreen.h
        MathActionsScreen.cpp
        MathActionsScreen.h
        HistoryActionsScreen.cpp
        HistoryActionsScreen.h

        ScreenController.cpp
        ScreenController.h
        ScreenOption.cpp
        ScreenOption.h
        )
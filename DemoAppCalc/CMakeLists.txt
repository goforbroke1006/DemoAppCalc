project(DemoAppCalc-DemoAppCalc)

add_executable(${PROJECT_NAME}

        main.cpp

#        AbstractController.h
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

        Router.cpp
        Router.h
        ScreenOption.cpp
        ScreenOption.h
        )
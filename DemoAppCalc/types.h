#pragma once

#include <string>

#include "AbstractController.h"
#include "AbstractScreen.h"

#define OptionActionType void(const AbstractController*, AbstractScreen *&, std::string &)

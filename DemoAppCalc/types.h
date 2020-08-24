#pragma once

#include <string>

#include "AbstractScreen.h"
#include "HistoryOwner.h"

#define OptionActionType void(const HistoryOwner*, AbstractScreen* &, std::string &)

// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/logging/backend.h"
#include "core/frontend/applets/software_keyboard.h"

namespace Core::Frontend {
SoftwareKeyboardApplet::~SoftwareKeyboardApplet() = default;

bool DefaultSoftwareKeyboardApplet::GetText(SoftwareKeyboardParameters parameters,
                                            std::u16string& text) const {
    if (parameters.initial_text.empty())
        text = u"yuzu";
    else
        text = parameters.initial_text;

    return true;
}

} // namespace Core::Frontend

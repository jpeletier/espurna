/*

ALEXA MODULE

Copyright (C) 2016-2019 by Xose Pérez <xose dot perez at gmail dot com>

*/

#pragma once

#include "espurna.h"

#if ALEXA_SUPPORT

bool alexaEnabled();
void alexaSetup();

#endif // ALEXA_SUPPORT == 1


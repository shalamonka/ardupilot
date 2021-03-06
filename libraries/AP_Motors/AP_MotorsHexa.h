/// @file	AP_MotorsHexa.h
/// @brief	Motor control class for Hexacopters
#pragma once

#include <AP_Common/AP_Common.h>
#include <AP_Math/AP_Math.h>        // ArduPilot Mega Vector/Matrix math Library
#include <RC_Channel/RC_Channel.h>     // RC Channel Library
#include "AP_MotorsMatrix.h"    // Parent Motors Matrix library

/// @class      AP_MotorsHexa
class AP_MotorsHexa : public AP_MotorsMatrix {
public:

    /// Constructor
    AP_MotorsHexa(uint16_t loop_rate, uint16_t speed_hz = AP_MOTORS_SPEED_DEFAULT) :
        AP_MotorsMatrix(loop_rate, speed_hz)
    { };

    // setup_motors - configures the motors for a hexa
    virtual void        setup_motors();

protected:

};

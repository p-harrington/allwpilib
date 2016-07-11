/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2016. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <stdint.h>

#include "Handles.h"

extern "C" {
HAL_AnalogOutputHandle HAL_InitializeAnalogOutputPort(
    HAL_PortHandle port_handle, int32_t* status);
void HAL_FreeAnalogOutputPort(HAL_AnalogOutputHandle analog_output_handle);
void HAL_SetAnalogOutput(HAL_AnalogOutputHandle analog_output_handle,
                         double voltage, int32_t* status);
double HAL_GetAnalogOutput(HAL_AnalogOutputHandle analog_output_handle,
                           int32_t* status);
bool HAL_CheckAnalogOutputChannel(uint32_t pin);
}
/*
 * controller_config.h
 *
 *  Created on: 2022. 6. 4.
 *      Author: choeoliv
 */

#ifndef USER_INC_CONFIG_CONTROLLER_CONFIG_H_
#define USER_INC_CONFIG_CONTROLLER_CONFIG_H_

#include "cycfg.h"
#include "const_macro.h"

#define LOAD_CONFIG										RL_LOAD_DRIVE					// 1. RL_LOAD_DRIVE
																						// 2. IPMSM_DRIVE
																						// 3. SPMSM_DRIVE

#define CURRENT_SENSING									THREE_SHUNT						// 1. SINGLE_SHUNT
																						// 2. THREE_SHUNT
																						// 3. SINGLE_SENSOR
																						// 4. THREE_SENSOR

#define CONTROL_SCHEME_ANGLE							ANGLE_SENSOR_I2C				// 1. ANGLE_SENSOR_I2C
																						// 2. SENSORLESS_CONTROL

#define CONTORL_SCHEME_SVPWM							CONTINUOUS_SVPWM				// 1. CONTINUOUS_SVPWM
																						// 2. DISCONTINUOUS_SVPWM

#define CONTROL_SCHEME_CONTROL							FOC_CONTROL						// 1. FOC_CONTROL
																						// 2. V/F_CONTROL
																						// 3. I/F_CONTROL

#define CONTROL_SCHEME_STARTUP							I/F_STARTUP						// 1. DIRECT_FOC_STARTUP
																						// 2. V/F_STARTUP
																						// 3. I/F_STARTUP

#define CONTROL_SCHEME_TRANSITION						DIRECT_TRANSITION				// 1. DIRECT_TRANSITION
																						// 2. MAX_EFF_TRANSITION
																						// 3.






#endif /* USER_INC_CONFIG_CONTROLLER_CONFIG_H_ */

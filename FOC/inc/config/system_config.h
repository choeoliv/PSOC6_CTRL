/*
 * sytem_config.h
 *
 *  Created on: 2022. 6. 3.
 *      Author: choeoliv
 */

#ifndef USER_INC_SYSTEM_CONFIG_H_
#define USER_INC_SYSTEM_CONFIG_H_

#include "cycfg.h"
#include "const_macro.h"

// Set switching frequency of the TCPWM module for PWM and system loop interrupt period.
#define SYS_OPERATION_FREQ								(30000U)
#define TCPWM_PERIOD_CNT								(((PERI_SYSCLK_FREQ_MHZ / TCPWM_SYSCLK_DIV * 1000000) / SYS_OPERATION_FREQ) - 1)



#define MCU_CORE										PSOC6_M4_M0P_DUAL				// 1. PSOC6_M4_M0P_DUAL
																						// 2. PSOC5_M4_SINGLE

#define

#define DEBUG_CONFIG									PSOC6_M4_DEBUG

#if(MCU_CORE == PSOC6_M4_M0P_DUAL)

#define DEBUG_CONFIG									PSOC6_M0P_DEBUG

#endif



#endif /* USER_INC_SYSTEM_CONFIG_H_ */

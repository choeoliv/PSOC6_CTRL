/*
 * const_macro.h
 *
 *  Created on: 2022. 6. 3.
 *      Author: choeoliv
 */

#ifndef USER_INC_CONST_MACRO_H_
#define USER_INC_CONST_MACRO_H_

#include "cycfg.h"
#include "system_config.h"

//Current sensing methods
#define SINGLE_SHUNT								(1U)
#define THREE_SHUNT									(2U)
#define SINGLE_SENSOR								(3U)
#define	THREE_SENSOR								(4U)

//use angle sensor or sensorless control
#define ANGLE_SENSOR_I2C							(1U)
#define SENSORLESS_CONTROL							(2U)

//Inverter load configuration
#define RL_LOAD_DRIVE								(1U)
#define	IPMSM_DRIVE									(2U)
#define	SPMSM_DRIVE									(3U)

#define CONTINUOUS_SVPWM							(1U)
#define DISCONTINUOUS_SVPWM							(2U)

#define FOC_CONTROL									(1U)
#define V/F_CONTROL									(2U)
#define I/F_CONTROL									(3U)

#define DIRECT_FOC_STARTUP							(1U)
#define V/F_STARTUP									(2U)
#define I/F_STARTUP									(3U)

#define DIRECT_TRANSITION							(1U)
#define MAX_EFF_TRANSITION							(2U)


#define PSOC6_M4_M0P_DUAL							(1U)
#define PSOC6_M4_SINGLE								(2U)

#define PSOC6_M4_DEBUG								(1U)
#define PSOC6_M0P_DEBUG								(2U)

#define FALSE										(0U)
#define TRUE										(1U)

#define ACTIVE_HIGH                                 (0U)
#define ACTIVE_LOW                                  (1U)



//Determine system clock distribution.
#define HF0_SYSCLK_FREQ_MHZ							CY_CFG_SYSCLK_CLKHF0_FREQ_MHZ
#define PERI_SYSCLK_FREQ_MHZ						CY_CFG_SYSCLK_CLKHF0_FREQ_MHZ / (1U << CY_CFG_SYSCLK_CLKPERI_DIVIDER)
#define FAST_SYSCLK_FREQ_MHZ						CY_CFG_SYSCLK_CLKHF0_FREQ_MHZ / (1U << CY_CFG_SYSCLK_CLKFAST_DIVIDER)
#if(MCU_CORE == PSOC6_M4_M0P_DUAL)
#define SLOW_SYSCLK_FREQ_MHZ						PERI_SYSCLK_FREQ_MHZ / (1U << CY_CFG_SYSCLK_CLKSLOW_DIVIDER)
#endif

//Need to configure following macro according to user system setting in BSP and cycfg_peripherals.c and cycfg_clocks.c file
#define TCPWM_SYSCLK_DIV							(1U)




#define USER_SQRT_3_CONSTANT                        (1.7320508075f)
#define USER_PI                                     (3.1415926536f)













#endif /* USER_INC_CONST_MACRO_H_ */

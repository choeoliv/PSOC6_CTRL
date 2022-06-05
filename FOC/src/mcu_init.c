/*
 * mcu_init.c
 *
 *  Created on: 2022. 6. 3.
 *      Author: choeoliv
 */

#include "mcu_init.h"


void peripheral_init(void)
{



}

void tcpwm_init(void)
{
	Cy_TCPWM_Counter_Init(tcpwm_0_group_0_cnt_0_HW, tcpwm_0_group_0_cnt_0_NUM, &tcpwm_0_group_0_cnt_0_config);


}

void get_tcpwm_period(TCPWM_Type *base, uint32_t cntNum, cy_stc_tcpwm_counter_config_t const *config);


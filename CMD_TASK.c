/*
 * CMD_TASK.c
 *
 *  Created on: 2020年10月14日
 *      Author: Felix
 */

#include "cy_retarget_io.h"

#include "command_console.h"
#include "iperf_utility.h"
#include "bt_utility.h"

#include "CONN_WIFI.h"

/* Parameters to init Console Command */
#define MAX_LINE_LENGTH                         (128)
#define MAX_HISTORY_LENGTH                      (20)

static char line_buffer[MAX_LINE_LENGTH];
static char history_buffer_storage[MAX_LINE_LENGTH * MAX_HISTORY_LENGTH];

void command_task(void *arg)
{
    (void)arg;

    /* Connect to Wi-Fi AP */
    if(connect_to_wifi_ap() != CY_RSLT_SUCCESS )
    {
        printf("\n Failed to connect to Wi-FI AP.\n");
        CY_ASSERT(0);
    }

	cy_command_console_cfg_t my_cfg = { &cy_retarget_io_uart_obj, MAX_LINE_LENGTH, line_buffer, MAX_HISTORY_LENGTH, history_buffer_storage, " ", 5, 20 };
	cy_command_console_init(&my_cfg);

	iperf_utility_init(NULL);

	bt_utility_init();

    while(1);
}


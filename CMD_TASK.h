/*
 * CMD_TASK.h
 *
 *  Created on: 2020年10月14日
 *      Author: Felix
 */

#ifndef CMD_TASK_H_
#define CMD_TASK_H_


/* RTOS related macros. */
#define TASK_STACK_SIZE        (5 * 1024)
#define TASK_PRIORITY          (1)

void command_task(void *arg);

#endif /* CMD_TASK_H_ */

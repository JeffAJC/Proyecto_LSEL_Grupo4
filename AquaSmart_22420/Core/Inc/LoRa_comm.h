/*
 * LoRa_comm.h
 *
 *  Created on: Apr 11, 2020
 *      Author: villa
 */

#ifndef INC_LORA_COMM_H_
#define INC_LORA_COMM_H_

#include "main.h"
#include "ring_buf.h"
#include "fsm.h"



//fsm_t* LoRa_initialization(uint16_t period);
void LoRa_initialization(uint8_t init);
void send_data(void);
void receive_data(void);
void save_new_data(sensor_buf_t data);


/*DEBUG FUNCTION*/
int _write(int file, char *ptr, int len);

#endif /* INC_LORA_COMM_H_ */

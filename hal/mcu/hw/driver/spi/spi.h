/*
 * spi.h
 *
 * Created: 05/09/2019 12:25:46 AM
 *  Author: Loay Ashraf
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "spi_config.h"
#include "hal/mcu/io/io_defs.h"
#include "hal/mcu/sys/std_types.h"

typedef enum{SP_SLAVE0,SP_SLAVE1,SP_SLAVE2,SP_SLAVE3}spislave_t;
					
void spi_enable(void);
void spi_disable(void);
void spi_selectSlave(spislave_t a_spiSlave);
void spi_releaseSlave(spislave_t a_spiSlave);
void spi_transmitByte(ubyte_t a_byte);
ubyte_t spi_receiveByte(void);
ubyte_t spi_transreceive(ubyte_t a_byte);
void spi_enableInterrupt(void);
void spi_disableInterrupt(void);
void spi_setISRCallback(ISRcallback_t a_spiISRCallback);

#endif /* SPI_H_ */
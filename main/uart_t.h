#ifndef UART_H
#define UART_H
#include <stdint.h>

#define EX_UART_NUM UART_NUM_2
#define PATTERN_CHR_NUM    (3)         /*!< Set the number of consecutive and identical characters received by receiver which defines a UART pattern*/
#define BUF_SIZE (1024)
#define RD_BUF_SIZE (BUF_SIZE)

typedef void (*uart_handle_t) (uint8_t *data, uint16_t length);
void uart_init_cmd(void);
void uart_set_callback(void *cb);
void uart_put( char *dta, int len);
#endif
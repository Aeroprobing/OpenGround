#ifndef __DEBUG__H_
#define __DEBUG__H_
#include <stdint.h>

#define debug_is_initialized() (debug_init_done)

void debug_init(void);
void debug_putc(uint8_t ch);
void debug_flush(void);
void debug(uint8_t *data);
void debug_put_hex8(uint8_t val);
void debug_put_hex16(uint16_t val);
void debug_put_hex32(uint32_t val);
void debug_put_uint8(uint8_t c);
void debug_put_int8(int8_t c);
void debug_put_uint16(uint16_t c);
void debug_put_newline(void);

#endif
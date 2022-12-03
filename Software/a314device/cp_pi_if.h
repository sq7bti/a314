#include <exec/types.h>

#include "device.h"

#define CLOCK_PORT_ADDRESS	0xd80001
#define CLOCK_PORT_STRIDE	4

#define REG_SRAM	0
#define REG_IRQ		1
#define REG_ADDR_LO	2
#define REG_ADDR_HI	3

#define REG_IRQ_SET	0x80
#define REG_IRQ_CLR	0x00
#define REG_IRQ_PI	0x02
#define REG_IRQ_CP	0x01

extern void set_pi_irq(volatile UBYTE* clock_port_reg[4]);
extern void clear_cp_irq(volatile UBYTE* clock_port_reg[4]);
extern void set_cp_address(volatile UBYTE* clock_port_reg[4], USHORT address);

extern void a314base_write_mem(__reg("a6") struct A314Device *dev, __reg("d0") ULONG address, __reg("a0") UBYTE *src, __reg("d1") ULONG length);
extern void a314base_read_mem(__reg("a6") struct A314Device *dev, __reg("a0") UBYTE *dst, __reg("d0") ULONG address, __reg("d1") ULONG length);

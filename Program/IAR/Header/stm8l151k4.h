/*-------------------------------------------------------------------------
 *      STM8 definitions of SFR registers
 *
 *      Used with STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2017 IAR Systems AB.
 *
 *-----------------------------------------------------------------------*/

#ifndef __IOSTM8L151K4_H__
#define __IOSTM8L151K4_H__

#if (((__TID__ >> 8) & 0x7F) != 0x38)     /* 0x38 = 56 dec */
#error This file should only be compiled by STM8 IAR compiler and assembler
#endif

/*-------------------------------------------------------------------------
 *      I/O register macros
 *-----------------------------------------------------------------------*/

#include "io_macros.h"


#ifdef __IAR_SYSTEMS_ICC__
#pragma system_include
#pragma language=save
#pragma language=extended
#endif

/*-------------------------------------------------------------------------
 *      Option byte attribute define
 *-----------------------------------------------------------------------*/
 
#define OPTION_BYTE_ATTRIBUTES __root const volatile __ro_placement
 
/*-------------------------------------------------------------------------
 *      Option bytes register definitions
 *-----------------------------------------------------------------------*/

/*-------------------------------------------------------------------------
 *      Option bytes addresses
 *-----------------------------------------------------------------------*/
#define OPT0_ADDR        0x4800
#define OPT1_ADDR        0x4802
#define OPT3_ADDR        0x4808
#define OPT4_ADDR        0x4809
#define OPT5_ADDR        0x480a
#define OPTBL_H_ADDR     0x480b
#define OPTBL_L_ADDR     0x480c

#define OPT0_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT0        @ OPT0_ADDR
#define OPT1_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT1        @ OPT1_ADDR
#define OPT3_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT3        @ OPT3_ADDR
#define OPT4_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT4        @ OPT4_ADDR
#define OPT5_DECL        OPTION_BYTE_ATTRIBUTES unsigned char OPT5        @ OPT5_ADDR
#define OPTBL_H_DECL     OPTION_BYTE_ATTRIBUTES unsigned char OPTBL_H     @ OPTBL_H_ADDR
#define OPTBL_L_DECL     OPTION_BYTE_ATTRIBUTES unsigned char OPTBL_L     @ OPTBL_L_ADDR


/*-------------------------------------------------------------------------
 *      Port A register definitions
 *-----------------------------------------------------------------------*/
/* Port A data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PA_ODR;
#endif
__IO_REG8_BIT(PA_ODR,      0x5000, __READ_WRITE, __BITS_PA_ODR);

/* Port A input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PA_IDR;
#endif
__IO_REG8_BIT(PA_IDR,      0x5001, __READ, __BITS_PA_IDR);

/* Port A data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PA_DDR;
#endif
__IO_REG8_BIT(PA_DDR,      0x5002, __READ_WRITE, __BITS_PA_DDR);

/* Port A control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PA_CR1;
#endif
__IO_REG8_BIT(PA_CR1,      0x5003, __READ_WRITE, __BITS_PA_CR1);

/* Port A control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PA_CR2;
#endif
__IO_REG8_BIT(PA_CR2,      0x5004, __READ_WRITE, __BITS_PA_CR2);


/*-------------------------------------------------------------------------
 *      Port A bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PA_ODR_ODR0              PA_ODR_bit.ODR0
#define PA_ODR_ODR1              PA_ODR_bit.ODR1
#define PA_ODR_ODR2              PA_ODR_bit.ODR2
#define PA_ODR_ODR3              PA_ODR_bit.ODR3
#define PA_ODR_ODR4              PA_ODR_bit.ODR4
#define PA_ODR_ODR5              PA_ODR_bit.ODR5
#define PA_ODR_ODR6              PA_ODR_bit.ODR6
#define PA_ODR_ODR7              PA_ODR_bit.ODR7

#define PA_IDR_IDR0              PA_IDR_bit.IDR0
#define PA_IDR_IDR1              PA_IDR_bit.IDR1
#define PA_IDR_IDR2              PA_IDR_bit.IDR2
#define PA_IDR_IDR3              PA_IDR_bit.IDR3
#define PA_IDR_IDR4              PA_IDR_bit.IDR4
#define PA_IDR_IDR5              PA_IDR_bit.IDR5
#define PA_IDR_IDR6              PA_IDR_bit.IDR6
#define PA_IDR_IDR7              PA_IDR_bit.IDR7

#define PA_DDR_DDR0              PA_DDR_bit.DDR0
#define PA_DDR_DDR1              PA_DDR_bit.DDR1
#define PA_DDR_DDR2              PA_DDR_bit.DDR2
#define PA_DDR_DDR3              PA_DDR_bit.DDR3
#define PA_DDR_DDR4              PA_DDR_bit.DDR4
#define PA_DDR_DDR5              PA_DDR_bit.DDR5
#define PA_DDR_DDR6              PA_DDR_bit.DDR6
#define PA_DDR_DDR7              PA_DDR_bit.DDR7

#define PA_CR1_C10               PA_CR1_bit.C10
#define PA_CR1_C11               PA_CR1_bit.C11
#define PA_CR1_C12               PA_CR1_bit.C12
#define PA_CR1_C13               PA_CR1_bit.C13
#define PA_CR1_C14               PA_CR1_bit.C14
#define PA_CR1_C15               PA_CR1_bit.C15
#define PA_CR1_C16               PA_CR1_bit.C16
#define PA_CR1_C17               PA_CR1_bit.C17

#define PA_CR2_C20               PA_CR2_bit.C20
#define PA_CR2_C21               PA_CR2_bit.C21
#define PA_CR2_C22               PA_CR2_bit.C22
#define PA_CR2_C23               PA_CR2_bit.C23
#define PA_CR2_C24               PA_CR2_bit.C24
#define PA_CR2_C25               PA_CR2_bit.C25
#define PA_CR2_C26               PA_CR2_bit.C26
#define PA_CR2_C27               PA_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port A bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PA_ODR_ODR0         0x01
#define MASK_PA_ODR_ODR1         0x02
#define MASK_PA_ODR_ODR2         0x04
#define MASK_PA_ODR_ODR3         0x08
#define MASK_PA_ODR_ODR4         0x10
#define MASK_PA_ODR_ODR5         0x20
#define MASK_PA_ODR_ODR6         0x40
#define MASK_PA_ODR_ODR7         0x80

#define MASK_PA_IDR_IDR0         0x01
#define MASK_PA_IDR_IDR1         0x02
#define MASK_PA_IDR_IDR2         0x04
#define MASK_PA_IDR_IDR3         0x08
#define MASK_PA_IDR_IDR4         0x10
#define MASK_PA_IDR_IDR5         0x20
#define MASK_PA_IDR_IDR6         0x40
#define MASK_PA_IDR_IDR7         0x80

#define MASK_PA_DDR_DDR0         0x01
#define MASK_PA_DDR_DDR1         0x02
#define MASK_PA_DDR_DDR2         0x04
#define MASK_PA_DDR_DDR3         0x08
#define MASK_PA_DDR_DDR4         0x10
#define MASK_PA_DDR_DDR5         0x20
#define MASK_PA_DDR_DDR6         0x40
#define MASK_PA_DDR_DDR7         0x80

#define MASK_PA_CR1_C10          0x01
#define MASK_PA_CR1_C11          0x02
#define MASK_PA_CR1_C12          0x04
#define MASK_PA_CR1_C13          0x08
#define MASK_PA_CR1_C14          0x10
#define MASK_PA_CR1_C15          0x20
#define MASK_PA_CR1_C16          0x40
#define MASK_PA_CR1_C17          0x80

#define MASK_PA_CR2_C20          0x01
#define MASK_PA_CR2_C21          0x02
#define MASK_PA_CR2_C22          0x04
#define MASK_PA_CR2_C23          0x08
#define MASK_PA_CR2_C24          0x10
#define MASK_PA_CR2_C25          0x20
#define MASK_PA_CR2_C26          0x40
#define MASK_PA_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port B register definitions
 *-----------------------------------------------------------------------*/
/* Port B data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PB_ODR;
#endif
__IO_REG8_BIT(PB_ODR,      0x5005, __READ_WRITE, __BITS_PB_ODR);

/* Port B input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PB_IDR;
#endif
__IO_REG8_BIT(PB_IDR,      0x5006, __READ, __BITS_PB_IDR);

/* Port B data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PB_DDR;
#endif
__IO_REG8_BIT(PB_DDR,      0x5007, __READ_WRITE, __BITS_PB_DDR);

/* Port B control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PB_CR1;
#endif
__IO_REG8_BIT(PB_CR1,      0x5008, __READ_WRITE, __BITS_PB_CR1);

/* Port B control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PB_CR2;
#endif
__IO_REG8_BIT(PB_CR2,      0x5009, __READ_WRITE, __BITS_PB_CR2);


/*-------------------------------------------------------------------------
 *      Port B bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PB_ODR_ODR0              PB_ODR_bit.ODR0
#define PB_ODR_ODR1              PB_ODR_bit.ODR1
#define PB_ODR_ODR2              PB_ODR_bit.ODR2
#define PB_ODR_ODR3              PB_ODR_bit.ODR3
#define PB_ODR_ODR4              PB_ODR_bit.ODR4
#define PB_ODR_ODR5              PB_ODR_bit.ODR5
#define PB_ODR_ODR6              PB_ODR_bit.ODR6
#define PB_ODR_ODR7              PB_ODR_bit.ODR7

#define PB_IDR_IDR0              PB_IDR_bit.IDR0
#define PB_IDR_IDR1              PB_IDR_bit.IDR1
#define PB_IDR_IDR2              PB_IDR_bit.IDR2
#define PB_IDR_IDR3              PB_IDR_bit.IDR3
#define PB_IDR_IDR4              PB_IDR_bit.IDR4
#define PB_IDR_IDR5              PB_IDR_bit.IDR5
#define PB_IDR_IDR6              PB_IDR_bit.IDR6
#define PB_IDR_IDR7              PB_IDR_bit.IDR7

#define PB_DDR_DDR0              PB_DDR_bit.DDR0
#define PB_DDR_DDR1              PB_DDR_bit.DDR1
#define PB_DDR_DDR2              PB_DDR_bit.DDR2
#define PB_DDR_DDR3              PB_DDR_bit.DDR3
#define PB_DDR_DDR4              PB_DDR_bit.DDR4
#define PB_DDR_DDR5              PB_DDR_bit.DDR5
#define PB_DDR_DDR6              PB_DDR_bit.DDR6
#define PB_DDR_DDR7              PB_DDR_bit.DDR7

#define PB_CR1_C10               PB_CR1_bit.C10
#define PB_CR1_C11               PB_CR1_bit.C11
#define PB_CR1_C12               PB_CR1_bit.C12
#define PB_CR1_C13               PB_CR1_bit.C13
#define PB_CR1_C14               PB_CR1_bit.C14
#define PB_CR1_C15               PB_CR1_bit.C15
#define PB_CR1_C16               PB_CR1_bit.C16
#define PB_CR1_C17               PB_CR1_bit.C17

#define PB_CR2_C20               PB_CR2_bit.C20
#define PB_CR2_C21               PB_CR2_bit.C21
#define PB_CR2_C22               PB_CR2_bit.C22
#define PB_CR2_C23               PB_CR2_bit.C23
#define PB_CR2_C24               PB_CR2_bit.C24
#define PB_CR2_C25               PB_CR2_bit.C25
#define PB_CR2_C26               PB_CR2_bit.C26
#define PB_CR2_C27               PB_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port B bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PB_ODR_ODR0         0x01
#define MASK_PB_ODR_ODR1         0x02
#define MASK_PB_ODR_ODR2         0x04
#define MASK_PB_ODR_ODR3         0x08
#define MASK_PB_ODR_ODR4         0x10
#define MASK_PB_ODR_ODR5         0x20
#define MASK_PB_ODR_ODR6         0x40
#define MASK_PB_ODR_ODR7         0x80

#define MASK_PB_IDR_IDR0         0x01
#define MASK_PB_IDR_IDR1         0x02
#define MASK_PB_IDR_IDR2         0x04
#define MASK_PB_IDR_IDR3         0x08
#define MASK_PB_IDR_IDR4         0x10
#define MASK_PB_IDR_IDR5         0x20
#define MASK_PB_IDR_IDR6         0x40
#define MASK_PB_IDR_IDR7         0x80

#define MASK_PB_DDR_DDR0         0x01
#define MASK_PB_DDR_DDR1         0x02
#define MASK_PB_DDR_DDR2         0x04
#define MASK_PB_DDR_DDR3         0x08
#define MASK_PB_DDR_DDR4         0x10
#define MASK_PB_DDR_DDR5         0x20
#define MASK_PB_DDR_DDR6         0x40
#define MASK_PB_DDR_DDR7         0x80

#define MASK_PB_CR1_C10          0x01
#define MASK_PB_CR1_C11          0x02
#define MASK_PB_CR1_C12          0x04
#define MASK_PB_CR1_C13          0x08
#define MASK_PB_CR1_C14          0x10
#define MASK_PB_CR1_C15          0x20
#define MASK_PB_CR1_C16          0x40
#define MASK_PB_CR1_C17          0x80

#define MASK_PB_CR2_C20          0x01
#define MASK_PB_CR2_C21          0x02
#define MASK_PB_CR2_C22          0x04
#define MASK_PB_CR2_C23          0x08
#define MASK_PB_CR2_C24          0x10
#define MASK_PB_CR2_C25          0x20
#define MASK_PB_CR2_C26          0x40
#define MASK_PB_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port C register definitions
 *-----------------------------------------------------------------------*/
/* Port C data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PC_ODR;
#endif
__IO_REG8_BIT(PC_ODR,      0x500A, __READ_WRITE, __BITS_PC_ODR);

/* Port C input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PC_IDR;
#endif
__IO_REG8_BIT(PC_IDR,      0x500B, __READ, __BITS_PC_IDR);

/* Port C data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PC_DDR;
#endif
__IO_REG8_BIT(PC_DDR,      0x500C, __READ_WRITE, __BITS_PC_DDR);

/* Port C control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PC_CR1;
#endif
__IO_REG8_BIT(PC_CR1,      0x500D, __READ_WRITE, __BITS_PC_CR1);

/* Port C control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PC_CR2;
#endif
__IO_REG8_BIT(PC_CR2,      0x500E, __READ_WRITE, __BITS_PC_CR2);


/*-------------------------------------------------------------------------
 *      Port C bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PC_ODR_ODR0              PC_ODR_bit.ODR0
#define PC_ODR_ODR1              PC_ODR_bit.ODR1
#define PC_ODR_ODR2              PC_ODR_bit.ODR2
#define PC_ODR_ODR3              PC_ODR_bit.ODR3
#define PC_ODR_ODR4              PC_ODR_bit.ODR4
#define PC_ODR_ODR5              PC_ODR_bit.ODR5
#define PC_ODR_ODR6              PC_ODR_bit.ODR6
#define PC_ODR_ODR7              PC_ODR_bit.ODR7

#define PC_IDR_IDR0              PC_IDR_bit.IDR0
#define PC_IDR_IDR1              PC_IDR_bit.IDR1
#define PC_IDR_IDR2              PC_IDR_bit.IDR2
#define PC_IDR_IDR3              PC_IDR_bit.IDR3
#define PC_IDR_IDR4              PC_IDR_bit.IDR4
#define PC_IDR_IDR5              PC_IDR_bit.IDR5
#define PC_IDR_IDR6              PC_IDR_bit.IDR6
#define PC_IDR_IDR7              PC_IDR_bit.IDR7

#define PC_DDR_DDR0              PC_DDR_bit.DDR0
#define PC_DDR_DDR1              PC_DDR_bit.DDR1
#define PC_DDR_DDR2              PC_DDR_bit.DDR2
#define PC_DDR_DDR3              PC_DDR_bit.DDR3
#define PC_DDR_DDR4              PC_DDR_bit.DDR4
#define PC_DDR_DDR5              PC_DDR_bit.DDR5
#define PC_DDR_DDR6              PC_DDR_bit.DDR6
#define PC_DDR_DDR7              PC_DDR_bit.DDR7

#define PC_CR1_C10               PC_CR1_bit.C10
#define PC_CR1_C11               PC_CR1_bit.C11
#define PC_CR1_C12               PC_CR1_bit.C12
#define PC_CR1_C13               PC_CR1_bit.C13
#define PC_CR1_C14               PC_CR1_bit.C14
#define PC_CR1_C15               PC_CR1_bit.C15
#define PC_CR1_C16               PC_CR1_bit.C16
#define PC_CR1_C17               PC_CR1_bit.C17

#define PC_CR2_C20               PC_CR2_bit.C20
#define PC_CR2_C21               PC_CR2_bit.C21
#define PC_CR2_C22               PC_CR2_bit.C22
#define PC_CR2_C23               PC_CR2_bit.C23
#define PC_CR2_C24               PC_CR2_bit.C24
#define PC_CR2_C25               PC_CR2_bit.C25
#define PC_CR2_C26               PC_CR2_bit.C26
#define PC_CR2_C27               PC_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port C bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PC_ODR_ODR0         0x01
#define MASK_PC_ODR_ODR1         0x02
#define MASK_PC_ODR_ODR2         0x04
#define MASK_PC_ODR_ODR3         0x08
#define MASK_PC_ODR_ODR4         0x10
#define MASK_PC_ODR_ODR5         0x20
#define MASK_PC_ODR_ODR6         0x40
#define MASK_PC_ODR_ODR7         0x80

#define MASK_PC_IDR_IDR0         0x01
#define MASK_PC_IDR_IDR1         0x02
#define MASK_PC_IDR_IDR2         0x04
#define MASK_PC_IDR_IDR3         0x08
#define MASK_PC_IDR_IDR4         0x10
#define MASK_PC_IDR_IDR5         0x20
#define MASK_PC_IDR_IDR6         0x40
#define MASK_PC_IDR_IDR7         0x80

#define MASK_PC_DDR_DDR0         0x01
#define MASK_PC_DDR_DDR1         0x02
#define MASK_PC_DDR_DDR2         0x04
#define MASK_PC_DDR_DDR3         0x08
#define MASK_PC_DDR_DDR4         0x10
#define MASK_PC_DDR_DDR5         0x20
#define MASK_PC_DDR_DDR6         0x40
#define MASK_PC_DDR_DDR7         0x80

#define MASK_PC_CR1_C10          0x01
#define MASK_PC_CR1_C11          0x02
#define MASK_PC_CR1_C12          0x04
#define MASK_PC_CR1_C13          0x08
#define MASK_PC_CR1_C14          0x10
#define MASK_PC_CR1_C15          0x20
#define MASK_PC_CR1_C16          0x40
#define MASK_PC_CR1_C17          0x80

#define MASK_PC_CR2_C20          0x01
#define MASK_PC_CR2_C21          0x02
#define MASK_PC_CR2_C22          0x04
#define MASK_PC_CR2_C23          0x08
#define MASK_PC_CR2_C24          0x10
#define MASK_PC_CR2_C25          0x20
#define MASK_PC_CR2_C26          0x40
#define MASK_PC_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port D register definitions
 *-----------------------------------------------------------------------*/
/* Port D data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PD_ODR;
#endif
__IO_REG8_BIT(PD_ODR,      0x500F, __READ_WRITE, __BITS_PD_ODR);

/* Port D input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PD_IDR;
#endif
__IO_REG8_BIT(PD_IDR,      0x5010, __READ, __BITS_PD_IDR);

/* Port D data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PD_DDR;
#endif
__IO_REG8_BIT(PD_DDR,      0x5011, __READ_WRITE, __BITS_PD_DDR);

/* Port D control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PD_CR1;
#endif
__IO_REG8_BIT(PD_CR1,      0x5012, __READ_WRITE, __BITS_PD_CR1);

/* Port D control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PD_CR2;
#endif
__IO_REG8_BIT(PD_CR2,      0x5013, __READ_WRITE, __BITS_PD_CR2);


/*-------------------------------------------------------------------------
 *      Port D bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PD_ODR_ODR0              PD_ODR_bit.ODR0
#define PD_ODR_ODR1              PD_ODR_bit.ODR1
#define PD_ODR_ODR2              PD_ODR_bit.ODR2
#define PD_ODR_ODR3              PD_ODR_bit.ODR3
#define PD_ODR_ODR4              PD_ODR_bit.ODR4
#define PD_ODR_ODR5              PD_ODR_bit.ODR5
#define PD_ODR_ODR6              PD_ODR_bit.ODR6
#define PD_ODR_ODR7              PD_ODR_bit.ODR7

#define PD_IDR_IDR0              PD_IDR_bit.IDR0
#define PD_IDR_IDR1              PD_IDR_bit.IDR1
#define PD_IDR_IDR2              PD_IDR_bit.IDR2
#define PD_IDR_IDR3              PD_IDR_bit.IDR3
#define PD_IDR_IDR4              PD_IDR_bit.IDR4
#define PD_IDR_IDR5              PD_IDR_bit.IDR5
#define PD_IDR_IDR6              PD_IDR_bit.IDR6
#define PD_IDR_IDR7              PD_IDR_bit.IDR7

#define PD_DDR_DDR0              PD_DDR_bit.DDR0
#define PD_DDR_DDR1              PD_DDR_bit.DDR1
#define PD_DDR_DDR2              PD_DDR_bit.DDR2
#define PD_DDR_DDR3              PD_DDR_bit.DDR3
#define PD_DDR_DDR4              PD_DDR_bit.DDR4
#define PD_DDR_DDR5              PD_DDR_bit.DDR5
#define PD_DDR_DDR6              PD_DDR_bit.DDR6
#define PD_DDR_DDR7              PD_DDR_bit.DDR7

#define PD_CR1_C10               PD_CR1_bit.C10
#define PD_CR1_C11               PD_CR1_bit.C11
#define PD_CR1_C12               PD_CR1_bit.C12
#define PD_CR1_C13               PD_CR1_bit.C13
#define PD_CR1_C14               PD_CR1_bit.C14
#define PD_CR1_C15               PD_CR1_bit.C15
#define PD_CR1_C16               PD_CR1_bit.C16
#define PD_CR1_C17               PD_CR1_bit.C17

#define PD_CR2_C20               PD_CR2_bit.C20
#define PD_CR2_C21               PD_CR2_bit.C21
#define PD_CR2_C22               PD_CR2_bit.C22
#define PD_CR2_C23               PD_CR2_bit.C23
#define PD_CR2_C24               PD_CR2_bit.C24
#define PD_CR2_C25               PD_CR2_bit.C25
#define PD_CR2_C26               PD_CR2_bit.C26
#define PD_CR2_C27               PD_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port D bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PD_ODR_ODR0         0x01
#define MASK_PD_ODR_ODR1         0x02
#define MASK_PD_ODR_ODR2         0x04
#define MASK_PD_ODR_ODR3         0x08
#define MASK_PD_ODR_ODR4         0x10
#define MASK_PD_ODR_ODR5         0x20
#define MASK_PD_ODR_ODR6         0x40
#define MASK_PD_ODR_ODR7         0x80

#define MASK_PD_IDR_IDR0         0x01
#define MASK_PD_IDR_IDR1         0x02
#define MASK_PD_IDR_IDR2         0x04
#define MASK_PD_IDR_IDR3         0x08
#define MASK_PD_IDR_IDR4         0x10
#define MASK_PD_IDR_IDR5         0x20
#define MASK_PD_IDR_IDR6         0x40
#define MASK_PD_IDR_IDR7         0x80

#define MASK_PD_DDR_DDR0         0x01
#define MASK_PD_DDR_DDR1         0x02
#define MASK_PD_DDR_DDR2         0x04
#define MASK_PD_DDR_DDR3         0x08
#define MASK_PD_DDR_DDR4         0x10
#define MASK_PD_DDR_DDR5         0x20
#define MASK_PD_DDR_DDR6         0x40
#define MASK_PD_DDR_DDR7         0x80

#define MASK_PD_CR1_C10          0x01
#define MASK_PD_CR1_C11          0x02
#define MASK_PD_CR1_C12          0x04
#define MASK_PD_CR1_C13          0x08
#define MASK_PD_CR1_C14          0x10
#define MASK_PD_CR1_C15          0x20
#define MASK_PD_CR1_C16          0x40
#define MASK_PD_CR1_C17          0x80

#define MASK_PD_CR2_C20          0x01
#define MASK_PD_CR2_C21          0x02
#define MASK_PD_CR2_C22          0x04
#define MASK_PD_CR2_C23          0x08
#define MASK_PD_CR2_C24          0x10
#define MASK_PD_CR2_C25          0x20
#define MASK_PD_CR2_C26          0x40
#define MASK_PD_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port E register definitions
 *-----------------------------------------------------------------------*/
/* Port E data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PE_ODR;
#endif
__IO_REG8_BIT(PE_ODR,      0x5014, __READ_WRITE, __BITS_PE_ODR);

/* Port E input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PE_IDR;
#endif
__IO_REG8_BIT(PE_IDR,      0x5015, __READ, __BITS_PE_IDR);

/* Port E data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PE_DDR;
#endif
__IO_REG8_BIT(PE_DDR,      0x5016, __READ_WRITE, __BITS_PE_DDR);

/* Port E control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PE_CR1;
#endif
__IO_REG8_BIT(PE_CR1,      0x5017, __READ_WRITE, __BITS_PE_CR1);

/* Port E control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PE_CR2;
#endif
__IO_REG8_BIT(PE_CR2,      0x5018, __READ_WRITE, __BITS_PE_CR2);


/*-------------------------------------------------------------------------
 *      Port E bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PE_ODR_ODR0              PE_ODR_bit.ODR0
#define PE_ODR_ODR1              PE_ODR_bit.ODR1
#define PE_ODR_ODR2              PE_ODR_bit.ODR2
#define PE_ODR_ODR3              PE_ODR_bit.ODR3
#define PE_ODR_ODR4              PE_ODR_bit.ODR4
#define PE_ODR_ODR5              PE_ODR_bit.ODR5
#define PE_ODR_ODR6              PE_ODR_bit.ODR6
#define PE_ODR_ODR7              PE_ODR_bit.ODR7

#define PE_IDR_IDR0              PE_IDR_bit.IDR0
#define PE_IDR_IDR1              PE_IDR_bit.IDR1
#define PE_IDR_IDR2              PE_IDR_bit.IDR2
#define PE_IDR_IDR3              PE_IDR_bit.IDR3
#define PE_IDR_IDR4              PE_IDR_bit.IDR4
#define PE_IDR_IDR5              PE_IDR_bit.IDR5
#define PE_IDR_IDR6              PE_IDR_bit.IDR6
#define PE_IDR_IDR7              PE_IDR_bit.IDR7

#define PE_DDR_DDR0              PE_DDR_bit.DDR0
#define PE_DDR_DDR1              PE_DDR_bit.DDR1
#define PE_DDR_DDR2              PE_DDR_bit.DDR2
#define PE_DDR_DDR3              PE_DDR_bit.DDR3
#define PE_DDR_DDR4              PE_DDR_bit.DDR4
#define PE_DDR_DDR5              PE_DDR_bit.DDR5
#define PE_DDR_DDR6              PE_DDR_bit.DDR6
#define PE_DDR_DDR7              PE_DDR_bit.DDR7

#define PE_CR1_C10               PE_CR1_bit.C10
#define PE_CR1_C11               PE_CR1_bit.C11
#define PE_CR1_C12               PE_CR1_bit.C12
#define PE_CR1_C13               PE_CR1_bit.C13
#define PE_CR1_C14               PE_CR1_bit.C14
#define PE_CR1_C15               PE_CR1_bit.C15
#define PE_CR1_C16               PE_CR1_bit.C16
#define PE_CR1_C17               PE_CR1_bit.C17

#define PE_CR2_C20               PE_CR2_bit.C20
#define PE_CR2_C21               PE_CR2_bit.C21
#define PE_CR2_C22               PE_CR2_bit.C22
#define PE_CR2_C23               PE_CR2_bit.C23
#define PE_CR2_C24               PE_CR2_bit.C24
#define PE_CR2_C25               PE_CR2_bit.C25
#define PE_CR2_C26               PE_CR2_bit.C26
#define PE_CR2_C27               PE_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port E bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PE_ODR_ODR0         0x01
#define MASK_PE_ODR_ODR1         0x02
#define MASK_PE_ODR_ODR2         0x04
#define MASK_PE_ODR_ODR3         0x08
#define MASK_PE_ODR_ODR4         0x10
#define MASK_PE_ODR_ODR5         0x20
#define MASK_PE_ODR_ODR6         0x40
#define MASK_PE_ODR_ODR7         0x80

#define MASK_PE_IDR_IDR0         0x01
#define MASK_PE_IDR_IDR1         0x02
#define MASK_PE_IDR_IDR2         0x04
#define MASK_PE_IDR_IDR3         0x08
#define MASK_PE_IDR_IDR4         0x10
#define MASK_PE_IDR_IDR5         0x20
#define MASK_PE_IDR_IDR6         0x40
#define MASK_PE_IDR_IDR7         0x80

#define MASK_PE_DDR_DDR0         0x01
#define MASK_PE_DDR_DDR1         0x02
#define MASK_PE_DDR_DDR2         0x04
#define MASK_PE_DDR_DDR3         0x08
#define MASK_PE_DDR_DDR4         0x10
#define MASK_PE_DDR_DDR5         0x20
#define MASK_PE_DDR_DDR6         0x40
#define MASK_PE_DDR_DDR7         0x80

#define MASK_PE_CR1_C10          0x01
#define MASK_PE_CR1_C11          0x02
#define MASK_PE_CR1_C12          0x04
#define MASK_PE_CR1_C13          0x08
#define MASK_PE_CR1_C14          0x10
#define MASK_PE_CR1_C15          0x20
#define MASK_PE_CR1_C16          0x40
#define MASK_PE_CR1_C17          0x80

#define MASK_PE_CR2_C20          0x01
#define MASK_PE_CR2_C21          0x02
#define MASK_PE_CR2_C22          0x04
#define MASK_PE_CR2_C23          0x08
#define MASK_PE_CR2_C24          0x10
#define MASK_PE_CR2_C25          0x20
#define MASK_PE_CR2_C26          0x40
#define MASK_PE_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Port F register definitions
 *-----------------------------------------------------------------------*/
/* Port F data output latch register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ODR0        : 1;
  unsigned char ODR1        : 1;
  unsigned char ODR2        : 1;
  unsigned char ODR3        : 1;
  unsigned char ODR4        : 1;
  unsigned char ODR5        : 1;
  unsigned char ODR6        : 1;
  unsigned char ODR7        : 1;
} __BITS_PF_ODR;
#endif
__IO_REG8_BIT(PF_ODR,      0x5019, __READ_WRITE, __BITS_PF_ODR);

/* Port F input pin value register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IDR0        : 1;
  unsigned char IDR1        : 1;
  unsigned char IDR2        : 1;
  unsigned char IDR3        : 1;
  unsigned char IDR4        : 1;
  unsigned char IDR5        : 1;
  unsigned char IDR6        : 1;
  unsigned char IDR7        : 1;
} __BITS_PF_IDR;
#endif
__IO_REG8_BIT(PF_IDR,      0x501A, __READ, __BITS_PF_IDR);

/* Port F data direction register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DDR0        : 1;
  unsigned char DDR1        : 1;
  unsigned char DDR2        : 1;
  unsigned char DDR3        : 1;
  unsigned char DDR4        : 1;
  unsigned char DDR5        : 1;
  unsigned char DDR6        : 1;
  unsigned char DDR7        : 1;
} __BITS_PF_DDR;
#endif
__IO_REG8_BIT(PF_DDR,      0x501B, __READ_WRITE, __BITS_PF_DDR);

/* Port F control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C10         : 1;
  unsigned char C11         : 1;
  unsigned char C12         : 1;
  unsigned char C13         : 1;
  unsigned char C14         : 1;
  unsigned char C15         : 1;
  unsigned char C16         : 1;
  unsigned char C17         : 1;
} __BITS_PF_CR1;
#endif
__IO_REG8_BIT(PF_CR1,      0x501C, __READ_WRITE, __BITS_PF_CR1);

/* Port F control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C20         : 1;
  unsigned char C21         : 1;
  unsigned char C22         : 1;
  unsigned char C23         : 1;
  unsigned char C24         : 1;
  unsigned char C25         : 1;
  unsigned char C26         : 1;
  unsigned char C27         : 1;
} __BITS_PF_CR2;
#endif
__IO_REG8_BIT(PF_CR2,      0x501D, __READ_WRITE, __BITS_PF_CR2);


/*-------------------------------------------------------------------------
 *      Port F bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PF_ODR_ODR0              PF_ODR_bit.ODR0
#define PF_ODR_ODR1              PF_ODR_bit.ODR1
#define PF_ODR_ODR2              PF_ODR_bit.ODR2
#define PF_ODR_ODR3              PF_ODR_bit.ODR3
#define PF_ODR_ODR4              PF_ODR_bit.ODR4
#define PF_ODR_ODR5              PF_ODR_bit.ODR5
#define PF_ODR_ODR6              PF_ODR_bit.ODR6
#define PF_ODR_ODR7              PF_ODR_bit.ODR7

#define PF_IDR_IDR0              PF_IDR_bit.IDR0
#define PF_IDR_IDR1              PF_IDR_bit.IDR1
#define PF_IDR_IDR2              PF_IDR_bit.IDR2
#define PF_IDR_IDR3              PF_IDR_bit.IDR3
#define PF_IDR_IDR4              PF_IDR_bit.IDR4
#define PF_IDR_IDR5              PF_IDR_bit.IDR5
#define PF_IDR_IDR6              PF_IDR_bit.IDR6
#define PF_IDR_IDR7              PF_IDR_bit.IDR7

#define PF_DDR_DDR0              PF_DDR_bit.DDR0
#define PF_DDR_DDR1              PF_DDR_bit.DDR1
#define PF_DDR_DDR2              PF_DDR_bit.DDR2
#define PF_DDR_DDR3              PF_DDR_bit.DDR3
#define PF_DDR_DDR4              PF_DDR_bit.DDR4
#define PF_DDR_DDR5              PF_DDR_bit.DDR5
#define PF_DDR_DDR6              PF_DDR_bit.DDR6
#define PF_DDR_DDR7              PF_DDR_bit.DDR7

#define PF_CR1_C10               PF_CR1_bit.C10
#define PF_CR1_C11               PF_CR1_bit.C11
#define PF_CR1_C12               PF_CR1_bit.C12
#define PF_CR1_C13               PF_CR1_bit.C13
#define PF_CR1_C14               PF_CR1_bit.C14
#define PF_CR1_C15               PF_CR1_bit.C15
#define PF_CR1_C16               PF_CR1_bit.C16
#define PF_CR1_C17               PF_CR1_bit.C17

#define PF_CR2_C20               PF_CR2_bit.C20
#define PF_CR2_C21               PF_CR2_bit.C21
#define PF_CR2_C22               PF_CR2_bit.C22
#define PF_CR2_C23               PF_CR2_bit.C23
#define PF_CR2_C24               PF_CR2_bit.C24
#define PF_CR2_C25               PF_CR2_bit.C25
#define PF_CR2_C26               PF_CR2_bit.C26
#define PF_CR2_C27               PF_CR2_bit.C27

#endif

/*-------------------------------------------------------------------------
 *      Port F bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PF_ODR_ODR0         0x01
#define MASK_PF_ODR_ODR1         0x02
#define MASK_PF_ODR_ODR2         0x04
#define MASK_PF_ODR_ODR3         0x08
#define MASK_PF_ODR_ODR4         0x10
#define MASK_PF_ODR_ODR5         0x20
#define MASK_PF_ODR_ODR6         0x40
#define MASK_PF_ODR_ODR7         0x80

#define MASK_PF_IDR_IDR0         0x01
#define MASK_PF_IDR_IDR1         0x02
#define MASK_PF_IDR_IDR2         0x04
#define MASK_PF_IDR_IDR3         0x08
#define MASK_PF_IDR_IDR4         0x10
#define MASK_PF_IDR_IDR5         0x20
#define MASK_PF_IDR_IDR6         0x40
#define MASK_PF_IDR_IDR7         0x80

#define MASK_PF_DDR_DDR0         0x01
#define MASK_PF_DDR_DDR1         0x02
#define MASK_PF_DDR_DDR2         0x04
#define MASK_PF_DDR_DDR3         0x08
#define MASK_PF_DDR_DDR4         0x10
#define MASK_PF_DDR_DDR5         0x20
#define MASK_PF_DDR_DDR6         0x40
#define MASK_PF_DDR_DDR7         0x80

#define MASK_PF_CR1_C10          0x01
#define MASK_PF_CR1_C11          0x02
#define MASK_PF_CR1_C12          0x04
#define MASK_PF_CR1_C13          0x08
#define MASK_PF_CR1_C14          0x10
#define MASK_PF_CR1_C15          0x20
#define MASK_PF_CR1_C16          0x40
#define MASK_PF_CR1_C17          0x80

#define MASK_PF_CR2_C20          0x01
#define MASK_PF_CR2_C21          0x02
#define MASK_PF_CR2_C22          0x04
#define MASK_PF_CR2_C23          0x08
#define MASK_PF_CR2_C24          0x10
#define MASK_PF_CR2_C25          0x20
#define MASK_PF_CR2_C26          0x40
#define MASK_PF_CR2_C27          0x80


/*-------------------------------------------------------------------------
 *      Flash register definitions
 *-----------------------------------------------------------------------*/
/* Flash control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FIX         : 1;
  unsigned char IE          : 1;
  unsigned char WAITM       : 1;
  unsigned char EEPM        : 1;
} __BITS_FLASH_CR1;
#endif
__IO_REG8_BIT(FLASH_CR1,   0x5050, __READ_WRITE, __BITS_FLASH_CR1);

/* Flash control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PRG         : 1;
  unsigned char             : 3;
  unsigned char FPRG        : 1;
  unsigned char ERASE       : 1;
  unsigned char WPRG        : 1;
  unsigned char OPT         : 1;
} __BITS_FLASH_CR2;
#endif
__IO_REG8_BIT(FLASH_CR2,   0x5051, __READ_WRITE, __BITS_FLASH_CR2);

/* Flash program memory unprotection key register */
__IO_REG8    (FLASH_PUKR,  0x5052, __READ_WRITE);
/* Data EEPROM unprotection key register */
__IO_REG8    (FLASH_DUKR,  0x5053, __READ_WRITE);
/* Flash in-application programming status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WR_PG_DIS   : 1;
  unsigned char PUL         : 1;
  unsigned char EOP         : 1;
  unsigned char DUL         : 1;
  unsigned char             : 2;
  unsigned char HVOFF       : 1;
} __BITS_FLASH_IAPSR;
#endif
__IO_REG8_BIT(FLASH_IAPSR, 0x5054, __READ_WRITE, __BITS_FLASH_IAPSR);


/*-------------------------------------------------------------------------
 *      Flash bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define FLASH_CR1_FIX            FLASH_CR1_bit.FIX
#define FLASH_CR1_IE             FLASH_CR1_bit.IE
#define FLASH_CR1_WAITM          FLASH_CR1_bit.WAITM
#define FLASH_CR1_EEPM           FLASH_CR1_bit.EEPM

#define FLASH_CR2_PRG            FLASH_CR2_bit.PRG
#define FLASH_CR2_FPRG           FLASH_CR2_bit.FPRG
#define FLASH_CR2_ERASE          FLASH_CR2_bit.ERASE
#define FLASH_CR2_WPRG           FLASH_CR2_bit.WPRG
#define FLASH_CR2_OPT            FLASH_CR2_bit.OPT

#define FLASH_IAPSR_WR_PG_DIS    FLASH_IAPSR_bit.WR_PG_DIS
#define FLASH_IAPSR_PUL          FLASH_IAPSR_bit.PUL
#define FLASH_IAPSR_EOP          FLASH_IAPSR_bit.EOP
#define FLASH_IAPSR_DUL          FLASH_IAPSR_bit.DUL
#define FLASH_IAPSR_HVOFF        FLASH_IAPSR_bit.HVOFF

#endif

/*-------------------------------------------------------------------------
 *      Flash bit masks
 *-----------------------------------------------------------------------*/
#define MASK_FLASH_CR1_FIX       0x01
#define MASK_FLASH_CR1_IE        0x02
#define MASK_FLASH_CR1_WAITM     0x04
#define MASK_FLASH_CR1_EEPM      0x08

#define MASK_FLASH_CR2_PRG       0x01
#define MASK_FLASH_CR2_FPRG      0x10
#define MASK_FLASH_CR2_ERASE     0x20
#define MASK_FLASH_CR2_WPRG      0x40
#define MASK_FLASH_CR2_OPT       0x80

#define MASK_FLASH_IAPSR_WR_PG_DIS 0x01
#define MASK_FLASH_IAPSR_PUL     0x02
#define MASK_FLASH_IAPSR_EOP     0x04
#define MASK_FLASH_IAPSR_DUL     0x08
#define MASK_FLASH_IAPSR_HVOFF   0x40


/*-------------------------------------------------------------------------
 *      DMA1 register definitions
 *-----------------------------------------------------------------------*/
/* DMA1 global configuration & status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char GEN         : 1;
  unsigned char GB          : 1;
  unsigned char TO          : 6;
} __BITS_DMA1_GCSR;
#endif
__IO_REG8_BIT(DMA1_GCSR,   0x5070, __READ_WRITE, __BITS_DMA1_GCSR);

/* DMA1 global interrupt register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IFC0        : 1;
  unsigned char IFC1        : 1;
  unsigned char IFC2        : 1;
  unsigned char IFC3        : 1;
} __BITS_DMA1_GIR1;
#endif
__IO_REG8_BIT(DMA1_GIR1,   0x5071, __READ, __BITS_DMA1_GIR1);

/* DMA1 channel 0 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C0CR;
#endif
__IO_REG8_BIT(DMA1_C0CR,   0x5075, __READ_WRITE, __BITS_DMA1_C0CR);

/* DMA1 channel 0 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C0SPR;
#endif
__IO_REG8_BIT(DMA1_C0SPR,  0x5076, __READ_WRITE, __BITS_DMA1_C0SPR);

/* DMA1 number of data to transfer register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C0NDTR;
#endif
__IO_REG8_BIT(DMA1_C0NDTR, 0x5077, __READ_WRITE, __BITS_DMA1_C0NDTR);

/* DMA1 peripheral address high register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C0PARH;
#endif
__IO_REG8_BIT(DMA1_C0PARH, 0x5078, __READ_WRITE, __BITS_DMA1_C0PARH);

/* DMA1 peripheral address low register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C0PARL;
#endif
__IO_REG8_BIT(DMA1_C0PARL, 0x5079, __READ_WRITE, __BITS_DMA1_C0PARL);

/* DMA1 memory 0 address high register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C0M0ARH;
#endif
__IO_REG8_BIT(DMA1_C0M0ARH, 0x507B, __READ_WRITE, __BITS_DMA1_C0M0ARH);

/* DMA1 memory 0 address low register (channel 0) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C0M0ARL;
#endif
__IO_REG8_BIT(DMA1_C0M0ARL, 0x507C, __READ_WRITE, __BITS_DMA1_C0M0ARL);

/* DMA1 channel 1 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C1CR;
#endif
__IO_REG8_BIT(DMA1_C1CR,   0x507F, __READ_WRITE, __BITS_DMA1_C1CR);

/* DMA1 channel 1 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C1SPR;
#endif
__IO_REG8_BIT(DMA1_C1SPR,  0x5080, __READ_WRITE, __BITS_DMA1_C1SPR);

/* DMA1 number of data to transfer register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C1NDTR;
#endif
__IO_REG8_BIT(DMA1_C1NDTR, 0x5081, __READ_WRITE, __BITS_DMA1_C1NDTR);

/* DMA1 peripheral address high register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C1PARH;
#endif
__IO_REG8_BIT(DMA1_C1PARH, 0x5082, __READ_WRITE, __BITS_DMA1_C1PARH);

/* DMA1 peripheral address low register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C1PARL;
#endif
__IO_REG8_BIT(DMA1_C1PARL, 0x5083, __READ_WRITE, __BITS_DMA1_C1PARL);

/* DMA1 memory 0 address high register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C1M0ARH;
#endif
__IO_REG8_BIT(DMA1_C1M0ARH, 0x5085, __READ_WRITE, __BITS_DMA1_C1M0ARH);

/* DMA1 memory 0 address low register (channel 1) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C1M0ARL;
#endif
__IO_REG8_BIT(DMA1_C1M0ARL, 0x5086, __READ_WRITE, __BITS_DMA1_C1M0ARL);

/* DMA1 channel 2 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
} __BITS_DMA1_C2CR;
#endif
__IO_REG8_BIT(DMA1_C2CR,   0x5089, __READ_WRITE, __BITS_DMA1_C2CR);

/* DMA1 channel 2 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C2SPR;
#endif
__IO_REG8_BIT(DMA1_C2SPR,  0x508A, __READ_WRITE, __BITS_DMA1_C2SPR);

/* DMA1 number of data to transfer register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C2NDTR;
#endif
__IO_REG8_BIT(DMA1_C2NDTR, 0x508B, __READ_WRITE, __BITS_DMA1_C2NDTR);

/* DMA1 peripheral address high register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA8         : 1;
  unsigned char PA9         : 1;
  unsigned char PA10        : 1;
  unsigned char PA11        : 1;
  unsigned char PA12        : 1;
  unsigned char PA13        : 1;
  unsigned char PA14        : 1;
  unsigned char PA15        : 1;
} __BITS_DMA1_C2PARH;
#endif
__IO_REG8_BIT(DMA1_C2PARH, 0x508C, __READ_WRITE, __BITS_DMA1_C2PARH);

/* DMA1 peripheral address low register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PA0         : 1;
  unsigned char PA1         : 1;
  unsigned char PA2         : 1;
  unsigned char PA3         : 1;
  unsigned char PA4         : 1;
  unsigned char PA5         : 1;
  unsigned char PA6         : 1;
  unsigned char PA7         : 1;
} __BITS_DMA1_C2PARL;
#endif
__IO_REG8_BIT(DMA1_C2PARL, 0x508D, __READ_WRITE, __BITS_DMA1_C2PARL);

/* DMA1 memory 0 address high register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C2M0ARH;
#endif
__IO_REG8_BIT(DMA1_C2M0ARH, 0x508F, __READ_WRITE, __BITS_DMA1_C2M0ARH);

/* DMA1 memory 0 address low register (channel 2) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C2M0ARL;
#endif
__IO_REG8_BIT(DMA1_C2M0ARL, 0x5090, __READ_WRITE, __BITS_DMA1_C2M0ARL);

/* DMA1 channel 3 configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char TCIE        : 1;
  unsigned char HTIE        : 1;
  unsigned char DIR         : 1;
  unsigned char CIRC        : 1;
  unsigned char MINCDEC     : 1;
  unsigned char MEM         : 1;
} __BITS_DMA1_C3CR;
#endif
__IO_REG8_BIT(DMA1_C3CR,   0x5093, __READ_WRITE, __BITS_DMA1_C3CR);

/* DMA1 channel 3 status */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char TCIF        : 1;
  unsigned char HTIF        : 1;
  unsigned char TSIZE       : 1;
  unsigned char PL0         : 1;
  unsigned char PL1         : 1;
  unsigned char PEND        : 1;
  unsigned char BUSY        : 1;
} __BITS_DMA1_C3SPR;
#endif
__IO_REG8_BIT(DMA1_C3SPR,  0x5094, __READ_WRITE, __BITS_DMA1_C3SPR);

/* DMA1 number of data to transfer register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char NDT0        : 1;
  unsigned char NDT1        : 1;
  unsigned char NDT2        : 1;
  unsigned char NDT3        : 1;
  unsigned char NDT4        : 1;
  unsigned char NDT5        : 1;
  unsigned char NDT6        : 1;
  unsigned char NDT7        : 1;
} __BITS_DMA1_C3NDTR;
#endif
__IO_REG8_BIT(DMA1_C3NDTR, 0x5095, __READ_WRITE, __BITS_DMA1_C3NDTR);

/* DMA1 peripheral address high register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef union
{
  struct
  {
    unsigned char PA8         : 1;
    unsigned char PA9         : 1;
    unsigned char PA10        : 1;
    unsigned char PA11        : 1;
    unsigned char PA12        : 1;
    unsigned char PA13        : 1;
    unsigned char PA14        : 1;
    unsigned char PA15        : 1;
  } mem_clr;
  struct
  {
    unsigned char M1A8        : 1;
    unsigned char M1A9        : 1;
    unsigned char M1A10       : 1;
    unsigned char M1A11       : 1;
    unsigned char M1A12       : 1;
    unsigned char M1A13       : 1;
    unsigned char M1A14       : 1;
    unsigned char M1A15       : 1;
  } mem_set;
} __BITS_DMA1_C3PARH_C3M1ARH;
#endif
__IO_REG8_BIT(DMA1_C3PARH_C3M1ARH, 0x5096, __READ_WRITE, __BITS_DMA1_C3PARH_C3M1ARH);

/* Register aliases for DMA1_C3PARH_C3M1ARH */
#define DMA1_C3PARH      DMA1_C3PARH_C3M1ARH
#define DMA1_C3PARH_bit  DMA1_C3PARH_C3M1ARH_bit.mem_clr

#define DMA1_C3M1ARH     DMA1_C3PARH_C3M1ARH
#define DMA1_C3M1ARH_bit DMA1_C3PARH_C3M1ARH_bit.mem_set


/* DMA1 peripheral address low register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef union
{
  struct
  {
    unsigned char PA0         : 1;
    unsigned char PA1         : 1;
    unsigned char PA2         : 1;
    unsigned char PA3         : 1;
    unsigned char PA4         : 1;
    unsigned char PA5         : 1;
    unsigned char PA6         : 1;
    unsigned char PA7         : 1;
  } mem_clr;
  struct
  {
    unsigned char M1A0        : 1;
    unsigned char M1A1        : 1;
    unsigned char M1A2        : 1;
    unsigned char M1A3        : 1;
    unsigned char M1A4        : 1;
    unsigned char M1A5        : 1;
    unsigned char M1A6        : 1;
    unsigned char M1A7        : 1;
  } mem_set;
} __BITS_DMA1_C3PARL_C3M1ARL;
#endif
__IO_REG8_BIT(DMA1_C3PARL_C3M1ARL, 0x5097, __READ_WRITE, __BITS_DMA1_C3PARL_C3M1ARL);

/* Register aliases for DMA1_C3PARL_C3M1ARL */
#define DMA1_C3PARL      DMA1_C3PARL_C3M1ARL
#define DMA1_C3PARL_bit  DMA1_C3PARL_C3M1ARL_bit.mem_clr

#define DMA1_C3M1ARL     DMA1_C3PARL_C3M1ARL
#define DMA1_C3M1ARL_bit DMA1_C3PARL_C3M1ARL_bit.mem_set


/* DMA1 memory 0 address high register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A8        : 1;
  unsigned char M0A9        : 1;
  unsigned char M0A10       : 1;
  unsigned char M0A11       : 1;
  unsigned char M0A12       : 1;
  unsigned char M0A13       : 1;
  unsigned char M0A14       : 1;
  unsigned char M0A15       : 1;
} __BITS_DMA1_C3M0ARH;
#endif
__IO_REG8_BIT(DMA1_C3M0ARH, 0x5099, __READ_WRITE, __BITS_DMA1_C3M0ARH);

/* DMA1 memory 0 address low register (channel 3) */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char M0A0        : 1;
  unsigned char M0A1        : 1;
  unsigned char M0A2        : 1;
  unsigned char M0A3        : 1;
  unsigned char M0A4        : 1;
  unsigned char M0A5        : 1;
  unsigned char M0A6        : 1;
  unsigned char M0A7        : 1;
} __BITS_DMA1_C3M0ARL;
#endif
__IO_REG8_BIT(DMA1_C3M0ARL, 0x509A, __READ_WRITE, __BITS_DMA1_C3M0ARL);


/*-------------------------------------------------------------------------
 *      DMA1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define DMA1_GCSR_GEN            DMA1_GCSR_bit.GEN
#define DMA1_GCSR_GB             DMA1_GCSR_bit.GB
#define DMA1_GCSR_TO             DMA1_GCSR_bit.TO

#define DMA1_GIR1_IFC0           DMA1_GIR1_bit.IFC0
#define DMA1_GIR1_IFC1           DMA1_GIR1_bit.IFC1
#define DMA1_GIR1_IFC2           DMA1_GIR1_bit.IFC2
#define DMA1_GIR1_IFC3           DMA1_GIR1_bit.IFC3

#define DMA1_C0CR_EN             DMA1_C0CR_bit.EN
#define DMA1_C0CR_TCIE           DMA1_C0CR_bit.TCIE
#define DMA1_C0CR_HTIE           DMA1_C0CR_bit.HTIE
#define DMA1_C0CR_DIR            DMA1_C0CR_bit.DIR
#define DMA1_C0CR_CIRC           DMA1_C0CR_bit.CIRC
#define DMA1_C0CR_MINCDEC        DMA1_C0CR_bit.MINCDEC

#define DMA1_C0SPR_TCIF          DMA1_C0SPR_bit.TCIF
#define DMA1_C0SPR_HTIF          DMA1_C0SPR_bit.HTIF
#define DMA1_C0SPR_TSIZE         DMA1_C0SPR_bit.TSIZE
#define DMA1_C0SPR_PL0           DMA1_C0SPR_bit.PL0
#define DMA1_C0SPR_PL1           DMA1_C0SPR_bit.PL1
#define DMA1_C0SPR_PEND          DMA1_C0SPR_bit.PEND
#define DMA1_C0SPR_BUSY          DMA1_C0SPR_bit.BUSY

#define DMA1_C0NDTR_NDT0         DMA1_C0NDTR_bit.NDT0
#define DMA1_C0NDTR_NDT1         DMA1_C0NDTR_bit.NDT1
#define DMA1_C0NDTR_NDT2         DMA1_C0NDTR_bit.NDT2
#define DMA1_C0NDTR_NDT3         DMA1_C0NDTR_bit.NDT3
#define DMA1_C0NDTR_NDT4         DMA1_C0NDTR_bit.NDT4
#define DMA1_C0NDTR_NDT5         DMA1_C0NDTR_bit.NDT5
#define DMA1_C0NDTR_NDT6         DMA1_C0NDTR_bit.NDT6
#define DMA1_C0NDTR_NDT7         DMA1_C0NDTR_bit.NDT7

#define DMA1_C0PARH_PA8          DMA1_C0PARH_bit.PA8
#define DMA1_C0PARH_PA9          DMA1_C0PARH_bit.PA9
#define DMA1_C0PARH_PA10         DMA1_C0PARH_bit.PA10
#define DMA1_C0PARH_PA11         DMA1_C0PARH_bit.PA11
#define DMA1_C0PARH_PA12         DMA1_C0PARH_bit.PA12
#define DMA1_C0PARH_PA13         DMA1_C0PARH_bit.PA13
#define DMA1_C0PARH_PA14         DMA1_C0PARH_bit.PA14
#define DMA1_C0PARH_PA15         DMA1_C0PARH_bit.PA15

#define DMA1_C0PARL_PA0          DMA1_C0PARL_bit.PA0
#define DMA1_C0PARL_PA1          DMA1_C0PARL_bit.PA1
#define DMA1_C0PARL_PA2          DMA1_C0PARL_bit.PA2
#define DMA1_C0PARL_PA3          DMA1_C0PARL_bit.PA3
#define DMA1_C0PARL_PA4          DMA1_C0PARL_bit.PA4
#define DMA1_C0PARL_PA5          DMA1_C0PARL_bit.PA5
#define DMA1_C0PARL_PA6          DMA1_C0PARL_bit.PA6
#define DMA1_C0PARL_PA7          DMA1_C0PARL_bit.PA7

#define DMA1_C0M0ARH_M0A8        DMA1_C0M0ARH_bit.M0A8
#define DMA1_C0M0ARH_M0A9        DMA1_C0M0ARH_bit.M0A9
#define DMA1_C0M0ARH_M0A10       DMA1_C0M0ARH_bit.M0A10
#define DMA1_C0M0ARH_M0A11       DMA1_C0M0ARH_bit.M0A11
#define DMA1_C0M0ARH_M0A12       DMA1_C0M0ARH_bit.M0A12
#define DMA1_C0M0ARH_M0A13       DMA1_C0M0ARH_bit.M0A13
#define DMA1_C0M0ARH_M0A14       DMA1_C0M0ARH_bit.M0A14
#define DMA1_C0M0ARH_M0A15       DMA1_C0M0ARH_bit.M0A15

#define DMA1_C0M0ARL_M0A0        DMA1_C0M0ARL_bit.M0A0
#define DMA1_C0M0ARL_M0A1        DMA1_C0M0ARL_bit.M0A1
#define DMA1_C0M0ARL_M0A2        DMA1_C0M0ARL_bit.M0A2
#define DMA1_C0M0ARL_M0A3        DMA1_C0M0ARL_bit.M0A3
#define DMA1_C0M0ARL_M0A4        DMA1_C0M0ARL_bit.M0A4
#define DMA1_C0M0ARL_M0A5        DMA1_C0M0ARL_bit.M0A5
#define DMA1_C0M0ARL_M0A6        DMA1_C0M0ARL_bit.M0A6
#define DMA1_C0M0ARL_M0A7        DMA1_C0M0ARL_bit.M0A7

#define DMA1_C1CR_EN             DMA1_C1CR_bit.EN
#define DMA1_C1CR_TCIE           DMA1_C1CR_bit.TCIE
#define DMA1_C1CR_HTIE           DMA1_C1CR_bit.HTIE
#define DMA1_C1CR_DIR            DMA1_C1CR_bit.DIR
#define DMA1_C1CR_CIRC           DMA1_C1CR_bit.CIRC
#define DMA1_C1CR_MINCDEC        DMA1_C1CR_bit.MINCDEC

#define DMA1_C1SPR_TCIF          DMA1_C1SPR_bit.TCIF
#define DMA1_C1SPR_HTIF          DMA1_C1SPR_bit.HTIF
#define DMA1_C1SPR_TSIZE         DMA1_C1SPR_bit.TSIZE
#define DMA1_C1SPR_PL0           DMA1_C1SPR_bit.PL0
#define DMA1_C1SPR_PL1           DMA1_C1SPR_bit.PL1
#define DMA1_C1SPR_PEND          DMA1_C1SPR_bit.PEND
#define DMA1_C1SPR_BUSY          DMA1_C1SPR_bit.BUSY

#define DMA1_C1NDTR_NDT0         DMA1_C1NDTR_bit.NDT0
#define DMA1_C1NDTR_NDT1         DMA1_C1NDTR_bit.NDT1
#define DMA1_C1NDTR_NDT2         DMA1_C1NDTR_bit.NDT2
#define DMA1_C1NDTR_NDT3         DMA1_C1NDTR_bit.NDT3
#define DMA1_C1NDTR_NDT4         DMA1_C1NDTR_bit.NDT4
#define DMA1_C1NDTR_NDT5         DMA1_C1NDTR_bit.NDT5
#define DMA1_C1NDTR_NDT6         DMA1_C1NDTR_bit.NDT6
#define DMA1_C1NDTR_NDT7         DMA1_C1NDTR_bit.NDT7

#define DMA1_C1PARH_PA8          DMA1_C1PARH_bit.PA8
#define DMA1_C1PARH_PA9          DMA1_C1PARH_bit.PA9
#define DMA1_C1PARH_PA10         DMA1_C1PARH_bit.PA10
#define DMA1_C1PARH_PA11         DMA1_C1PARH_bit.PA11
#define DMA1_C1PARH_PA12         DMA1_C1PARH_bit.PA12
#define DMA1_C1PARH_PA13         DMA1_C1PARH_bit.PA13
#define DMA1_C1PARH_PA14         DMA1_C1PARH_bit.PA14
#define DMA1_C1PARH_PA15         DMA1_C1PARH_bit.PA15

#define DMA1_C1PARL_PA0          DMA1_C1PARL_bit.PA0
#define DMA1_C1PARL_PA1          DMA1_C1PARL_bit.PA1
#define DMA1_C1PARL_PA2          DMA1_C1PARL_bit.PA2
#define DMA1_C1PARL_PA3          DMA1_C1PARL_bit.PA3
#define DMA1_C1PARL_PA4          DMA1_C1PARL_bit.PA4
#define DMA1_C1PARL_PA5          DMA1_C1PARL_bit.PA5
#define DMA1_C1PARL_PA6          DMA1_C1PARL_bit.PA6
#define DMA1_C1PARL_PA7          DMA1_C1PARL_bit.PA7

#define DMA1_C1M0ARH_M0A8        DMA1_C1M0ARH_bit.M0A8
#define DMA1_C1M0ARH_M0A9        DMA1_C1M0ARH_bit.M0A9
#define DMA1_C1M0ARH_M0A10       DMA1_C1M0ARH_bit.M0A10
#define DMA1_C1M0ARH_M0A11       DMA1_C1M0ARH_bit.M0A11
#define DMA1_C1M0ARH_M0A12       DMA1_C1M0ARH_bit.M0A12
#define DMA1_C1M0ARH_M0A13       DMA1_C1M0ARH_bit.M0A13
#define DMA1_C1M0ARH_M0A14       DMA1_C1M0ARH_bit.M0A14
#define DMA1_C1M0ARH_M0A15       DMA1_C1M0ARH_bit.M0A15

#define DMA1_C1M0ARL_M0A0        DMA1_C1M0ARL_bit.M0A0
#define DMA1_C1M0ARL_M0A1        DMA1_C1M0ARL_bit.M0A1
#define DMA1_C1M0ARL_M0A2        DMA1_C1M0ARL_bit.M0A2
#define DMA1_C1M0ARL_M0A3        DMA1_C1M0ARL_bit.M0A3
#define DMA1_C1M0ARL_M0A4        DMA1_C1M0ARL_bit.M0A4
#define DMA1_C1M0ARL_M0A5        DMA1_C1M0ARL_bit.M0A5
#define DMA1_C1M0ARL_M0A6        DMA1_C1M0ARL_bit.M0A6
#define DMA1_C1M0ARL_M0A7        DMA1_C1M0ARL_bit.M0A7

#define DMA1_C2CR_EN             DMA1_C2CR_bit.EN
#define DMA1_C2CR_TCIE           DMA1_C2CR_bit.TCIE
#define DMA1_C2CR_HTIE           DMA1_C2CR_bit.HTIE
#define DMA1_C2CR_DIR            DMA1_C2CR_bit.DIR
#define DMA1_C2CR_CIRC           DMA1_C2CR_bit.CIRC
#define DMA1_C2CR_MINCDEC        DMA1_C2CR_bit.MINCDEC

#define DMA1_C2SPR_TCIF          DMA1_C2SPR_bit.TCIF
#define DMA1_C2SPR_HTIF          DMA1_C2SPR_bit.HTIF
#define DMA1_C2SPR_TSIZE         DMA1_C2SPR_bit.TSIZE
#define DMA1_C2SPR_PL0           DMA1_C2SPR_bit.PL0
#define DMA1_C2SPR_PL1           DMA1_C2SPR_bit.PL1
#define DMA1_C2SPR_PEND          DMA1_C2SPR_bit.PEND
#define DMA1_C2SPR_BUSY          DMA1_C2SPR_bit.BUSY

#define DMA1_C2NDTR_NDT0         DMA1_C2NDTR_bit.NDT0
#define DMA1_C2NDTR_NDT1         DMA1_C2NDTR_bit.NDT1
#define DMA1_C2NDTR_NDT2         DMA1_C2NDTR_bit.NDT2
#define DMA1_C2NDTR_NDT3         DMA1_C2NDTR_bit.NDT3
#define DMA1_C2NDTR_NDT4         DMA1_C2NDTR_bit.NDT4
#define DMA1_C2NDTR_NDT5         DMA1_C2NDTR_bit.NDT5
#define DMA1_C2NDTR_NDT6         DMA1_C2NDTR_bit.NDT6
#define DMA1_C2NDTR_NDT7         DMA1_C2NDTR_bit.NDT7

#define DMA1_C2PARH_PA8          DMA1_C2PARH_bit.PA8
#define DMA1_C2PARH_PA9          DMA1_C2PARH_bit.PA9
#define DMA1_C2PARH_PA10         DMA1_C2PARH_bit.PA10
#define DMA1_C2PARH_PA11         DMA1_C2PARH_bit.PA11
#define DMA1_C2PARH_PA12         DMA1_C2PARH_bit.PA12
#define DMA1_C2PARH_PA13         DMA1_C2PARH_bit.PA13
#define DMA1_C2PARH_PA14         DMA1_C2PARH_bit.PA14
#define DMA1_C2PARH_PA15         DMA1_C2PARH_bit.PA15

#define DMA1_C2PARL_PA0          DMA1_C2PARL_bit.PA0
#define DMA1_C2PARL_PA1          DMA1_C2PARL_bit.PA1
#define DMA1_C2PARL_PA2          DMA1_C2PARL_bit.PA2
#define DMA1_C2PARL_PA3          DMA1_C2PARL_bit.PA3
#define DMA1_C2PARL_PA4          DMA1_C2PARL_bit.PA4
#define DMA1_C2PARL_PA5          DMA1_C2PARL_bit.PA5
#define DMA1_C2PARL_PA6          DMA1_C2PARL_bit.PA6
#define DMA1_C2PARL_PA7          DMA1_C2PARL_bit.PA7

#define DMA1_C2M0ARH_M0A8        DMA1_C2M0ARH_bit.M0A8
#define DMA1_C2M0ARH_M0A9        DMA1_C2M0ARH_bit.M0A9
#define DMA1_C2M0ARH_M0A10       DMA1_C2M0ARH_bit.M0A10
#define DMA1_C2M0ARH_M0A11       DMA1_C2M0ARH_bit.M0A11
#define DMA1_C2M0ARH_M0A12       DMA1_C2M0ARH_bit.M0A12
#define DMA1_C2M0ARH_M0A13       DMA1_C2M0ARH_bit.M0A13
#define DMA1_C2M0ARH_M0A14       DMA1_C2M0ARH_bit.M0A14
#define DMA1_C2M0ARH_M0A15       DMA1_C2M0ARH_bit.M0A15

#define DMA1_C2M0ARL_M0A0        DMA1_C2M0ARL_bit.M0A0
#define DMA1_C2M0ARL_M0A1        DMA1_C2M0ARL_bit.M0A1
#define DMA1_C2M0ARL_M0A2        DMA1_C2M0ARL_bit.M0A2
#define DMA1_C2M0ARL_M0A3        DMA1_C2M0ARL_bit.M0A3
#define DMA1_C2M0ARL_M0A4        DMA1_C2M0ARL_bit.M0A4
#define DMA1_C2M0ARL_M0A5        DMA1_C2M0ARL_bit.M0A5
#define DMA1_C2M0ARL_M0A6        DMA1_C2M0ARL_bit.M0A6
#define DMA1_C2M0ARL_M0A7        DMA1_C2M0ARL_bit.M0A7

#define DMA1_C3CR_EN             DMA1_C3CR_bit.EN
#define DMA1_C3CR_TCIE           DMA1_C3CR_bit.TCIE
#define DMA1_C3CR_HTIE           DMA1_C3CR_bit.HTIE
#define DMA1_C3CR_DIR            DMA1_C3CR_bit.DIR
#define DMA1_C3CR_CIRC           DMA1_C3CR_bit.CIRC
#define DMA1_C3CR_MINCDEC        DMA1_C3CR_bit.MINCDEC
#define DMA1_C3CR_MEM            DMA1_C3CR_bit.MEM

#define DMA1_C3SPR_TCIF          DMA1_C3SPR_bit.TCIF
#define DMA1_C3SPR_HTIF          DMA1_C3SPR_bit.HTIF
#define DMA1_C3SPR_TSIZE         DMA1_C3SPR_bit.TSIZE
#define DMA1_C3SPR_PL0           DMA1_C3SPR_bit.PL0
#define DMA1_C3SPR_PL1           DMA1_C3SPR_bit.PL1
#define DMA1_C3SPR_PEND          DMA1_C3SPR_bit.PEND
#define DMA1_C3SPR_BUSY          DMA1_C3SPR_bit.BUSY

#define DMA1_C3NDTR_NDT0         DMA1_C3NDTR_bit.NDT0
#define DMA1_C3NDTR_NDT1         DMA1_C3NDTR_bit.NDT1
#define DMA1_C3NDTR_NDT2         DMA1_C3NDTR_bit.NDT2
#define DMA1_C3NDTR_NDT3         DMA1_C3NDTR_bit.NDT3
#define DMA1_C3NDTR_NDT4         DMA1_C3NDTR_bit.NDT4
#define DMA1_C3NDTR_NDT5         DMA1_C3NDTR_bit.NDT5
#define DMA1_C3NDTR_NDT6         DMA1_C3NDTR_bit.NDT6
#define DMA1_C3NDTR_NDT7         DMA1_C3NDTR_bit.NDT7

#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA8 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA8
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA9 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA9
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA10 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA10
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA11 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA11
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA12 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA12
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA13 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA13
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA14 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA14
#define DMA1_C3PARH_C3M1ARH_MEM_CLR_PA15 DMA1_C3PARH_C3M1ARH_bit.mem_clr.PA15
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A8 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A8
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A9 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A9
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A10 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A10
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A11 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A11
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A12 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A12
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A13 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A13
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A14 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A14
#define DMA1_C3PARH_C3M1ARH_MEM_SET_M1A15 DMA1_C3PARH_C3M1ARH_bit.mem_set.M1A15

/* Bit field aliases for DMA1_C3PARH_C3M1ARH.mem_clr */
#define DMA1_C3PARH_PA8          DMA1_C3PARH_bit.PA8
#define DMA1_C3PARH_PA9          DMA1_C3PARH_bit.PA9
#define DMA1_C3PARH_PA10         DMA1_C3PARH_bit.PA10
#define DMA1_C3PARH_PA11         DMA1_C3PARH_bit.PA11
#define DMA1_C3PARH_PA12         DMA1_C3PARH_bit.PA12
#define DMA1_C3PARH_PA13         DMA1_C3PARH_bit.PA13
#define DMA1_C3PARH_PA14         DMA1_C3PARH_bit.PA14
#define DMA1_C3PARH_PA15         DMA1_C3PARH_bit.PA15


/* Bit field aliases for DMA1_C3PARH_C3M1ARH.mem_set */
#define DMA1_C3M1ARH_M1A8        DMA1_C3M1ARH_bit.M1A8
#define DMA1_C3M1ARH_M1A9        DMA1_C3M1ARH_bit.M1A9
#define DMA1_C3M1ARH_M1A10       DMA1_C3M1ARH_bit.M1A10
#define DMA1_C3M1ARH_M1A11       DMA1_C3M1ARH_bit.M1A11
#define DMA1_C3M1ARH_M1A12       DMA1_C3M1ARH_bit.M1A12
#define DMA1_C3M1ARH_M1A13       DMA1_C3M1ARH_bit.M1A13
#define DMA1_C3M1ARH_M1A14       DMA1_C3M1ARH_bit.M1A14
#define DMA1_C3M1ARH_M1A15       DMA1_C3M1ARH_bit.M1A15


#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA0 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA0
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA1 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA1
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA2 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA2
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA3 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA3
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA4 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA4
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA5 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA5
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA6 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA6
#define DMA1_C3PARL_C3M1ARL_MEM_CLR_PA7 DMA1_C3PARL_C3M1ARL_bit.mem_clr.PA7
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A0 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A0
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A1 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A1
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A2 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A2
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A3 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A3
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A4 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A4
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A5 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A5
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A6 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A6
#define DMA1_C3PARL_C3M1ARL_MEM_SET_M1A7 DMA1_C3PARL_C3M1ARL_bit.mem_set.M1A7

/* Bit field aliases for DMA1_C3PARL_C3M1ARL.mem_clr */
#define DMA1_C3PARL_PA0          DMA1_C3PARL_bit.PA0
#define DMA1_C3PARL_PA1          DMA1_C3PARL_bit.PA1
#define DMA1_C3PARL_PA2          DMA1_C3PARL_bit.PA2
#define DMA1_C3PARL_PA3          DMA1_C3PARL_bit.PA3
#define DMA1_C3PARL_PA4          DMA1_C3PARL_bit.PA4
#define DMA1_C3PARL_PA5          DMA1_C3PARL_bit.PA5
#define DMA1_C3PARL_PA6          DMA1_C3PARL_bit.PA6
#define DMA1_C3PARL_PA7          DMA1_C3PARL_bit.PA7


/* Bit field aliases for DMA1_C3PARL_C3M1ARL.mem_set */
#define DMA1_C3M1ARL_M1A0        DMA1_C3M1ARL_bit.M1A0
#define DMA1_C3M1ARL_M1A1        DMA1_C3M1ARL_bit.M1A1
#define DMA1_C3M1ARL_M1A2        DMA1_C3M1ARL_bit.M1A2
#define DMA1_C3M1ARL_M1A3        DMA1_C3M1ARL_bit.M1A3
#define DMA1_C3M1ARL_M1A4        DMA1_C3M1ARL_bit.M1A4
#define DMA1_C3M1ARL_M1A5        DMA1_C3M1ARL_bit.M1A5
#define DMA1_C3M1ARL_M1A6        DMA1_C3M1ARL_bit.M1A6
#define DMA1_C3M1ARL_M1A7        DMA1_C3M1ARL_bit.M1A7


#define DMA1_C3M0ARH_M0A8        DMA1_C3M0ARH_bit.M0A8
#define DMA1_C3M0ARH_M0A9        DMA1_C3M0ARH_bit.M0A9
#define DMA1_C3M0ARH_M0A10       DMA1_C3M0ARH_bit.M0A10
#define DMA1_C3M0ARH_M0A11       DMA1_C3M0ARH_bit.M0A11
#define DMA1_C3M0ARH_M0A12       DMA1_C3M0ARH_bit.M0A12
#define DMA1_C3M0ARH_M0A13       DMA1_C3M0ARH_bit.M0A13
#define DMA1_C3M0ARH_M0A14       DMA1_C3M0ARH_bit.M0A14
#define DMA1_C3M0ARH_M0A15       DMA1_C3M0ARH_bit.M0A15

#define DMA1_C3M0ARL_M0A0        DMA1_C3M0ARL_bit.M0A0
#define DMA1_C3M0ARL_M0A1        DMA1_C3M0ARL_bit.M0A1
#define DMA1_C3M0ARL_M0A2        DMA1_C3M0ARL_bit.M0A2
#define DMA1_C3M0ARL_M0A3        DMA1_C3M0ARL_bit.M0A3
#define DMA1_C3M0ARL_M0A4        DMA1_C3M0ARL_bit.M0A4
#define DMA1_C3M0ARL_M0A5        DMA1_C3M0ARL_bit.M0A5
#define DMA1_C3M0ARL_M0A6        DMA1_C3M0ARL_bit.M0A6
#define DMA1_C3M0ARL_M0A7        DMA1_C3M0ARL_bit.M0A7

#endif

/*-------------------------------------------------------------------------
 *      DMA1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_DMA1_GCSR_GEN       0x01
#define MASK_DMA1_GCSR_GB        0x02
#define MASK_DMA1_GCSR_TO        0xFC

#define MASK_DMA1_GIR1_IFC0      0x01
#define MASK_DMA1_GIR1_IFC1      0x02
#define MASK_DMA1_GIR1_IFC2      0x04
#define MASK_DMA1_GIR1_IFC3      0x08

#define MASK_DMA1_C0CR_EN        0x01
#define MASK_DMA1_C0CR_TCIE      0x02
#define MASK_DMA1_C0CR_HTIE      0x04
#define MASK_DMA1_C0CR_DIR       0x08
#define MASK_DMA1_C0CR_CIRC      0x10
#define MASK_DMA1_C0CR_MINCDEC   0x20

#define MASK_DMA1_C0SPR_TCIF     0x02
#define MASK_DMA1_C0SPR_HTIF     0x04
#define MASK_DMA1_C0SPR_TSIZE    0x08
#define MASK_DMA1_C0SPR_PL0      0x10
#define MASK_DMA1_C0SPR_PL1      0x20
#define MASK_DMA1_C0SPR_PEND     0x40
#define MASK_DMA1_C0SPR_BUSY     0x80

#define MASK_DMA1_C0NDTR_NDT0    0x01
#define MASK_DMA1_C0NDTR_NDT1    0x02
#define MASK_DMA1_C0NDTR_NDT2    0x04
#define MASK_DMA1_C0NDTR_NDT3    0x08
#define MASK_DMA1_C0NDTR_NDT4    0x10
#define MASK_DMA1_C0NDTR_NDT5    0x20
#define MASK_DMA1_C0NDTR_NDT6    0x40
#define MASK_DMA1_C0NDTR_NDT7    0x80

#define MASK_DMA1_C0PARH_PA8     0x01
#define MASK_DMA1_C0PARH_PA9     0x02
#define MASK_DMA1_C0PARH_PA10    0x04
#define MASK_DMA1_C0PARH_PA11    0x08
#define MASK_DMA1_C0PARH_PA12    0x10
#define MASK_DMA1_C0PARH_PA13    0x20
#define MASK_DMA1_C0PARH_PA14    0x40
#define MASK_DMA1_C0PARH_PA15    0x80

#define MASK_DMA1_C0PARL_PA0     0x01
#define MASK_DMA1_C0PARL_PA1     0x02
#define MASK_DMA1_C0PARL_PA2     0x04
#define MASK_DMA1_C0PARL_PA3     0x08
#define MASK_DMA1_C0PARL_PA4     0x10
#define MASK_DMA1_C0PARL_PA5     0x20
#define MASK_DMA1_C0PARL_PA6     0x40
#define MASK_DMA1_C0PARL_PA7     0x80

#define MASK_DMA1_C0M0ARH_M0A8   0x01
#define MASK_DMA1_C0M0ARH_M0A9   0x02
#define MASK_DMA1_C0M0ARH_M0A10  0x04
#define MASK_DMA1_C0M0ARH_M0A11  0x08
#define MASK_DMA1_C0M0ARH_M0A12  0x10
#define MASK_DMA1_C0M0ARH_M0A13  0x20
#define MASK_DMA1_C0M0ARH_M0A14  0x40
#define MASK_DMA1_C0M0ARH_M0A15  0x80

#define MASK_DMA1_C0M0ARL_M0A0   0x01
#define MASK_DMA1_C0M0ARL_M0A1   0x02
#define MASK_DMA1_C0M0ARL_M0A2   0x04
#define MASK_DMA1_C0M0ARL_M0A3   0x08
#define MASK_DMA1_C0M0ARL_M0A4   0x10
#define MASK_DMA1_C0M0ARL_M0A5   0x20
#define MASK_DMA1_C0M0ARL_M0A6   0x40
#define MASK_DMA1_C0M0ARL_M0A7   0x80

#define MASK_DMA1_C1CR_EN        0x01
#define MASK_DMA1_C1CR_TCIE      0x02
#define MASK_DMA1_C1CR_HTIE      0x04
#define MASK_DMA1_C1CR_DIR       0x08
#define MASK_DMA1_C1CR_CIRC      0x10
#define MASK_DMA1_C1CR_MINCDEC   0x20

#define MASK_DMA1_C1SPR_TCIF     0x02
#define MASK_DMA1_C1SPR_HTIF     0x04
#define MASK_DMA1_C1SPR_TSIZE    0x08
#define MASK_DMA1_C1SPR_PL0      0x10
#define MASK_DMA1_C1SPR_PL1      0x20
#define MASK_DMA1_C1SPR_PEND     0x40
#define MASK_DMA1_C1SPR_BUSY     0x80

#define MASK_DMA1_C1NDTR_NDT0    0x01
#define MASK_DMA1_C1NDTR_NDT1    0x02
#define MASK_DMA1_C1NDTR_NDT2    0x04
#define MASK_DMA1_C1NDTR_NDT3    0x08
#define MASK_DMA1_C1NDTR_NDT4    0x10
#define MASK_DMA1_C1NDTR_NDT5    0x20
#define MASK_DMA1_C1NDTR_NDT6    0x40
#define MASK_DMA1_C1NDTR_NDT7    0x80

#define MASK_DMA1_C1PARH_PA8     0x01
#define MASK_DMA1_C1PARH_PA9     0x02
#define MASK_DMA1_C1PARH_PA10    0x04
#define MASK_DMA1_C1PARH_PA11    0x08
#define MASK_DMA1_C1PARH_PA12    0x10
#define MASK_DMA1_C1PARH_PA13    0x20
#define MASK_DMA1_C1PARH_PA14    0x40
#define MASK_DMA1_C1PARH_PA15    0x80

#define MASK_DMA1_C1PARL_PA0     0x01
#define MASK_DMA1_C1PARL_PA1     0x02
#define MASK_DMA1_C1PARL_PA2     0x04
#define MASK_DMA1_C1PARL_PA3     0x08
#define MASK_DMA1_C1PARL_PA4     0x10
#define MASK_DMA1_C1PARL_PA5     0x20
#define MASK_DMA1_C1PARL_PA6     0x40
#define MASK_DMA1_C1PARL_PA7     0x80

#define MASK_DMA1_C1M0ARH_M0A8   0x01
#define MASK_DMA1_C1M0ARH_M0A9   0x02
#define MASK_DMA1_C1M0ARH_M0A10  0x04
#define MASK_DMA1_C1M0ARH_M0A11  0x08
#define MASK_DMA1_C1M0ARH_M0A12  0x10
#define MASK_DMA1_C1M0ARH_M0A13  0x20
#define MASK_DMA1_C1M0ARH_M0A14  0x40
#define MASK_DMA1_C1M0ARH_M0A15  0x80

#define MASK_DMA1_C1M0ARL_M0A0   0x01
#define MASK_DMA1_C1M0ARL_M0A1   0x02
#define MASK_DMA1_C1M0ARL_M0A2   0x04
#define MASK_DMA1_C1M0ARL_M0A3   0x08
#define MASK_DMA1_C1M0ARL_M0A4   0x10
#define MASK_DMA1_C1M0ARL_M0A5   0x20
#define MASK_DMA1_C1M0ARL_M0A6   0x40
#define MASK_DMA1_C1M0ARL_M0A7   0x80

#define MASK_DMA1_C2CR_EN        0x01
#define MASK_DMA1_C2CR_TCIE      0x02
#define MASK_DMA1_C2CR_HTIE      0x04
#define MASK_DMA1_C2CR_DIR       0x08
#define MASK_DMA1_C2CR_CIRC      0x10
#define MASK_DMA1_C2CR_MINCDEC   0x20

#define MASK_DMA1_C2SPR_TCIF     0x02
#define MASK_DMA1_C2SPR_HTIF     0x04
#define MASK_DMA1_C2SPR_TSIZE    0x08
#define MASK_DMA1_C2SPR_PL0      0x10
#define MASK_DMA1_C2SPR_PL1      0x20
#define MASK_DMA1_C2SPR_PEND     0x40
#define MASK_DMA1_C2SPR_BUSY     0x80

#define MASK_DMA1_C2NDTR_NDT0    0x01
#define MASK_DMA1_C2NDTR_NDT1    0x02
#define MASK_DMA1_C2NDTR_NDT2    0x04
#define MASK_DMA1_C2NDTR_NDT3    0x08
#define MASK_DMA1_C2NDTR_NDT4    0x10
#define MASK_DMA1_C2NDTR_NDT5    0x20
#define MASK_DMA1_C2NDTR_NDT6    0x40
#define MASK_DMA1_C2NDTR_NDT7    0x80

#define MASK_DMA1_C2PARH_PA8     0x01
#define MASK_DMA1_C2PARH_PA9     0x02
#define MASK_DMA1_C2PARH_PA10    0x04
#define MASK_DMA1_C2PARH_PA11    0x08
#define MASK_DMA1_C2PARH_PA12    0x10
#define MASK_DMA1_C2PARH_PA13    0x20
#define MASK_DMA1_C2PARH_PA14    0x40
#define MASK_DMA1_C2PARH_PA15    0x80

#define MASK_DMA1_C2PARL_PA0     0x01
#define MASK_DMA1_C2PARL_PA1     0x02
#define MASK_DMA1_C2PARL_PA2     0x04
#define MASK_DMA1_C2PARL_PA3     0x08
#define MASK_DMA1_C2PARL_PA4     0x10
#define MASK_DMA1_C2PARL_PA5     0x20
#define MASK_DMA1_C2PARL_PA6     0x40
#define MASK_DMA1_C2PARL_PA7     0x80

#define MASK_DMA1_C2M0ARH_M0A8   0x01
#define MASK_DMA1_C2M0ARH_M0A9   0x02
#define MASK_DMA1_C2M0ARH_M0A10  0x04
#define MASK_DMA1_C2M0ARH_M0A11  0x08
#define MASK_DMA1_C2M0ARH_M0A12  0x10
#define MASK_DMA1_C2M0ARH_M0A13  0x20
#define MASK_DMA1_C2M0ARH_M0A14  0x40
#define MASK_DMA1_C2M0ARH_M0A15  0x80

#define MASK_DMA1_C2M0ARL_M0A0   0x01
#define MASK_DMA1_C2M0ARL_M0A1   0x02
#define MASK_DMA1_C2M0ARL_M0A2   0x04
#define MASK_DMA1_C2M0ARL_M0A3   0x08
#define MASK_DMA1_C2M0ARL_M0A4   0x10
#define MASK_DMA1_C2M0ARL_M0A5   0x20
#define MASK_DMA1_C2M0ARL_M0A6   0x40
#define MASK_DMA1_C2M0ARL_M0A7   0x80

#define MASK_DMA1_C3CR_EN        0x01
#define MASK_DMA1_C3CR_TCIE      0x02
#define MASK_DMA1_C3CR_HTIE      0x04
#define MASK_DMA1_C3CR_DIR       0x08
#define MASK_DMA1_C3CR_CIRC      0x10
#define MASK_DMA1_C3CR_MINCDEC   0x20
#define MASK_DMA1_C3CR_MEM       0x40

#define MASK_DMA1_C3SPR_TCIF     0x02
#define MASK_DMA1_C3SPR_HTIF     0x04
#define MASK_DMA1_C3SPR_TSIZE    0x08
#define MASK_DMA1_C3SPR_PL0      0x10
#define MASK_DMA1_C3SPR_PL1      0x20
#define MASK_DMA1_C3SPR_PEND     0x40
#define MASK_DMA1_C3SPR_BUSY     0x80

#define MASK_DMA1_C3NDTR_NDT0    0x01
#define MASK_DMA1_C3NDTR_NDT1    0x02
#define MASK_DMA1_C3NDTR_NDT2    0x04
#define MASK_DMA1_C3NDTR_NDT3    0x08
#define MASK_DMA1_C3NDTR_NDT4    0x10
#define MASK_DMA1_C3NDTR_NDT5    0x20
#define MASK_DMA1_C3NDTR_NDT6    0x40
#define MASK_DMA1_C3NDTR_NDT7    0x80

#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA8 0x01
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA9 0x02
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA10 0x04
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA11 0x08
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA12 0x10
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA13 0x20
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA14 0x40
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_CLR_PA15 0x80
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A8 0x01
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A9 0x02
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A10 0x04
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A11 0x08
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A12 0x10
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A13 0x20
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A14 0x40
#define MASK_DMA1_C3PARH_C3M1ARH_MEM_SET_M1A15 0x80

/* Bit mask aliases for DMA1_C3PARH_C3M1ARH.mem_clr */
#define MASK_DMA1_C3PARH_PA8     0x01
#define MASK_DMA1_C3PARH_PA9     0x02
#define MASK_DMA1_C3PARH_PA10    0x04
#define MASK_DMA1_C3PARH_PA11    0x08
#define MASK_DMA1_C3PARH_PA12    0x10
#define MASK_DMA1_C3PARH_PA13    0x20
#define MASK_DMA1_C3PARH_PA14    0x40
#define MASK_DMA1_C3PARH_PA15    0x80


/* Bit mask aliases for DMA1_C3PARH_C3M1ARH.mem_set */
#define MASK_DMA1_C3M1ARH_M1A8   0x01
#define MASK_DMA1_C3M1ARH_M1A9   0x02
#define MASK_DMA1_C3M1ARH_M1A10  0x04
#define MASK_DMA1_C3M1ARH_M1A11  0x08
#define MASK_DMA1_C3M1ARH_M1A12  0x10
#define MASK_DMA1_C3M1ARH_M1A13  0x20
#define MASK_DMA1_C3M1ARH_M1A14  0x40
#define MASK_DMA1_C3M1ARH_M1A15  0x80


#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA0 0x01
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA1 0x02
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA2 0x04
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA3 0x08
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA4 0x10
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA5 0x20
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA6 0x40
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_CLR_PA7 0x80
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A0 0x01
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A1 0x02
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A2 0x04
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A3 0x08
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A4 0x10
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A5 0x20
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A6 0x40
#define MASK_DMA1_C3PARL_C3M1ARL_MEM_SET_M1A7 0x80

/* Bit mask aliases for DMA1_C3PARL_C3M1ARL.mem_clr */
#define MASK_DMA1_C3PARL_PA0     0x01
#define MASK_DMA1_C3PARL_PA1     0x02
#define MASK_DMA1_C3PARL_PA2     0x04
#define MASK_DMA1_C3PARL_PA3     0x08
#define MASK_DMA1_C3PARL_PA4     0x10
#define MASK_DMA1_C3PARL_PA5     0x20
#define MASK_DMA1_C3PARL_PA6     0x40
#define MASK_DMA1_C3PARL_PA7     0x80


/* Bit mask aliases for DMA1_C3PARL_C3M1ARL.mem_set */
#define MASK_DMA1_C3M1ARL_M1A0   0x01
#define MASK_DMA1_C3M1ARL_M1A1   0x02
#define MASK_DMA1_C3M1ARL_M1A2   0x04
#define MASK_DMA1_C3M1ARL_M1A3   0x08
#define MASK_DMA1_C3M1ARL_M1A4   0x10
#define MASK_DMA1_C3M1ARL_M1A5   0x20
#define MASK_DMA1_C3M1ARL_M1A6   0x40
#define MASK_DMA1_C3M1ARL_M1A7   0x80


#define MASK_DMA1_C3M0ARH_M0A8   0x01
#define MASK_DMA1_C3M0ARH_M0A9   0x02
#define MASK_DMA1_C3M0ARH_M0A10  0x04
#define MASK_DMA1_C3M0ARH_M0A11  0x08
#define MASK_DMA1_C3M0ARH_M0A12  0x10
#define MASK_DMA1_C3M0ARH_M0A13  0x20
#define MASK_DMA1_C3M0ARH_M0A14  0x40
#define MASK_DMA1_C3M0ARH_M0A15  0x80

#define MASK_DMA1_C3M0ARL_M0A0   0x01
#define MASK_DMA1_C3M0ARL_M0A1   0x02
#define MASK_DMA1_C3M0ARL_M0A2   0x04
#define MASK_DMA1_C3M0ARL_M0A3   0x08
#define MASK_DMA1_C3M0ARL_M0A4   0x10
#define MASK_DMA1_C3M0ARL_M0A5   0x20
#define MASK_DMA1_C3M0ARL_M0A6   0x40
#define MASK_DMA1_C3M0ARL_M0A7   0x80


/*-------------------------------------------------------------------------
 *      REMAP register definitions
 *-----------------------------------------------------------------------*/
/* Remapping register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADC1DMA_REMAP: 2;
  unsigned char TIM4DMA_REMAP: 2;
  unsigned char USART1TR_REMAP: 2;
  unsigned char USART1CK_REMAP: 1;
  unsigned char SPI1_REMAP  : 1;
} __BITS_SYSCFG_RMPCR1;
#endif
__IO_REG8_BIT(SYSCFG_RMPCR1, 0x509E, __READ_WRITE, __BITS_SYSCFG_RMPCR1);

/* Remapping register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADC1TRIG_REMAP: 1;
  unsigned char TIM2TRIG_REMAP: 1;
  unsigned char TIM3TRIG_REMAP: 1;
  unsigned char TIM2TRIGLSE_REMAP: 1;
  unsigned char TIM3TRIGLSE_REMAP: 1;
} __BITS_SYSCFG_RMPCR2;
#endif
__IO_REG8_BIT(SYSCFG_RMPCR2, 0x509F, __READ_WRITE, __BITS_SYSCFG_RMPCR2);


/*-------------------------------------------------------------------------
 *      REMAP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SYSCFG_RMPCR1_ADC1DMA_REMAP SYSCFG_RMPCR1_bit.ADC1DMA_REMAP
#define SYSCFG_RMPCR1_TIM4DMA_REMAP SYSCFG_RMPCR1_bit.TIM4DMA_REMAP
#define SYSCFG_RMPCR1_USART1TR_REMAP SYSCFG_RMPCR1_bit.USART1TR_REMAP
#define SYSCFG_RMPCR1_USART1CK_REMAP SYSCFG_RMPCR1_bit.USART1CK_REMAP
#define SYSCFG_RMPCR1_SPI1_REMAP SYSCFG_RMPCR1_bit.SPI1_REMAP

#define SYSCFG_RMPCR2_ADC1TRIG_REMAP SYSCFG_RMPCR2_bit.ADC1TRIG_REMAP
#define SYSCFG_RMPCR2_TIM2TRIG_REMAP SYSCFG_RMPCR2_bit.TIM2TRIG_REMAP
#define SYSCFG_RMPCR2_TIM3TRIG_REMAP SYSCFG_RMPCR2_bit.TIM3TRIG_REMAP
#define SYSCFG_RMPCR2_TIM2TRIGLSE_REMAP SYSCFG_RMPCR2_bit.TIM2TRIGLSE_REMAP
#define SYSCFG_RMPCR2_TIM3TRIGLSE_REMAP SYSCFG_RMPCR2_bit.TIM3TRIGLSE_REMAP

#endif

/*-------------------------------------------------------------------------
 *      REMAP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SYSCFG_RMPCR1_ADC1DMA_REMAP 0x03
#define MASK_SYSCFG_RMPCR1_TIM4DMA_REMAP 0x0C
#define MASK_SYSCFG_RMPCR1_USART1TR_REMAP 0x30
#define MASK_SYSCFG_RMPCR1_USART1CK_REMAP 0x40
#define MASK_SYSCFG_RMPCR1_SPI1_REMAP 0x80

#define MASK_SYSCFG_RMPCR2_ADC1TRIG_REMAP 0x01
#define MASK_SYSCFG_RMPCR2_TIM2TRIG_REMAP 0x02
#define MASK_SYSCFG_RMPCR2_TIM3TRIG_REMAP 0x04
#define MASK_SYSCFG_RMPCR2_TIM2TRIGLSE_REMAP 0x08
#define MASK_SYSCFG_RMPCR2_TIM3TRIGLSE_REMAP 0x10


/*-------------------------------------------------------------------------
 *      ITC - EXTI register definitions
 *-----------------------------------------------------------------------*/
/* External interrupt control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0IS        : 2;
  unsigned char P1IS        : 2;
  unsigned char P2IS        : 2;
  unsigned char P3IS        : 2;
} __BITS_EXTI_CR1;
#endif
__IO_REG8_BIT(EXTI_CR1,    0x50A0, __READ_WRITE, __BITS_EXTI_CR1);

/* External interrupt control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P4IS        : 2;
  unsigned char P5IS        : 2;
  unsigned char P6IS        : 2;
  unsigned char P7IS        : 2;
} __BITS_EXTI_CR2;
#endif
__IO_REG8_BIT(EXTI_CR2,    0x50A1, __READ_WRITE, __BITS_EXTI_CR2);

/* External interrupt control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBIS        : 2;
  unsigned char PDIS        : 2;
  unsigned char PEIS        : 2;
  unsigned char PFIS        : 2;
} __BITS_EXTI_CR3;
#endif
__IO_REG8_BIT(EXTI_CR3,    0x50A2, __READ_WRITE, __BITS_EXTI_CR3);

/* External interrupt status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char P0F         : 1;
  unsigned char P1F         : 1;
  unsigned char P2F         : 1;
  unsigned char P3F         : 1;
  unsigned char P4F         : 1;
  unsigned char P5F         : 1;
  unsigned char P6F         : 1;
  unsigned char P7F         : 1;
} __BITS_EXTI_SR1;
#endif
__IO_REG8_BIT(EXTI_SR1,    0x50A3, __READ_WRITE, __BITS_EXTI_SR1);

/* External interrupt status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBF         : 1;
  unsigned char PDF         : 1;
  unsigned char PEF         : 1;
  unsigned char PFF         : 1;
} __BITS_EXTI_SR2;
#endif
__IO_REG8_BIT(EXTI_SR2,    0x50A4, __READ_WRITE, __BITS_EXTI_SR2);

/* External interrupt port select register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PBLIS       : 1;
  unsigned char PBHIS       : 1;
  unsigned char PDLIS       : 1;
  unsigned char PDHIS       : 1;
  unsigned char PELIS       : 1;
  unsigned char PEHIS       : 1;
  unsigned char PFLIS       : 1;
  unsigned char PFES        : 1;
} __BITS_EXTI_CONF;
#endif
__IO_REG8_BIT(EXTI_CONF,   0x50A5, __READ_WRITE, __BITS_EXTI_CONF);


/*-------------------------------------------------------------------------
 *      ITC - EXTI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define EXTI_CR1_P0IS            EXTI_CR1_bit.P0IS
#define EXTI_CR1_P1IS            EXTI_CR1_bit.P1IS
#define EXTI_CR1_P2IS            EXTI_CR1_bit.P2IS
#define EXTI_CR1_P3IS            EXTI_CR1_bit.P3IS

#define EXTI_CR2_P4IS            EXTI_CR2_bit.P4IS
#define EXTI_CR2_P5IS            EXTI_CR2_bit.P5IS
#define EXTI_CR2_P6IS            EXTI_CR2_bit.P6IS
#define EXTI_CR2_P7IS            EXTI_CR2_bit.P7IS

#define EXTI_CR3_PBIS            EXTI_CR3_bit.PBIS
#define EXTI_CR3_PDIS            EXTI_CR3_bit.PDIS
#define EXTI_CR3_PEIS            EXTI_CR3_bit.PEIS
#define EXTI_CR3_PFIS            EXTI_CR3_bit.PFIS

#define EXTI_SR1_P0F             EXTI_SR1_bit.P0F
#define EXTI_SR1_P1F             EXTI_SR1_bit.P1F
#define EXTI_SR1_P2F             EXTI_SR1_bit.P2F
#define EXTI_SR1_P3F             EXTI_SR1_bit.P3F
#define EXTI_SR1_P4F             EXTI_SR1_bit.P4F
#define EXTI_SR1_P5F             EXTI_SR1_bit.P5F
#define EXTI_SR1_P6F             EXTI_SR1_bit.P6F
#define EXTI_SR1_P7F             EXTI_SR1_bit.P7F

#define EXTI_SR2_PBF             EXTI_SR2_bit.PBF
#define EXTI_SR2_PDF             EXTI_SR2_bit.PDF
#define EXTI_SR2_PEF             EXTI_SR2_bit.PEF
#define EXTI_SR2_PFF             EXTI_SR2_bit.PFF

#define EXTI_CONF_PBLIS          EXTI_CONF_bit.PBLIS
#define EXTI_CONF_PBHIS          EXTI_CONF_bit.PBHIS
#define EXTI_CONF_PDLIS          EXTI_CONF_bit.PDLIS
#define EXTI_CONF_PDHIS          EXTI_CONF_bit.PDHIS
#define EXTI_CONF_PELIS          EXTI_CONF_bit.PELIS
#define EXTI_CONF_PEHIS          EXTI_CONF_bit.PEHIS
#define EXTI_CONF_PFLIS          EXTI_CONF_bit.PFLIS
#define EXTI_CONF_PFES           EXTI_CONF_bit.PFES

#endif

/*-------------------------------------------------------------------------
 *      ITC - EXTI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_EXTI_CR1_P0IS       0x03
#define MASK_EXTI_CR1_P1IS       0x0C
#define MASK_EXTI_CR1_P2IS       0x30
#define MASK_EXTI_CR1_P3IS       0xC0

#define MASK_EXTI_CR2_P4IS       0x03
#define MASK_EXTI_CR2_P5IS       0x0C
#define MASK_EXTI_CR2_P6IS       0x30
#define MASK_EXTI_CR2_P7IS       0xC0

#define MASK_EXTI_CR3_PBIS       0x03
#define MASK_EXTI_CR3_PDIS       0x0C
#define MASK_EXTI_CR3_PEIS       0x30
#define MASK_EXTI_CR3_PFIS       0xC0

#define MASK_EXTI_SR1_P0F        0x01
#define MASK_EXTI_SR1_P1F        0x02
#define MASK_EXTI_SR1_P2F        0x04
#define MASK_EXTI_SR1_P3F        0x08
#define MASK_EXTI_SR1_P4F        0x10
#define MASK_EXTI_SR1_P5F        0x20
#define MASK_EXTI_SR1_P6F        0x40
#define MASK_EXTI_SR1_P7F        0x80

#define MASK_EXTI_SR2_PBF        0x01
#define MASK_EXTI_SR2_PDF        0x02
#define MASK_EXTI_SR2_PEF        0x04
#define MASK_EXTI_SR2_PFF        0x08

#define MASK_EXTI_CONF_PBLIS     0x01
#define MASK_EXTI_CONF_PBHIS     0x02
#define MASK_EXTI_CONF_PDLIS     0x04
#define MASK_EXTI_CONF_PDHIS     0x08
#define MASK_EXTI_CONF_PELIS     0x10
#define MASK_EXTI_CONF_PEHIS     0x20
#define MASK_EXTI_CONF_PFLIS     0x40
#define MASK_EXTI_CONF_PFES      0x80


/*-------------------------------------------------------------------------
 *      WFE register definitions
 *-----------------------------------------------------------------------*/
/* WFE control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM2_EV0    : 1;
  unsigned char TIM2_EV1    : 1;
  unsigned char TIM1_EV0    : 1;
  unsigned char TIM1_EV1    : 1;
  unsigned char EXTI_EV0    : 1;
  unsigned char EXTI_EV1    : 1;
  unsigned char EXTI_EV2    : 1;
  unsigned char EXTI_EV3    : 1;
} __BITS_WFE_CR1;
#endif
__IO_REG8_BIT(WFE_CR1,     0x50A6, __READ_WRITE, __BITS_WFE_CR1);

/* WFE control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EXTI_EV4    : 1;
  unsigned char EXTI_EV5    : 1;
  unsigned char EXTI_EV6    : 1;
  unsigned char EXTI_EV7    : 1;
  unsigned char EXTI_EVB    : 1;
  unsigned char EXTI_EVD    : 1;
  unsigned char EXTI_EVF    : 1;
  unsigned char ADC1_COMP_EV: 1;
} __BITS_WFE_CR2;
#endif
__IO_REG8_BIT(WFE_CR2,     0x50A7, __READ_WRITE, __BITS_WFE_CR2);

/* WFE control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TIM3_EV0    : 1;
  unsigned char TIM3_EV1    : 1;
  unsigned char TIM4_EV     : 1;
  unsigned char SPI1_EV     : 1;
  unsigned char I2C1_EV     : 1;
  unsigned char USART1_EV   : 1;
  unsigned char DMA1CH01_EV : 1;
  unsigned char DMA1CH23_EV : 1;
} __BITS_WFE_CR3;
#endif
__IO_REG8_BIT(WFE_CR3,     0x50A8, __READ_WRITE, __BITS_WFE_CR3);


/*-------------------------------------------------------------------------
 *      WFE bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WFE_CR1_TIM2_EV0         WFE_CR1_bit.TIM2_EV0
#define WFE_CR1_TIM2_EV1         WFE_CR1_bit.TIM2_EV1
#define WFE_CR1_TIM1_EV0         WFE_CR1_bit.TIM1_EV0
#define WFE_CR1_TIM1_EV1         WFE_CR1_bit.TIM1_EV1
#define WFE_CR1_EXTI_EV0         WFE_CR1_bit.EXTI_EV0
#define WFE_CR1_EXTI_EV1         WFE_CR1_bit.EXTI_EV1
#define WFE_CR1_EXTI_EV2         WFE_CR1_bit.EXTI_EV2
#define WFE_CR1_EXTI_EV3         WFE_CR1_bit.EXTI_EV3

#define WFE_CR2_EXTI_EV4         WFE_CR2_bit.EXTI_EV4
#define WFE_CR2_EXTI_EV5         WFE_CR2_bit.EXTI_EV5
#define WFE_CR2_EXTI_EV6         WFE_CR2_bit.EXTI_EV6
#define WFE_CR2_EXTI_EV7         WFE_CR2_bit.EXTI_EV7
#define WFE_CR2_EXTI_EVB         WFE_CR2_bit.EXTI_EVB
#define WFE_CR2_EXTI_EVD         WFE_CR2_bit.EXTI_EVD
#define WFE_CR2_EXTI_EVF         WFE_CR2_bit.EXTI_EVF
#define WFE_CR2_ADC1_COMP_EV     WFE_CR2_bit.ADC1_COMP_EV

#define WFE_CR3_TIM3_EV0         WFE_CR3_bit.TIM3_EV0
#define WFE_CR3_TIM3_EV1         WFE_CR3_bit.TIM3_EV1
#define WFE_CR3_TIM4_EV          WFE_CR3_bit.TIM4_EV
#define WFE_CR3_SPI1_EV          WFE_CR3_bit.SPI1_EV
#define WFE_CR3_I2C1_EV          WFE_CR3_bit.I2C1_EV
#define WFE_CR3_USART1_EV        WFE_CR3_bit.USART1_EV
#define WFE_CR3_DMA1CH01_EV      WFE_CR3_bit.DMA1CH01_EV
#define WFE_CR3_DMA1CH23_EV      WFE_CR3_bit.DMA1CH23_EV

#endif

/*-------------------------------------------------------------------------
 *      WFE bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WFE_CR1_TIM2_EV0    0x01
#define MASK_WFE_CR1_TIM2_EV1    0x02
#define MASK_WFE_CR1_TIM1_EV0    0x04
#define MASK_WFE_CR1_TIM1_EV1    0x08
#define MASK_WFE_CR1_EXTI_EV0    0x10
#define MASK_WFE_CR1_EXTI_EV1    0x20
#define MASK_WFE_CR1_EXTI_EV2    0x40
#define MASK_WFE_CR1_EXTI_EV3    0x80

#define MASK_WFE_CR2_EXTI_EV4    0x01
#define MASK_WFE_CR2_EXTI_EV5    0x02
#define MASK_WFE_CR2_EXTI_EV6    0x04
#define MASK_WFE_CR2_EXTI_EV7    0x08
#define MASK_WFE_CR2_EXTI_EVB    0x10
#define MASK_WFE_CR2_EXTI_EVD    0x20
#define MASK_WFE_CR2_EXTI_EVF    0x40
#define MASK_WFE_CR2_ADC1_COMP_EV 0x80

#define MASK_WFE_CR3_TIM3_EV0    0x01
#define MASK_WFE_CR3_TIM3_EV1    0x02
#define MASK_WFE_CR3_TIM4_EV     0x04
#define MASK_WFE_CR3_SPI1_EV     0x08
#define MASK_WFE_CR3_I2C1_EV     0x10
#define MASK_WFE_CR3_USART1_EV   0x20
#define MASK_WFE_CR3_DMA1CH01_EV 0x40
#define MASK_WFE_CR3_DMA1CH23_EV 0x80


/*-------------------------------------------------------------------------
 *      RST register definitions
 *-----------------------------------------------------------------------*/
/* Reset control register */
__IO_REG8    (RST_CR,      0x50B0, __READ_WRITE);
/* Reset status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PORF        : 1;
  unsigned char IWDGF       : 1;
  unsigned char ILLOPF      : 1;
  unsigned char SWIMF       : 1;
  unsigned char WWDGF       : 1;
  unsigned char BORF        : 1;
} __BITS_RST_SR;
#endif
__IO_REG8_BIT(RST_SR,      0x50B1, __READ_WRITE, __BITS_RST_SR);


/*-------------------------------------------------------------------------
 *      RST bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RST_SR_PORF              RST_SR_bit.PORF
#define RST_SR_IWDGF             RST_SR_bit.IWDGF
#define RST_SR_ILLOPF            RST_SR_bit.ILLOPF
#define RST_SR_SWIMF             RST_SR_bit.SWIMF
#define RST_SR_WWDGF             RST_SR_bit.WWDGF
#define RST_SR_BORF              RST_SR_bit.BORF

#endif

/*-------------------------------------------------------------------------
 *      RST bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RST_SR_PORF         0x01
#define MASK_RST_SR_IWDGF        0x02
#define MASK_RST_SR_ILLOPF       0x04
#define MASK_RST_SR_SWIMF        0x08
#define MASK_RST_SR_WWDGF        0x10
#define MASK_RST_SR_BORF         0x20


/*-------------------------------------------------------------------------
 *      PWR register definitions
 *-----------------------------------------------------------------------*/
/* Power control and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PVDE        : 1;
  unsigned char PLS         : 3;
  unsigned char PVDIEN      : 1;
  unsigned char PVDIF       : 1;
  unsigned char PVDOF       : 1;
} __BITS_PWR_CSR1;
#endif
__IO_REG8_BIT(PWR_CSR1,    0x50B2, __READ_WRITE, __BITS_PWR_CSR1);

/* Power control and status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFINTF    : 1;
  unsigned char ULP         : 1;
  unsigned char FWU         : 1;
} __BITS_PWR_CSR2;
#endif
__IO_REG8_BIT(PWR_CSR2,    0x50B3, __READ_WRITE, __BITS_PWR_CSR2);


/*-------------------------------------------------------------------------
 *      PWR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define PWR_CSR1_PVDE            PWR_CSR1_bit.PVDE
#define PWR_CSR1_PLS             PWR_CSR1_bit.PLS
#define PWR_CSR1_PVDIEN          PWR_CSR1_bit.PVDIEN
#define PWR_CSR1_PVDIF           PWR_CSR1_bit.PVDIF
#define PWR_CSR1_PVDOF           PWR_CSR1_bit.PVDOF

#define PWR_CSR2_VREFINTF        PWR_CSR2_bit.VREFINTF
#define PWR_CSR2_ULP             PWR_CSR2_bit.ULP
#define PWR_CSR2_FWU             PWR_CSR2_bit.FWU

#endif

/*-------------------------------------------------------------------------
 *      PWR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_PWR_CSR1_PVDE       0x01
#define MASK_PWR_CSR1_PLS        0x0E
#define MASK_PWR_CSR1_PVDIEN     0x10
#define MASK_PWR_CSR1_PVDIF      0x20
#define MASK_PWR_CSR1_PVDOF      0x40

#define MASK_PWR_CSR2_VREFINTF   0x01
#define MASK_PWR_CSR2_ULP        0x02
#define MASK_PWR_CSR2_FWU        0x04


/*-------------------------------------------------------------------------
 *      CLK register definitions
 *-----------------------------------------------------------------------*/
/* Clock master divider register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CKM         : 3;
} __BITS_CLK_CKDIVR;
#endif
__IO_REG8_BIT(CLK_CKDIVR,  0x50C0, __READ_WRITE, __BITS_CLK_CKDIVR);

/* Clock RTC register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RTCSWBSY    : 1;
  unsigned char RTCSEL0     : 1;
  unsigned char RTCSEL1     : 1;
  unsigned char RTCSEL2     : 1;
  unsigned char RTCSEL3     : 1;
  unsigned char RTCDIV0     : 1;
  unsigned char RTCDIV1     : 1;
  unsigned char RTCDIV2     : 1;
} __BITS_CLK_CRTCR;
#endif
__IO_REG8_BIT(CLK_CRTCR,   0x50C1, __READ_WRITE, __BITS_CLK_CRTCR);

/* Internal clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSION       : 1;
  unsigned char HSIRDY      : 1;
  unsigned char LSION       : 1;
  unsigned char LSIRDY      : 1;
  unsigned char SAHALT      : 1;
  unsigned char FHWU        : 1;
  unsigned char BEEPAHALT   : 1;
} __BITS_CLK_ICKCR;
#endif
__IO_REG8_BIT(CLK_ICKCR,   0x50C2, __READ_WRITE, __BITS_CLK_ICKCR);

/* Peripheral clock gating register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PCKEN10     : 1;
  unsigned char PCKEN11     : 1;
  unsigned char PCKEN12     : 1;
  unsigned char PCKEN13     : 1;
  unsigned char PCKEN14     : 1;
  unsigned char PCKEN15     : 1;
  unsigned char PCKEN16     : 1;
  unsigned char PCKEN17     : 1;
} __BITS_CLK_PCKENR1;
#endif
__IO_REG8_BIT(CLK_PCKENR1, 0x50C3, __READ_WRITE, __BITS_CLK_PCKENR1);

/* Peripheral clock gating register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PCKEN20     : 1;
  unsigned char PCKEN21     : 1;
  unsigned char PCKEN22     : 1;
  unsigned char PCKEN23     : 1;
  unsigned char PCKEN24     : 1;
  unsigned char PCKEN25     : 1;
  unsigned char             : 1;
  unsigned char PCKEN27     : 1;
} __BITS_CLK_PCKENR2;
#endif
__IO_REG8_BIT(CLK_PCKENR2, 0x50C4, __READ_WRITE, __BITS_CLK_PCKENR2);

/* Configurable clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCOSWBSY    : 1;
  unsigned char CCOSEL      : 4;
  unsigned char CCODIV      : 3;
} __BITS_CLK_CCOR;
#endif
__IO_REG8_BIT(CLK_CCOR,    0x50C5, __READ_WRITE, __BITS_CLK_CCOR);

/* External clock control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HSEON       : 1;
  unsigned char HSERDY      : 1;
  unsigned char LSEON       : 1;
  unsigned char LSERDY      : 1;
  unsigned char HSEBYP      : 1;
  unsigned char LSEBYP      : 1;
} __BITS_CLK_ECKR;
#endif
__IO_REG8_BIT(CLK_ECKR,    0x50C6, __READ_WRITE, __BITS_CLK_ECKR);

/* Clock master status register */
__IO_REG8    (CLK_SCSR,    0x50C7, __READ_WRITE);
/* Clock master switch register */
__IO_REG8    (CLK_SWR,     0x50C8, __READ_WRITE);
/* Clock switch control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWBSY       : 1;
  unsigned char SWEN        : 1;
  unsigned char SWIEN       : 1;
  unsigned char SWIF        : 1;
} __BITS_CLK_SWCR;
#endif
__IO_REG8_BIT(CLK_SWCR,    0x50C9, __READ_WRITE, __BITS_CLK_SWCR);

/* Clock security system register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CSSEN       : 1;
  unsigned char AUX         : 1;
  unsigned char CSSDIE      : 1;
  unsigned char CSSD        : 1;
  unsigned char CSSDGON     : 1;
} __BITS_CLK_CSSR;
#endif
__IO_REG8_BIT(CLK_CSSR,    0x50CA, __READ_WRITE, __BITS_CLK_CSSR);

/* Clock BEEP register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPSWBSY   : 1;
  unsigned char CLKBEEPSEL0 : 1;
  unsigned char CLKBEEPSEL1 : 1;
} __BITS_CLK_CBEEPR;
#endif
__IO_REG8_BIT(CLK_CBEEPR,  0x50CB, __READ_WRITE, __BITS_CLK_CBEEPR);

/* HSI calibration register */
__IO_REG8    (CLK_HSICALR, 0x50CC, __READ);
/* HSI clock calibration trimming register */
__IO_REG8    (CLK_HSITRIMR, 0x50CD, __READ_WRITE);
/* HSI unlock register */
__IO_REG8    (CLK_HSIUNLCKR, 0x50CE, __READ_WRITE);
/* Main regulator control status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char REGREADY    : 1;
  unsigned char REGOFF      : 1;
  unsigned char HSIPD       : 1;
  unsigned char LSIPD       : 1;
  unsigned char HSEPD       : 1;
  unsigned char LSEPD       : 1;
  unsigned char EEBUSY      : 1;
  unsigned char EEREADY     : 1;
} __BITS_CLK_REGCSR;
#endif
__IO_REG8_BIT(CLK_REGCSR,  0x50CF, __READ_WRITE, __BITS_CLK_REGCSR);


/*-------------------------------------------------------------------------
 *      CLK bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CLK_CKDIVR_CKM           CLK_CKDIVR_bit.CKM

#define CLK_CRTCR_RTCSWBSY       CLK_CRTCR_bit.RTCSWBSY
#define CLK_CRTCR_RTCSEL0        CLK_CRTCR_bit.RTCSEL0
#define CLK_CRTCR_RTCSEL1        CLK_CRTCR_bit.RTCSEL1
#define CLK_CRTCR_RTCSEL2        CLK_CRTCR_bit.RTCSEL2
#define CLK_CRTCR_RTCSEL3        CLK_CRTCR_bit.RTCSEL3
#define CLK_CRTCR_RTCDIV0        CLK_CRTCR_bit.RTCDIV0
#define CLK_CRTCR_RTCDIV1        CLK_CRTCR_bit.RTCDIV1
#define CLK_CRTCR_RTCDIV2        CLK_CRTCR_bit.RTCDIV2

#define CLK_ICKCR_HSION          CLK_ICKCR_bit.HSION
#define CLK_ICKCR_HSIRDY         CLK_ICKCR_bit.HSIRDY
#define CLK_ICKCR_LSION          CLK_ICKCR_bit.LSION
#define CLK_ICKCR_LSIRDY         CLK_ICKCR_bit.LSIRDY
#define CLK_ICKCR_SAHALT         CLK_ICKCR_bit.SAHALT
#define CLK_ICKCR_FHWU           CLK_ICKCR_bit.FHWU
#define CLK_ICKCR_BEEPAHALT      CLK_ICKCR_bit.BEEPAHALT

#define CLK_PCKENR1_PCKEN10      CLK_PCKENR1_bit.PCKEN10
#define CLK_PCKENR1_PCKEN11      CLK_PCKENR1_bit.PCKEN11
#define CLK_PCKENR1_PCKEN12      CLK_PCKENR1_bit.PCKEN12
#define CLK_PCKENR1_PCKEN13      CLK_PCKENR1_bit.PCKEN13
#define CLK_PCKENR1_PCKEN14      CLK_PCKENR1_bit.PCKEN14
#define CLK_PCKENR1_PCKEN15      CLK_PCKENR1_bit.PCKEN15
#define CLK_PCKENR1_PCKEN16      CLK_PCKENR1_bit.PCKEN16
#define CLK_PCKENR1_PCKEN17      CLK_PCKENR1_bit.PCKEN17

#define CLK_PCKENR2_PCKEN20      CLK_PCKENR2_bit.PCKEN20
#define CLK_PCKENR2_PCKEN21      CLK_PCKENR2_bit.PCKEN21
#define CLK_PCKENR2_PCKEN22      CLK_PCKENR2_bit.PCKEN22
#define CLK_PCKENR2_PCKEN23      CLK_PCKENR2_bit.PCKEN23
#define CLK_PCKENR2_PCKEN24      CLK_PCKENR2_bit.PCKEN24
#define CLK_PCKENR2_PCKEN25      CLK_PCKENR2_bit.PCKEN25
#define CLK_PCKENR2_PCKEN27      CLK_PCKENR2_bit.PCKEN27

#define CLK_CCOR_CCOSWBSY        CLK_CCOR_bit.CCOSWBSY
#define CLK_CCOR_CCOSEL          CLK_CCOR_bit.CCOSEL
#define CLK_CCOR_CCODIV          CLK_CCOR_bit.CCODIV

#define CLK_ECKR_HSEON           CLK_ECKR_bit.HSEON
#define CLK_ECKR_HSERDY          CLK_ECKR_bit.HSERDY
#define CLK_ECKR_LSEON           CLK_ECKR_bit.LSEON
#define CLK_ECKR_LSERDY          CLK_ECKR_bit.LSERDY
#define CLK_ECKR_HSEBYP          CLK_ECKR_bit.HSEBYP
#define CLK_ECKR_LSEBYP          CLK_ECKR_bit.LSEBYP

#define CLK_SWCR_SWBSY           CLK_SWCR_bit.SWBSY
#define CLK_SWCR_SWEN            CLK_SWCR_bit.SWEN
#define CLK_SWCR_SWIEN           CLK_SWCR_bit.SWIEN
#define CLK_SWCR_SWIF            CLK_SWCR_bit.SWIF

#define CLK_CSSR_CSSEN           CLK_CSSR_bit.CSSEN
#define CLK_CSSR_AUX             CLK_CSSR_bit.AUX
#define CLK_CSSR_CSSDIE          CLK_CSSR_bit.CSSDIE
#define CLK_CSSR_CSSD            CLK_CSSR_bit.CSSD
#define CLK_CSSR_CSSDGON         CLK_CSSR_bit.CSSDGON

#define CLK_CBEEPR_BEEPSWBSY     CLK_CBEEPR_bit.BEEPSWBSY
#define CLK_CBEEPR_CLKBEEPSEL0   CLK_CBEEPR_bit.CLKBEEPSEL0
#define CLK_CBEEPR_CLKBEEPSEL1   CLK_CBEEPR_bit.CLKBEEPSEL1

#define CLK_REGCSR_REGREADY      CLK_REGCSR_bit.REGREADY
#define CLK_REGCSR_REGOFF        CLK_REGCSR_bit.REGOFF
#define CLK_REGCSR_HSIPD         CLK_REGCSR_bit.HSIPD
#define CLK_REGCSR_LSIPD         CLK_REGCSR_bit.LSIPD
#define CLK_REGCSR_HSEPD         CLK_REGCSR_bit.HSEPD
#define CLK_REGCSR_LSEPD         CLK_REGCSR_bit.LSEPD
#define CLK_REGCSR_EEBUSY        CLK_REGCSR_bit.EEBUSY
#define CLK_REGCSR_EEREADY       CLK_REGCSR_bit.EEREADY

#endif

/*-------------------------------------------------------------------------
 *      CLK bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CLK_CKDIVR_CKM      0x07

#define MASK_CLK_CRTCR_RTCSWBSY  0x01
#define MASK_CLK_CRTCR_RTCSEL0   0x02
#define MASK_CLK_CRTCR_RTCSEL1   0x04
#define MASK_CLK_CRTCR_RTCSEL2   0x08
#define MASK_CLK_CRTCR_RTCSEL3   0x10
#define MASK_CLK_CRTCR_RTCDIV0   0x20
#define MASK_CLK_CRTCR_RTCDIV1   0x40
#define MASK_CLK_CRTCR_RTCDIV2   0x80

#define MASK_CLK_ICKCR_HSION     0x01
#define MASK_CLK_ICKCR_HSIRDY    0x02
#define MASK_CLK_ICKCR_LSION     0x04
#define MASK_CLK_ICKCR_LSIRDY    0x08
#define MASK_CLK_ICKCR_SAHALT    0x10
#define MASK_CLK_ICKCR_FHWU      0x20
#define MASK_CLK_ICKCR_BEEPAHALT 0x40

#define MASK_CLK_PCKENR1_PCKEN10 0x01
#define MASK_CLK_PCKENR1_PCKEN11 0x02
#define MASK_CLK_PCKENR1_PCKEN12 0x04
#define MASK_CLK_PCKENR1_PCKEN13 0x08
#define MASK_CLK_PCKENR1_PCKEN14 0x10
#define MASK_CLK_PCKENR1_PCKEN15 0x20
#define MASK_CLK_PCKENR1_PCKEN16 0x40
#define MASK_CLK_PCKENR1_PCKEN17 0x80

#define MASK_CLK_PCKENR2_PCKEN20 0x01
#define MASK_CLK_PCKENR2_PCKEN21 0x02
#define MASK_CLK_PCKENR2_PCKEN22 0x04
#define MASK_CLK_PCKENR2_PCKEN23 0x08
#define MASK_CLK_PCKENR2_PCKEN24 0x10
#define MASK_CLK_PCKENR2_PCKEN25 0x20
#define MASK_CLK_PCKENR2_PCKEN27 0x80

#define MASK_CLK_CCOR_CCOSWBSY   0x01
#define MASK_CLK_CCOR_CCOSEL     0x1E
#define MASK_CLK_CCOR_CCODIV     0xE0

#define MASK_CLK_ECKR_HSEON      0x01
#define MASK_CLK_ECKR_HSERDY     0x02
#define MASK_CLK_ECKR_LSEON      0x04
#define MASK_CLK_ECKR_LSERDY     0x08
#define MASK_CLK_ECKR_HSEBYP     0x10
#define MASK_CLK_ECKR_LSEBYP     0x20

#define MASK_CLK_SWCR_SWBSY      0x01
#define MASK_CLK_SWCR_SWEN       0x02
#define MASK_CLK_SWCR_SWIEN      0x04
#define MASK_CLK_SWCR_SWIF       0x08

#define MASK_CLK_CSSR_CSSEN      0x01
#define MASK_CLK_CSSR_AUX        0x02
#define MASK_CLK_CSSR_CSSDIE     0x04
#define MASK_CLK_CSSR_CSSD       0x08
#define MASK_CLK_CSSR_CSSDGON    0x10

#define MASK_CLK_CBEEPR_BEEPSWBSY 0x01
#define MASK_CLK_CBEEPR_CLKBEEPSEL0 0x02
#define MASK_CLK_CBEEPR_CLKBEEPSEL1 0x04

#define MASK_CLK_REGCSR_REGREADY 0x01
#define MASK_CLK_REGCSR_REGOFF   0x02
#define MASK_CLK_REGCSR_HSIPD    0x04
#define MASK_CLK_REGCSR_LSIPD    0x08
#define MASK_CLK_REGCSR_HSEPD    0x10
#define MASK_CLK_REGCSR_LSEPD    0x20
#define MASK_CLK_REGCSR_EEBUSY   0x40
#define MASK_CLK_REGCSR_EEREADY  0x80


/*-------------------------------------------------------------------------
 *      WWDG register definitions
 *-----------------------------------------------------------------------*/
/* WWDG control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char T0          : 1;
  unsigned char T1          : 1;
  unsigned char T2          : 1;
  unsigned char T3          : 1;
  unsigned char T4          : 1;
  unsigned char T5          : 1;
  unsigned char T6          : 1;
  unsigned char T7          : 1;
} __BITS_WWDG_CR;
#endif
__IO_REG8_BIT(WWDG_CR,     0x50D3, __READ_WRITE, __BITS_WWDG_CR);

/* WWDR window register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char W0          : 1;
  unsigned char W1          : 1;
  unsigned char W2          : 1;
  unsigned char W3          : 1;
  unsigned char W4          : 1;
  unsigned char W5          : 1;
  unsigned char W6          : 1;
  unsigned char W7          : 1;
} __BITS_WWDG_WR;
#endif
__IO_REG8_BIT(WWDG_WR,     0x50D4, __READ_WRITE, __BITS_WWDG_WR);


/*-------------------------------------------------------------------------
 *      WWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define WWDG_CR_T0               WWDG_CR_bit.T0
#define WWDG_CR_T1               WWDG_CR_bit.T1
#define WWDG_CR_T2               WWDG_CR_bit.T2
#define WWDG_CR_T3               WWDG_CR_bit.T3
#define WWDG_CR_T4               WWDG_CR_bit.T4
#define WWDG_CR_T5               WWDG_CR_bit.T5
#define WWDG_CR_T6               WWDG_CR_bit.T6
#define WWDG_CR_T7               WWDG_CR_bit.T7

#define WWDG_WR_W0               WWDG_WR_bit.W0
#define WWDG_WR_W1               WWDG_WR_bit.W1
#define WWDG_WR_W2               WWDG_WR_bit.W2
#define WWDG_WR_W3               WWDG_WR_bit.W3
#define WWDG_WR_W4               WWDG_WR_bit.W4
#define WWDG_WR_W5               WWDG_WR_bit.W5
#define WWDG_WR_W6               WWDG_WR_bit.W6
#define WWDG_WR_W7               WWDG_WR_bit.W7

#endif

/*-------------------------------------------------------------------------
 *      WWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_WWDG_CR_T0          0x01
#define MASK_WWDG_CR_T1          0x02
#define MASK_WWDG_CR_T2          0x04
#define MASK_WWDG_CR_T3          0x08
#define MASK_WWDG_CR_T4          0x10
#define MASK_WWDG_CR_T5          0x20
#define MASK_WWDG_CR_T6          0x40
#define MASK_WWDG_CR_T7          0x80

#define MASK_WWDG_WR_W0          0x01
#define MASK_WWDG_WR_W1          0x02
#define MASK_WWDG_WR_W2          0x04
#define MASK_WWDG_WR_W3          0x08
#define MASK_WWDG_WR_W4          0x10
#define MASK_WWDG_WR_W5          0x20
#define MASK_WWDG_WR_W6          0x40
#define MASK_WWDG_WR_W7          0x80


/*-------------------------------------------------------------------------
 *      IWDG register definitions
 *-----------------------------------------------------------------------*/
/* IWDG key register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char KEY0        : 1;
  unsigned char KEY1        : 1;
  unsigned char KEY2        : 1;
  unsigned char KEY3        : 1;
  unsigned char KEY4        : 1;
  unsigned char KEY5        : 1;
  unsigned char KEY6        : 1;
  unsigned char KEY7        : 1;
} __BITS_IWDG_KR;
#endif
__IO_REG8_BIT(IWDG_KR,     0x50E0, __WRITE, __BITS_IWDG_KR);

/* IWDG prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PR          : 3;
} __BITS_IWDG_PR;
#endif
__IO_REG8_BIT(IWDG_PR,     0x50E1, __READ_WRITE, __BITS_IWDG_PR);

/* IWDG reload register */
__IO_REG8    (IWDG_RLR,    0x50E2, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      IWDG bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IWDG_KR_KEY0             IWDG_KR_bit.KEY0
#define IWDG_KR_KEY1             IWDG_KR_bit.KEY1
#define IWDG_KR_KEY2             IWDG_KR_bit.KEY2
#define IWDG_KR_KEY3             IWDG_KR_bit.KEY3
#define IWDG_KR_KEY4             IWDG_KR_bit.KEY4
#define IWDG_KR_KEY5             IWDG_KR_bit.KEY5
#define IWDG_KR_KEY6             IWDG_KR_bit.KEY6
#define IWDG_KR_KEY7             IWDG_KR_bit.KEY7

#define IWDG_PR_PR               IWDG_PR_bit.PR

#endif

/*-------------------------------------------------------------------------
 *      IWDG bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IWDG_KR_KEY0        0x01
#define MASK_IWDG_KR_KEY1        0x02
#define MASK_IWDG_KR_KEY2        0x04
#define MASK_IWDG_KR_KEY3        0x08
#define MASK_IWDG_KR_KEY4        0x10
#define MASK_IWDG_KR_KEY5        0x20
#define MASK_IWDG_KR_KEY6        0x40
#define MASK_IWDG_KR_KEY7        0x80

#define MASK_IWDG_PR_PR          0x07


/*-------------------------------------------------------------------------
 *      BEEP register definitions
 *-----------------------------------------------------------------------*/
/* BEEP control/status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSR         : 1;
} __BITS_BEEP_CSR1;
#endif
__IO_REG8_BIT(BEEP_CSR1,   0x50F0, __READ_WRITE, __BITS_BEEP_CSR1);

/* BEEP control/status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BEEPDIV     : 5;
  unsigned char BEEPEN      : 1;
  unsigned char BEEPSEL     : 2;
} __BITS_BEEP_CSR2;
#endif
__IO_REG8_BIT(BEEP_CSR2,   0x50F3, __READ_WRITE, __BITS_BEEP_CSR2);


/*-------------------------------------------------------------------------
 *      BEEP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define BEEP_CSR1_MSR            BEEP_CSR1_bit.MSR

#define BEEP_CSR2_BEEPDIV        BEEP_CSR2_bit.BEEPDIV
#define BEEP_CSR2_BEEPEN         BEEP_CSR2_bit.BEEPEN
#define BEEP_CSR2_BEEPSEL        BEEP_CSR2_bit.BEEPSEL

#endif

/*-------------------------------------------------------------------------
 *      BEEP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_BEEP_CSR1_MSR       0x01

#define MASK_BEEP_CSR2_BEEPDIV   0x1F
#define MASK_BEEP_CSR2_BEEPEN    0x20
#define MASK_BEEP_CSR2_BEEPSEL   0xC0


/*-------------------------------------------------------------------------
 *      RTC register definitions
 *-----------------------------------------------------------------------*/
/* Time register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SU          : 4;
  unsigned char ST          : 4;
} __BITS_RTC_TR1;
#endif
__IO_REG8_BIT(RTC_TR1,     0x5140, __READ_WRITE, __BITS_RTC_TR1);

/* Time register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MNU         : 4;
  unsigned char MNT         : 4;
} __BITS_RTC_TR2;
#endif
__IO_REG8_BIT(RTC_TR2,     0x5141, __READ_WRITE, __BITS_RTC_TR2);

/* Time register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HU          : 4;
  unsigned char HT          : 2;
  unsigned char PM          : 1;
} __BITS_RTC_TR3;
#endif
__IO_REG8_BIT(RTC_TR3,     0x5142, __READ_WRITE, __BITS_RTC_TR3);

/* Date register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DU          : 4;
  unsigned char DT          : 2;
} __BITS_RTC_DR1;
#endif
__IO_REG8_BIT(RTC_DR1,     0x5144, __READ_WRITE, __BITS_RTC_DR1);

/* Date register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MU          : 4;
  unsigned char MT          : 1;
  unsigned char WDU         : 3;
} __BITS_RTC_DR2;
#endif
__IO_REG8_BIT(RTC_DR2,     0x5145, __READ_WRITE, __BITS_RTC_DR2);

/* Date register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char YU          : 4;
  unsigned char YT          : 4;
} __BITS_RTC_DR3;
#endif
__IO_REG8_BIT(RTC_DR3,     0x5146, __READ_WRITE, __BITS_RTC_DR3);

/* Control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUCKSEL     : 4;
  unsigned char             : 1;
  unsigned char RATIO       : 1;
  unsigned char FMT         : 1;
} __BITS_RTC_CR1;
#endif
__IO_REG8_BIT(RTC_CR1,     0x5148, __READ_WRITE, __BITS_RTC_CR1);

/* Control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAE       : 1;
  unsigned char             : 1;
  unsigned char WUTE        : 1;
  unsigned char             : 1;
  unsigned char ALRAIE      : 1;
  unsigned char             : 1;
  unsigned char WUTIE       : 1;
} __BITS_RTC_CR2;
#endif
__IO_REG8_BIT(RTC_CR2,     0x5149, __READ_WRITE, __BITS_RTC_CR2);

/* Control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD1H       : 1;
  unsigned char SUB1H       : 1;
  unsigned char BCK         : 1;
  unsigned char             : 1;
  unsigned char POL         : 1;
  unsigned char OSEL        : 2;
  unsigned char COE         : 1;
} __BITS_RTC_CR3;
#endif
__IO_REG8_BIT(RTC_CR3,     0x514A, __READ_WRITE, __BITS_RTC_CR3);

/* Initialization and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAWF      : 1;
  unsigned char RECALPF     : 1;
  unsigned char WUTWF       : 1;
  unsigned char SHPF        : 1;
  unsigned char INITS       : 1;
  unsigned char RSF         : 1;
  unsigned char INITF       : 1;
  unsigned char INIT        : 1;
} __BITS_RTC_ISR1;
#endif
__IO_REG8_BIT(RTC_ISR1,    0x514C, __READ_WRITE, __BITS_RTC_ISR1);

/* Initialization and Status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALRAF       : 1;
  unsigned char             : 1;
  unsigned char WUTF        : 1;
  unsigned char             : 2;
  unsigned char TAMP1F      : 1;
  unsigned char TAMP2F      : 1;
  unsigned char TAMP3F      : 1;
} __BITS_RTC_ISR2;
#endif
__IO_REG8_BIT(RTC_ISR2,    0x514D, __READ_WRITE, __BITS_RTC_ISR2);

/* Synchronous prescaler register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_S8   : 1;
  unsigned char PREDIV_S9   : 1;
  unsigned char PREDIV_S10  : 1;
  unsigned char PREDIV_S11  : 1;
  unsigned char PREDIV_S12  : 1;
} __BITS_RTC_SPRERH;
#endif
__IO_REG8_BIT(RTC_SPRERH,  0x5150, __READ_WRITE, __BITS_RTC_SPRERH);

/* Synchronous prescaler register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_S0   : 1;
  unsigned char PREDIV_S1   : 1;
  unsigned char PREDIV_S2   : 1;
  unsigned char PREDIV_S3   : 1;
  unsigned char PREDIV_S4   : 1;
  unsigned char PREDIV_S5   : 1;
  unsigned char PREDIV_S6   : 1;
  unsigned char PREDIV_S7   : 1;
} __BITS_RTC_SPRERL;
#endif
__IO_REG8_BIT(RTC_SPRERL,  0x5151, __READ_WRITE, __BITS_RTC_SPRERL);

/* Asynchronous prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PREDIV_A    : 7;
} __BITS_RTC_APRER;
#endif
__IO_REG8_BIT(RTC_APRER,   0x5152, __READ_WRITE, __BITS_RTC_APRER);

/* Wakeup timer register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUT8        : 1;
  unsigned char WUT9        : 1;
  unsigned char WUT10       : 1;
  unsigned char WUT11       : 1;
  unsigned char WUT12       : 1;
  unsigned char WUT13       : 1;
  unsigned char WUT14       : 1;
  unsigned char WUT15       : 1;
} __BITS_RTC_WUTRH;
#endif
__IO_REG8_BIT(RTC_WUTRH,   0x5154, __READ_WRITE, __BITS_RTC_WUTRH);

/* Wakeup timer register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char WUT0        : 1;
  unsigned char WUT1        : 1;
  unsigned char WUT2        : 1;
  unsigned char WUT3        : 1;
  unsigned char WUT4        : 1;
  unsigned char WUT5        : 1;
  unsigned char WUT6        : 1;
  unsigned char WUT7        : 1;
} __BITS_RTC_WUTRL;
#endif
__IO_REG8_BIT(RTC_WUTRL,   0x5155, __READ_WRITE, __BITS_RTC_WUTRL);

/* Write protection register */
__IO_REG8    (RTC_WPR,     0x5159, __WRITE);
/* Alarm A register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALSU        : 4;
  unsigned char ALST        : 3;
  unsigned char MSK1        : 1;
} __BITS_RTC_ALRMAR1;
#endif
__IO_REG8_BIT(RTC_ALRMAR1, 0x515C, __READ_WRITE, __BITS_RTC_ALRMAR1);

/* Alarm A register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALMNU       : 4;
  unsigned char ALMNT       : 3;
  unsigned char MSK2        : 1;
} __BITS_RTC_ALRMAR2;
#endif
__IO_REG8_BIT(RTC_ALRMAR2, 0x515D, __READ_WRITE, __BITS_RTC_ALRMAR2);

/* Alarm A register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALHU        : 4;
  unsigned char ALHT        : 2;
  unsigned char PM          : 1;
  unsigned char MSK3        : 1;
} __BITS_RTC_ALRMAR3;
#endif
__IO_REG8_BIT(RTC_ALRMAR3, 0x515E, __READ_WRITE, __BITS_RTC_ALRMAR3);

/* Alarm A register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ALDU        : 4;
  unsigned char ALDT        : 2;
  unsigned char WDSEL       : 1;
  unsigned char MSK4        : 1;
} __BITS_RTC_ALRMAR4;
#endif
__IO_REG8_BIT(RTC_ALRMAR4, 0x515F, __READ_WRITE, __BITS_RTC_ALRMAR4);


/*-------------------------------------------------------------------------
 *      RTC bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RTC_TR1_SU               RTC_TR1_bit.SU
#define RTC_TR1_ST               RTC_TR1_bit.ST

#define RTC_TR2_MNU              RTC_TR2_bit.MNU
#define RTC_TR2_MNT              RTC_TR2_bit.MNT

#define RTC_TR3_HU               RTC_TR3_bit.HU
#define RTC_TR3_HT               RTC_TR3_bit.HT
#define RTC_TR3_PM               RTC_TR3_bit.PM

#define RTC_DR1_DU               RTC_DR1_bit.DU
#define RTC_DR1_DT               RTC_DR1_bit.DT

#define RTC_DR2_MU               RTC_DR2_bit.MU
#define RTC_DR2_MT               RTC_DR2_bit.MT
#define RTC_DR2_WDU              RTC_DR2_bit.WDU

#define RTC_DR3_YU               RTC_DR3_bit.YU
#define RTC_DR3_YT               RTC_DR3_bit.YT

#define RTC_CR1_WUCKSEL          RTC_CR1_bit.WUCKSEL
#define RTC_CR1_RATIO            RTC_CR1_bit.RATIO
#define RTC_CR1_FMT              RTC_CR1_bit.FMT

#define RTC_CR2_ALRAE            RTC_CR2_bit.ALRAE
#define RTC_CR2_WUTE             RTC_CR2_bit.WUTE
#define RTC_CR2_ALRAIE           RTC_CR2_bit.ALRAIE
#define RTC_CR2_WUTIE            RTC_CR2_bit.WUTIE

#define RTC_CR3_ADD1H            RTC_CR3_bit.ADD1H
#define RTC_CR3_SUB1H            RTC_CR3_bit.SUB1H
#define RTC_CR3_BCK              RTC_CR3_bit.BCK
#define RTC_CR3_POL              RTC_CR3_bit.POL
#define RTC_CR3_OSEL             RTC_CR3_bit.OSEL
#define RTC_CR3_COE              RTC_CR3_bit.COE

#define RTC_ISR1_ALRAWF          RTC_ISR1_bit.ALRAWF
#define RTC_ISR1_RECALPF         RTC_ISR1_bit.RECALPF
#define RTC_ISR1_WUTWF           RTC_ISR1_bit.WUTWF
#define RTC_ISR1_SHPF            RTC_ISR1_bit.SHPF
#define RTC_ISR1_INITS           RTC_ISR1_bit.INITS
#define RTC_ISR1_RSF             RTC_ISR1_bit.RSF
#define RTC_ISR1_INITF           RTC_ISR1_bit.INITF
#define RTC_ISR1_INIT            RTC_ISR1_bit.INIT

#define RTC_ISR2_ALRAF           RTC_ISR2_bit.ALRAF
#define RTC_ISR2_WUTF            RTC_ISR2_bit.WUTF
#define RTC_ISR2_TAMP1F          RTC_ISR2_bit.TAMP1F
#define RTC_ISR2_TAMP2F          RTC_ISR2_bit.TAMP2F
#define RTC_ISR2_TAMP3F          RTC_ISR2_bit.TAMP3F

#define RTC_SPRERH_PREDIV_S8     RTC_SPRERH_bit.PREDIV_S8
#define RTC_SPRERH_PREDIV_S9     RTC_SPRERH_bit.PREDIV_S9
#define RTC_SPRERH_PREDIV_S10    RTC_SPRERH_bit.PREDIV_S10
#define RTC_SPRERH_PREDIV_S11    RTC_SPRERH_bit.PREDIV_S11
#define RTC_SPRERH_PREDIV_S12    RTC_SPRERH_bit.PREDIV_S12

#define RTC_SPRERL_PREDIV_S0     RTC_SPRERL_bit.PREDIV_S0
#define RTC_SPRERL_PREDIV_S1     RTC_SPRERL_bit.PREDIV_S1
#define RTC_SPRERL_PREDIV_S2     RTC_SPRERL_bit.PREDIV_S2
#define RTC_SPRERL_PREDIV_S3     RTC_SPRERL_bit.PREDIV_S3
#define RTC_SPRERL_PREDIV_S4     RTC_SPRERL_bit.PREDIV_S4
#define RTC_SPRERL_PREDIV_S5     RTC_SPRERL_bit.PREDIV_S5
#define RTC_SPRERL_PREDIV_S6     RTC_SPRERL_bit.PREDIV_S6
#define RTC_SPRERL_PREDIV_S7     RTC_SPRERL_bit.PREDIV_S7

#define RTC_APRER_PREDIV_A       RTC_APRER_bit.PREDIV_A

#define RTC_WUTRH_WUT8           RTC_WUTRH_bit.WUT8
#define RTC_WUTRH_WUT9           RTC_WUTRH_bit.WUT9
#define RTC_WUTRH_WUT10          RTC_WUTRH_bit.WUT10
#define RTC_WUTRH_WUT11          RTC_WUTRH_bit.WUT11
#define RTC_WUTRH_WUT12          RTC_WUTRH_bit.WUT12
#define RTC_WUTRH_WUT13          RTC_WUTRH_bit.WUT13
#define RTC_WUTRH_WUT14          RTC_WUTRH_bit.WUT14
#define RTC_WUTRH_WUT15          RTC_WUTRH_bit.WUT15

#define RTC_WUTRL_WUT0           RTC_WUTRL_bit.WUT0
#define RTC_WUTRL_WUT1           RTC_WUTRL_bit.WUT1
#define RTC_WUTRL_WUT2           RTC_WUTRL_bit.WUT2
#define RTC_WUTRL_WUT3           RTC_WUTRL_bit.WUT3
#define RTC_WUTRL_WUT4           RTC_WUTRL_bit.WUT4
#define RTC_WUTRL_WUT5           RTC_WUTRL_bit.WUT5
#define RTC_WUTRL_WUT6           RTC_WUTRL_bit.WUT6
#define RTC_WUTRL_WUT7           RTC_WUTRL_bit.WUT7

#define RTC_ALRMAR1_ALSU         RTC_ALRMAR1_bit.ALSU
#define RTC_ALRMAR1_ALST         RTC_ALRMAR1_bit.ALST
#define RTC_ALRMAR1_MSK1         RTC_ALRMAR1_bit.MSK1

#define RTC_ALRMAR2_ALMNU        RTC_ALRMAR2_bit.ALMNU
#define RTC_ALRMAR2_ALMNT        RTC_ALRMAR2_bit.ALMNT
#define RTC_ALRMAR2_MSK2         RTC_ALRMAR2_bit.MSK2

#define RTC_ALRMAR3_ALHU         RTC_ALRMAR3_bit.ALHU
#define RTC_ALRMAR3_ALHT         RTC_ALRMAR3_bit.ALHT
#define RTC_ALRMAR3_PM           RTC_ALRMAR3_bit.PM
#define RTC_ALRMAR3_MSK3         RTC_ALRMAR3_bit.MSK3

#define RTC_ALRMAR4_ALDU         RTC_ALRMAR4_bit.ALDU
#define RTC_ALRMAR4_ALDT         RTC_ALRMAR4_bit.ALDT
#define RTC_ALRMAR4_WDSEL        RTC_ALRMAR4_bit.WDSEL
#define RTC_ALRMAR4_MSK4         RTC_ALRMAR4_bit.MSK4

#endif

/*-------------------------------------------------------------------------
 *      RTC bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RTC_TR1_SU          0x0F
#define MASK_RTC_TR1_ST          0xF0

#define MASK_RTC_TR2_MNU         0x0F
#define MASK_RTC_TR2_MNT         0xF0

#define MASK_RTC_TR3_HU          0x0F
#define MASK_RTC_TR3_HT          0x30
#define MASK_RTC_TR3_PM          0x40

#define MASK_RTC_DR1_DU          0x0F
#define MASK_RTC_DR1_DT          0x30

#define MASK_RTC_DR2_MU          0x0F
#define MASK_RTC_DR2_MT          0x10
#define MASK_RTC_DR2_WDU         0xE0

#define MASK_RTC_DR3_YU          0x0F
#define MASK_RTC_DR3_YT          0xF0

#define MASK_RTC_CR1_WUCKSEL     0x0F
#define MASK_RTC_CR1_RATIO       0x20
#define MASK_RTC_CR1_FMT         0x40

#define MASK_RTC_CR2_ALRAE       0x01
#define MASK_RTC_CR2_WUTE        0x04
#define MASK_RTC_CR2_ALRAIE      0x10
#define MASK_RTC_CR2_WUTIE       0x40

#define MASK_RTC_CR3_ADD1H       0x01
#define MASK_RTC_CR3_SUB1H       0x02
#define MASK_RTC_CR3_BCK         0x04
#define MASK_RTC_CR3_POL         0x10
#define MASK_RTC_CR3_OSEL        0x60
#define MASK_RTC_CR3_COE         0x80

#define MASK_RTC_ISR1_ALRAWF     0x01
#define MASK_RTC_ISR1_RECALPF    0x02
#define MASK_RTC_ISR1_WUTWF      0x04
#define MASK_RTC_ISR1_SHPF       0x08
#define MASK_RTC_ISR1_INITS      0x10
#define MASK_RTC_ISR1_RSF        0x20
#define MASK_RTC_ISR1_INITF      0x40
#define MASK_RTC_ISR1_INIT       0x80

#define MASK_RTC_ISR2_ALRAF      0x01
#define MASK_RTC_ISR2_WUTF       0x04
#define MASK_RTC_ISR2_TAMP1F     0x20
#define MASK_RTC_ISR2_TAMP2F     0x40
#define MASK_RTC_ISR2_TAMP3F     0x80

#define MASK_RTC_SPRERH_PREDIV_S8 0x01
#define MASK_RTC_SPRERH_PREDIV_S9 0x02
#define MASK_RTC_SPRERH_PREDIV_S10 0x04
#define MASK_RTC_SPRERH_PREDIV_S11 0x08
#define MASK_RTC_SPRERH_PREDIV_S12 0x10

#define MASK_RTC_SPRERL_PREDIV_S0 0x01
#define MASK_RTC_SPRERL_PREDIV_S1 0x02
#define MASK_RTC_SPRERL_PREDIV_S2 0x04
#define MASK_RTC_SPRERL_PREDIV_S3 0x08
#define MASK_RTC_SPRERL_PREDIV_S4 0x10
#define MASK_RTC_SPRERL_PREDIV_S5 0x20
#define MASK_RTC_SPRERL_PREDIV_S6 0x40
#define MASK_RTC_SPRERL_PREDIV_S7 0x80

#define MASK_RTC_APRER_PREDIV_A  0x7F

#define MASK_RTC_WUTRH_WUT8      0x01
#define MASK_RTC_WUTRH_WUT9      0x02
#define MASK_RTC_WUTRH_WUT10     0x04
#define MASK_RTC_WUTRH_WUT11     0x08
#define MASK_RTC_WUTRH_WUT12     0x10
#define MASK_RTC_WUTRH_WUT13     0x20
#define MASK_RTC_WUTRH_WUT14     0x40
#define MASK_RTC_WUTRH_WUT15     0x80

#define MASK_RTC_WUTRL_WUT0      0x01
#define MASK_RTC_WUTRL_WUT1      0x02
#define MASK_RTC_WUTRL_WUT2      0x04
#define MASK_RTC_WUTRL_WUT3      0x08
#define MASK_RTC_WUTRL_WUT4      0x10
#define MASK_RTC_WUTRL_WUT5      0x20
#define MASK_RTC_WUTRL_WUT6      0x40
#define MASK_RTC_WUTRL_WUT7      0x80

#define MASK_RTC_ALRMAR1_ALSU    0x0F
#define MASK_RTC_ALRMAR1_ALST    0x70
#define MASK_RTC_ALRMAR1_MSK1    0x80

#define MASK_RTC_ALRMAR2_ALMNU   0x0F
#define MASK_RTC_ALRMAR2_ALMNT   0x70
#define MASK_RTC_ALRMAR2_MSK2    0x80

#define MASK_RTC_ALRMAR3_ALHU    0x0F
#define MASK_RTC_ALRMAR3_ALHT    0x30
#define MASK_RTC_ALRMAR3_PM      0x40
#define MASK_RTC_ALRMAR3_MSK3    0x80

#define MASK_RTC_ALRMAR4_ALDU    0x0F
#define MASK_RTC_ALRMAR4_ALDT    0x30
#define MASK_RTC_ALRMAR4_WDSEL   0x40
#define MASK_RTC_ALRMAR4_MSK4    0x80


/*-------------------------------------------------------------------------
 *      SPI1 register definitions
 *-----------------------------------------------------------------------*/
/* SPI1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char MSTR        : 1;
  unsigned char BR          : 3;
  unsigned char SPE         : 1;
  unsigned char LSBFIRST    : 1;
} __BITS_SPI1_CR1;
#endif
__IO_REG8_BIT(SPI1_CR1,    0x5200, __READ_WRITE, __BITS_SPI1_CR1);

/* SPI1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SSI         : 1;
  unsigned char SSM         : 1;
  unsigned char RXONLY      : 1;
  unsigned char             : 1;
  unsigned char CRCNEXT     : 1;
  unsigned char CRCEN       : 1;
  unsigned char BDOE        : 1;
  unsigned char BDM         : 1;
} __BITS_SPI1_CR2;
#endif
__IO_REG8_BIT(SPI1_CR2,    0x5201, __READ_WRITE, __BITS_SPI1_CR2);

/* SPI1 interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXDMAEN     : 1;
  unsigned char TXDMAEN     : 1;
  unsigned char             : 2;
  unsigned char WKIE        : 1;
  unsigned char ERRIE       : 1;
  unsigned char RXIE        : 1;
  unsigned char TXIE        : 1;
} __BITS_SPI1_ICR;
#endif
__IO_REG8_BIT(SPI1_ICR,    0x5202, __READ_WRITE, __BITS_SPI1_ICR);

/* SPI1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
  unsigned char             : 1;
  unsigned char WKUP        : 1;
  unsigned char CRCERR      : 1;
  unsigned char MODF        : 1;
  unsigned char OVR         : 1;
  unsigned char BSY         : 1;
} __BITS_SPI1_SR;
#endif
__IO_REG8_BIT(SPI1_SR,     0x5203, __READ_WRITE, __BITS_SPI1_SR);

/* SPI1 data register */
__IO_REG8    (SPI1_DR,     0x5204, __READ_WRITE);
/* SPI1 CRC polynomial register */
__IO_REG8    (SPI1_CRCPR,  0x5205, __READ_WRITE);
/* SPI1 Rx CRC register */
__IO_REG8    (SPI1_RXCRCR, 0x5206, __READ);
/* SPI1 Tx CRC register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TXCRC       : 7;
} __BITS_SPI1_TXCRCR;
#endif
__IO_REG8_BIT(SPI1_TXCRCR, 0x5207, __READ, __BITS_SPI1_TXCRCR);


/*-------------------------------------------------------------------------
 *      SPI1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define SPI1_CR1_CPHA            SPI1_CR1_bit.CPHA
#define SPI1_CR1_CPOL            SPI1_CR1_bit.CPOL
#define SPI1_CR1_MSTR            SPI1_CR1_bit.MSTR
#define SPI1_CR1_BR              SPI1_CR1_bit.BR
#define SPI1_CR1_SPE             SPI1_CR1_bit.SPE
#define SPI1_CR1_LSBFIRST        SPI1_CR1_bit.LSBFIRST

#define SPI1_CR2_SSI             SPI1_CR2_bit.SSI
#define SPI1_CR2_SSM             SPI1_CR2_bit.SSM
#define SPI1_CR2_RXONLY          SPI1_CR2_bit.RXONLY
#define SPI1_CR2_CRCNEXT         SPI1_CR2_bit.CRCNEXT
#define SPI1_CR2_CRCEN           SPI1_CR2_bit.CRCEN
#define SPI1_CR2_BDOE            SPI1_CR2_bit.BDOE
#define SPI1_CR2_BDM             SPI1_CR2_bit.BDM

#define SPI1_ICR_RXDMAEN         SPI1_ICR_bit.RXDMAEN
#define SPI1_ICR_TXDMAEN         SPI1_ICR_bit.TXDMAEN
#define SPI1_ICR_WKIE            SPI1_ICR_bit.WKIE
#define SPI1_ICR_ERRIE           SPI1_ICR_bit.ERRIE
#define SPI1_ICR_RXIE            SPI1_ICR_bit.RXIE
#define SPI1_ICR_TXIE            SPI1_ICR_bit.TXIE

#define SPI1_SR_RXNE             SPI1_SR_bit.RXNE
#define SPI1_SR_TXE              SPI1_SR_bit.TXE
#define SPI1_SR_WKUP             SPI1_SR_bit.WKUP
#define SPI1_SR_CRCERR           SPI1_SR_bit.CRCERR
#define SPI1_SR_MODF             SPI1_SR_bit.MODF
#define SPI1_SR_OVR              SPI1_SR_bit.OVR
#define SPI1_SR_BSY              SPI1_SR_bit.BSY

#define SPI1_TXCRCR_TXCRC        SPI1_TXCRCR_bit.TXCRC

#endif

/*-------------------------------------------------------------------------
 *      SPI1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_SPI1_CR1_CPHA       0x01
#define MASK_SPI1_CR1_CPOL       0x02
#define MASK_SPI1_CR1_MSTR       0x04
#define MASK_SPI1_CR1_BR         0x38
#define MASK_SPI1_CR1_SPE        0x40
#define MASK_SPI1_CR1_LSBFIRST   0x80

#define MASK_SPI1_CR2_SSI        0x01
#define MASK_SPI1_CR2_SSM        0x02
#define MASK_SPI1_CR2_RXONLY     0x04
#define MASK_SPI1_CR2_CRCNEXT    0x10
#define MASK_SPI1_CR2_CRCEN      0x20
#define MASK_SPI1_CR2_BDOE       0x40
#define MASK_SPI1_CR2_BDM        0x80

#define MASK_SPI1_ICR_RXDMAEN    0x01
#define MASK_SPI1_ICR_TXDMAEN    0x02
#define MASK_SPI1_ICR_WKIE       0x10
#define MASK_SPI1_ICR_ERRIE      0x20
#define MASK_SPI1_ICR_RXIE       0x40
#define MASK_SPI1_ICR_TXIE       0x80

#define MASK_SPI1_SR_RXNE        0x01
#define MASK_SPI1_SR_TXE         0x02
#define MASK_SPI1_SR_WKUP        0x08
#define MASK_SPI1_SR_CRCERR      0x10
#define MASK_SPI1_SR_MODF        0x20
#define MASK_SPI1_SR_OVR         0x40
#define MASK_SPI1_SR_BSY         0x80

#define MASK_SPI1_TXCRCR_TXCRC   0x7F


/*-------------------------------------------------------------------------
 *      I2C1 register definitions
 *-----------------------------------------------------------------------*/
/* I2C1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char SMBUS       : 1;
  unsigned char             : 1;
  unsigned char SMBTYPE     : 1;
  unsigned char ENARP       : 1;
  unsigned char ENPEC       : 1;
  unsigned char ENGC        : 1;
  unsigned char NOSTRETCH   : 1;
} __BITS_I2C1_CR1;
#endif
__IO_REG8_BIT(I2C1_CR1,    0x5210, __READ_WRITE, __BITS_I2C1_CR1);

/* I2C1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char START       : 1;
  unsigned char STOP        : 1;
  unsigned char ACK         : 1;
  unsigned char POS         : 1;
  unsigned char PEC         : 1;
  unsigned char ALERT       : 1;
  unsigned char             : 1;
  unsigned char SWRST       : 1;
} __BITS_I2C1_CR2;
#endif
__IO_REG8_BIT(I2C1_CR2,    0x5211, __READ_WRITE, __BITS_I2C1_CR2);

/* I2C1 frequency register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char FREQ        : 6;
} __BITS_I2C1_FREQR;
#endif
__IO_REG8_BIT(I2C1_FREQR,  0x5212, __READ_WRITE, __BITS_I2C1_FREQR);

/* I2C1 own address register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD1        : 1;
  unsigned char ADD2        : 1;
  unsigned char ADD3        : 1;
  unsigned char ADD4        : 1;
  unsigned char ADD5        : 1;
  unsigned char ADD6        : 1;
  unsigned char ADD7        : 1;
} __BITS_I2C1_OARL;
#endif
__IO_REG8_BIT(I2C1_OARL,   0x5213, __READ_WRITE, __BITS_I2C1_OARL);

/* I2C1 own address register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char ADD8        : 1;
  unsigned char ADD9        : 1;
  unsigned char             : 3;
  unsigned char ADDCONF     : 1;
  unsigned char ADDMODE     : 1;
} __BITS_I2C1_OARH;
#endif
__IO_REG8_BIT(I2C1_OARH,   0x5214, __READ_WRITE, __BITS_I2C1_OARH);

/* I2C1 data register */
__IO_REG8    (I2C1_DR,     0x5216, __READ_WRITE);
/* I2C1 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SB          : 1;
  unsigned char ADDR        : 1;
  unsigned char BTF         : 1;
  unsigned char ADD10       : 1;
  unsigned char STOPF       : 1;
  unsigned char             : 1;
  unsigned char RXNE        : 1;
  unsigned char TXE         : 1;
} __BITS_I2C1_SR1;
#endif
__IO_REG8_BIT(I2C1_SR1,    0x5217, __READ, __BITS_I2C1_SR1);

/* I2C1 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char BERR        : 1;
  unsigned char ARLO        : 1;
  unsigned char AF          : 1;
  unsigned char OVR         : 1;
  unsigned char PECERR      : 1;
  unsigned char WUFH        : 1;
  unsigned char TIMEOUT     : 1;
  unsigned char SMBALERT    : 1;
} __BITS_I2C1_SR2;
#endif
__IO_REG8_BIT(I2C1_SR2,    0x5218, __READ_WRITE, __BITS_I2C1_SR2);

/* I2C1 status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char MSL         : 1;
  unsigned char BUSY        : 1;
  unsigned char TRA         : 1;
  unsigned char             : 1;
  unsigned char GENCALL     : 1;
  unsigned char SMBDEFAULT  : 1;
  unsigned char SMBHOST     : 1;
} __BITS_I2C1_SR3;
#endif
__IO_REG8_BIT(I2C1_SR3,    0x5219, __READ, __BITS_I2C1_SR3);

/* I2C1 interrupt control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ITERREN     : 1;
  unsigned char ITEVTEN     : 1;
  unsigned char ITBUFEN     : 1;
  unsigned char DMAEN       : 1;
  unsigned char LAST        : 1;
} __BITS_I2C1_ITR;
#endif
__IO_REG8_BIT(I2C1_ITR,    0x521A, __READ_WRITE, __BITS_I2C1_ITR);

/* I2C1 clock control register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR0        : 1;
  unsigned char CCR1        : 1;
  unsigned char CCR2        : 1;
  unsigned char CCR3        : 1;
  unsigned char CCR4        : 1;
  unsigned char CCR5        : 1;
  unsigned char CCR6        : 1;
  unsigned char CCR7        : 1;
} __BITS_I2C1_CCRL;
#endif
__IO_REG8_BIT(I2C1_CCRL,   0x521B, __READ_WRITE, __BITS_I2C1_CCRL);

/* I2C1 clock control register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR8        : 1;
  unsigned char CCR9        : 1;
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char             : 2;
  unsigned char DUTY        : 1;
  unsigned char F_S         : 1;
} __BITS_I2C1_CCRH;
#endif
__IO_REG8_BIT(I2C1_CCRH,   0x521C, __READ_WRITE, __BITS_I2C1_CCRH);

/* I2C1 TRISE register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRISE       : 6;
} __BITS_I2C1_TRISER;
#endif
__IO_REG8_BIT(I2C1_TRISER, 0x521D, __READ_WRITE, __BITS_I2C1_TRISER);

/* I2C1 packet error checking register */
__IO_REG8    (I2C1_PECR,   0x521E, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      I2C1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define I2C1_CR1_PE              I2C1_CR1_bit.PE
#define I2C1_CR1_SMBUS           I2C1_CR1_bit.SMBUS
#define I2C1_CR1_SMBTYPE         I2C1_CR1_bit.SMBTYPE
#define I2C1_CR1_ENARP           I2C1_CR1_bit.ENARP
#define I2C1_CR1_ENPEC           I2C1_CR1_bit.ENPEC
#define I2C1_CR1_ENGC            I2C1_CR1_bit.ENGC
#define I2C1_CR1_NOSTRETCH       I2C1_CR1_bit.NOSTRETCH

#define I2C1_CR2_START           I2C1_CR2_bit.START
#define I2C1_CR2_STOP            I2C1_CR2_bit.STOP
#define I2C1_CR2_ACK             I2C1_CR2_bit.ACK
#define I2C1_CR2_POS             I2C1_CR2_bit.POS
#define I2C1_CR2_PEC             I2C1_CR2_bit.PEC
#define I2C1_CR2_ALERT           I2C1_CR2_bit.ALERT
#define I2C1_CR2_SWRST           I2C1_CR2_bit.SWRST

#define I2C1_FREQR_FREQ          I2C1_FREQR_bit.FREQ

#define I2C1_OARL_ADD0           I2C1_OARL_bit.ADD0
#define I2C1_OARL_ADD1           I2C1_OARL_bit.ADD1
#define I2C1_OARL_ADD2           I2C1_OARL_bit.ADD2
#define I2C1_OARL_ADD3           I2C1_OARL_bit.ADD3
#define I2C1_OARL_ADD4           I2C1_OARL_bit.ADD4
#define I2C1_OARL_ADD5           I2C1_OARL_bit.ADD5
#define I2C1_OARL_ADD6           I2C1_OARL_bit.ADD6
#define I2C1_OARL_ADD7           I2C1_OARL_bit.ADD7

#define I2C1_OARH_ADD8           I2C1_OARH_bit.ADD8
#define I2C1_OARH_ADD9           I2C1_OARH_bit.ADD9
#define I2C1_OARH_ADDCONF        I2C1_OARH_bit.ADDCONF
#define I2C1_OARH_ADDMODE        I2C1_OARH_bit.ADDMODE

#define I2C1_SR1_SB              I2C1_SR1_bit.SB
#define I2C1_SR1_ADDR            I2C1_SR1_bit.ADDR
#define I2C1_SR1_BTF             I2C1_SR1_bit.BTF
#define I2C1_SR1_ADD10           I2C1_SR1_bit.ADD10
#define I2C1_SR1_STOPF           I2C1_SR1_bit.STOPF
#define I2C1_SR1_RXNE            I2C1_SR1_bit.RXNE
#define I2C1_SR1_TXE             I2C1_SR1_bit.TXE

#define I2C1_SR2_BERR            I2C1_SR2_bit.BERR
#define I2C1_SR2_ARLO            I2C1_SR2_bit.ARLO
#define I2C1_SR2_AF              I2C1_SR2_bit.AF
#define I2C1_SR2_OVR             I2C1_SR2_bit.OVR
#define I2C1_SR2_PECERR          I2C1_SR2_bit.PECERR
#define I2C1_SR2_WUFH            I2C1_SR2_bit.WUFH
#define I2C1_SR2_TIMEOUT         I2C1_SR2_bit.TIMEOUT
#define I2C1_SR2_SMBALERT        I2C1_SR2_bit.SMBALERT

#define I2C1_SR3_MSL             I2C1_SR3_bit.MSL
#define I2C1_SR3_BUSY            I2C1_SR3_bit.BUSY
#define I2C1_SR3_TRA             I2C1_SR3_bit.TRA
#define I2C1_SR3_GENCALL         I2C1_SR3_bit.GENCALL
#define I2C1_SR3_SMBDEFAULT      I2C1_SR3_bit.SMBDEFAULT
#define I2C1_SR3_SMBHOST         I2C1_SR3_bit.SMBHOST

#define I2C1_ITR_ITERREN         I2C1_ITR_bit.ITERREN
#define I2C1_ITR_ITEVTEN         I2C1_ITR_bit.ITEVTEN
#define I2C1_ITR_ITBUFEN         I2C1_ITR_bit.ITBUFEN
#define I2C1_ITR_DMAEN           I2C1_ITR_bit.DMAEN
#define I2C1_ITR_LAST            I2C1_ITR_bit.LAST

#define I2C1_CCRL_CCR0           I2C1_CCRL_bit.CCR0
#define I2C1_CCRL_CCR1           I2C1_CCRL_bit.CCR1
#define I2C1_CCRL_CCR2           I2C1_CCRL_bit.CCR2
#define I2C1_CCRL_CCR3           I2C1_CCRL_bit.CCR3
#define I2C1_CCRL_CCR4           I2C1_CCRL_bit.CCR4
#define I2C1_CCRL_CCR5           I2C1_CCRL_bit.CCR5
#define I2C1_CCRL_CCR6           I2C1_CCRL_bit.CCR6
#define I2C1_CCRL_CCR7           I2C1_CCRL_bit.CCR7

#define I2C1_CCRH_CCR8           I2C1_CCRH_bit.CCR8
#define I2C1_CCRH_CCR9           I2C1_CCRH_bit.CCR9
#define I2C1_CCRH_CCR10          I2C1_CCRH_bit.CCR10
#define I2C1_CCRH_CCR11          I2C1_CCRH_bit.CCR11
#define I2C1_CCRH_DUTY           I2C1_CCRH_bit.DUTY
#define I2C1_CCRH_F_S            I2C1_CCRH_bit.F_S

#define I2C1_TRISER_TRISE        I2C1_TRISER_bit.TRISE

#endif

/*-------------------------------------------------------------------------
 *      I2C1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_I2C1_CR1_PE         0x01
#define MASK_I2C1_CR1_SMBUS      0x02
#define MASK_I2C1_CR1_SMBTYPE    0x08
#define MASK_I2C1_CR1_ENARP      0x10
#define MASK_I2C1_CR1_ENPEC      0x20
#define MASK_I2C1_CR1_ENGC       0x40
#define MASK_I2C1_CR1_NOSTRETCH  0x80

#define MASK_I2C1_CR2_START      0x01
#define MASK_I2C1_CR2_STOP       0x02
#define MASK_I2C1_CR2_ACK        0x04
#define MASK_I2C1_CR2_POS        0x08
#define MASK_I2C1_CR2_PEC        0x10
#define MASK_I2C1_CR2_ALERT      0x20
#define MASK_I2C1_CR2_SWRST      0x80

#define MASK_I2C1_FREQR_FREQ     0x3F

#define MASK_I2C1_OARL_ADD0      0x01
#define MASK_I2C1_OARL_ADD1      0x02
#define MASK_I2C1_OARL_ADD2      0x04
#define MASK_I2C1_OARL_ADD3      0x08
#define MASK_I2C1_OARL_ADD4      0x10
#define MASK_I2C1_OARL_ADD5      0x20
#define MASK_I2C1_OARL_ADD6      0x40
#define MASK_I2C1_OARL_ADD7      0x80

#define MASK_I2C1_OARH_ADD8      0x02
#define MASK_I2C1_OARH_ADD9      0x04
#define MASK_I2C1_OARH_ADDCONF   0x40
#define MASK_I2C1_OARH_ADDMODE   0x80

#define MASK_I2C1_SR1_SB         0x01
#define MASK_I2C1_SR1_ADDR       0x02
#define MASK_I2C1_SR1_BTF        0x04
#define MASK_I2C1_SR1_ADD10      0x08
#define MASK_I2C1_SR1_STOPF      0x10
#define MASK_I2C1_SR1_RXNE       0x40
#define MASK_I2C1_SR1_TXE        0x80

#define MASK_I2C1_SR2_BERR       0x01
#define MASK_I2C1_SR2_ARLO       0x02
#define MASK_I2C1_SR2_AF         0x04
#define MASK_I2C1_SR2_OVR        0x08
#define MASK_I2C1_SR2_PECERR     0x10
#define MASK_I2C1_SR2_WUFH       0x20
#define MASK_I2C1_SR2_TIMEOUT    0x40
#define MASK_I2C1_SR2_SMBALERT   0x80

#define MASK_I2C1_SR3_MSL        0x01
#define MASK_I2C1_SR3_BUSY       0x02
#define MASK_I2C1_SR3_TRA        0x04
#define MASK_I2C1_SR3_GENCALL    0x10
#define MASK_I2C1_SR3_SMBDEFAULT 0x20
#define MASK_I2C1_SR3_SMBHOST    0x40

#define MASK_I2C1_ITR_ITERREN    0x01
#define MASK_I2C1_ITR_ITEVTEN    0x02
#define MASK_I2C1_ITR_ITBUFEN    0x04
#define MASK_I2C1_ITR_DMAEN      0x08
#define MASK_I2C1_ITR_LAST       0x10

#define MASK_I2C1_CCRL_CCR0      0x01
#define MASK_I2C1_CCRL_CCR1      0x02
#define MASK_I2C1_CCRL_CCR2      0x04
#define MASK_I2C1_CCRL_CCR3      0x08
#define MASK_I2C1_CCRL_CCR4      0x10
#define MASK_I2C1_CCRL_CCR5      0x20
#define MASK_I2C1_CCRL_CCR6      0x40
#define MASK_I2C1_CCRL_CCR7      0x80

#define MASK_I2C1_CCRH_CCR8      0x01
#define MASK_I2C1_CCRH_CCR9      0x02
#define MASK_I2C1_CCRH_CCR10     0x04
#define MASK_I2C1_CCRH_CCR11     0x08
#define MASK_I2C1_CCRH_DUTY      0x40
#define MASK_I2C1_CCRH_F_S       0x80

#define MASK_I2C1_TRISER_TRISE   0x3F


/*-------------------------------------------------------------------------
 *      USART1 register definitions
 *-----------------------------------------------------------------------*/
/* USART1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PE          : 1;
  unsigned char FE          : 1;
  unsigned char NF          : 1;
  unsigned char OR          : 1;
  unsigned char IDLE        : 1;
  unsigned char RXNE        : 1;
  unsigned char TC          : 1;
  unsigned char TXE         : 1;
} __BITS_USART1_SR;
#endif
__IO_REG8_BIT(USART1_SR,   0x5230, __READ, __BITS_USART1_SR);

/* USART1 data register */
__IO_REG8    (USART1_DR,   0x5231, __READ_WRITE);
/* USART1 baud rate register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV4  : 1;
  unsigned char USART_DIV5  : 1;
  unsigned char USART_DIV6  : 1;
  unsigned char USART_DIV7  : 1;
  unsigned char USART_DIV8  : 1;
  unsigned char USART_DIV9  : 1;
  unsigned char USART_DIV10 : 1;
  unsigned char USART_DIV11 : 1;
} __BITS_USART1_BRR1;
#endif
__IO_REG8_BIT(USART1_BRR1, 0x5232, __READ_WRITE, __BITS_USART1_BRR1);

/* USART1 baud rate register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char USART_DIV0  : 1;
  unsigned char USART_DIV1  : 1;
  unsigned char USART_DIV2  : 1;
  unsigned char USART_DIV3  : 1;
  unsigned char USART_DIV12 : 1;
  unsigned char USART_DIV13 : 1;
  unsigned char USART_DIV14 : 1;
  unsigned char USART_DIV15 : 1;
} __BITS_USART1_BRR2;
#endif
__IO_REG8_BIT(USART1_BRR2, 0x5233, __READ_WRITE, __BITS_USART1_BRR2);

/* USART1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PIEN        : 1;
  unsigned char PS          : 1;
  unsigned char PCEN        : 1;
  unsigned char WAKE        : 1;
  unsigned char M           : 1;
  unsigned char USARTD      : 1;
  unsigned char T8          : 1;
  unsigned char R8          : 1;
} __BITS_USART1_CR1;
#endif
__IO_REG8_BIT(USART1_CR1,  0x5234, __READ_WRITE, __BITS_USART1_CR1);

/* USART1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SBK         : 1;
  unsigned char RWU         : 1;
  unsigned char REN         : 1;
  unsigned char TEN         : 1;
  unsigned char ILIEN       : 1;
  unsigned char RIEN        : 1;
  unsigned char TCIEN       : 1;
  unsigned char TIEN        : 1;
} __BITS_USART1_CR2;
#endif
__IO_REG8_BIT(USART1_CR2,  0x5235, __READ_WRITE, __BITS_USART1_CR2);

/* USART1 control register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LBCL        : 1;
  unsigned char CPHA        : 1;
  unsigned char CPOL        : 1;
  unsigned char CLKEN       : 1;
  unsigned char STOP0       : 1;
  unsigned char STOP1       : 1;
} __BITS_USART1_CR3;
#endif
__IO_REG8_BIT(USART1_CR3,  0x5236, __READ_WRITE, __BITS_USART1_CR3);

/* USART1 control register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADD0        : 1;
  unsigned char ADD1        : 1;
  unsigned char ADD2        : 1;
  unsigned char ADD3        : 1;
} __BITS_USART1_CR4;
#endif
__IO_REG8_BIT(USART1_CR4,  0x5237, __READ_WRITE, __BITS_USART1_CR4);

/* USART1 control register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EIE         : 1;
  unsigned char IREN        : 1;
  unsigned char IRLP        : 1;
  unsigned char HDSEL       : 1;
  unsigned char NACK        : 1;
  unsigned char SCEN        : 1;
  unsigned char DMAR        : 1;
  unsigned char DMAT        : 1;
} __BITS_USART1_CR5;
#endif
__IO_REG8_BIT(USART1_CR5,  0x5238, __READ_WRITE, __BITS_USART1_CR5);

/* USART1 guard time register */
__IO_REG8    (USART1_GTR,  0x5239, __READ_WRITE);
/* USART1 prescaler register */
__IO_REG8    (USART1_PSCR, 0x523A, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      USART1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define USART1_SR_PE             USART1_SR_bit.PE
#define USART1_SR_FE             USART1_SR_bit.FE
#define USART1_SR_NF             USART1_SR_bit.NF
#define USART1_SR_OR             USART1_SR_bit.OR
#define USART1_SR_IDLE           USART1_SR_bit.IDLE
#define USART1_SR_RXNE           USART1_SR_bit.RXNE
#define USART1_SR_TC             USART1_SR_bit.TC
#define USART1_SR_TXE            USART1_SR_bit.TXE

#define USART1_BRR1_USART_DIV4   USART1_BRR1_bit.USART_DIV4
#define USART1_BRR1_USART_DIV5   USART1_BRR1_bit.USART_DIV5
#define USART1_BRR1_USART_DIV6   USART1_BRR1_bit.USART_DIV6
#define USART1_BRR1_USART_DIV7   USART1_BRR1_bit.USART_DIV7
#define USART1_BRR1_USART_DIV8   USART1_BRR1_bit.USART_DIV8
#define USART1_BRR1_USART_DIV9   USART1_BRR1_bit.USART_DIV9
#define USART1_BRR1_USART_DIV10  USART1_BRR1_bit.USART_DIV10
#define USART1_BRR1_USART_DIV11  USART1_BRR1_bit.USART_DIV11

#define USART1_BRR2_USART_DIV0   USART1_BRR2_bit.USART_DIV0
#define USART1_BRR2_USART_DIV1   USART1_BRR2_bit.USART_DIV1
#define USART1_BRR2_USART_DIV2   USART1_BRR2_bit.USART_DIV2
#define USART1_BRR2_USART_DIV3   USART1_BRR2_bit.USART_DIV3
#define USART1_BRR2_USART_DIV12  USART1_BRR2_bit.USART_DIV12
#define USART1_BRR2_USART_DIV13  USART1_BRR2_bit.USART_DIV13
#define USART1_BRR2_USART_DIV14  USART1_BRR2_bit.USART_DIV14
#define USART1_BRR2_USART_DIV15  USART1_BRR2_bit.USART_DIV15

#define USART1_CR1_PIEN          USART1_CR1_bit.PIEN
#define USART1_CR1_PS            USART1_CR1_bit.PS
#define USART1_CR1_PCEN          USART1_CR1_bit.PCEN
#define USART1_CR1_WAKE          USART1_CR1_bit.WAKE
#define USART1_CR1_M             USART1_CR1_bit.M
#define USART1_CR1_USARTD        USART1_CR1_bit.USARTD
#define USART1_CR1_T8            USART1_CR1_bit.T8
#define USART1_CR1_R8            USART1_CR1_bit.R8

#define USART1_CR2_SBK           USART1_CR2_bit.SBK
#define USART1_CR2_RWU           USART1_CR2_bit.RWU
#define USART1_CR2_REN           USART1_CR2_bit.REN
#define USART1_CR2_TEN           USART1_CR2_bit.TEN
#define USART1_CR2_ILIEN         USART1_CR2_bit.ILIEN
#define USART1_CR2_RIEN          USART1_CR2_bit.RIEN
#define USART1_CR2_TCIEN         USART1_CR2_bit.TCIEN
#define USART1_CR2_TIEN          USART1_CR2_bit.TIEN

#define USART1_CR3_LBCL          USART1_CR3_bit.LBCL
#define USART1_CR3_CPHA          USART1_CR3_bit.CPHA
#define USART1_CR3_CPOL          USART1_CR3_bit.CPOL
#define USART1_CR3_CLKEN         USART1_CR3_bit.CLKEN
#define USART1_CR3_STOP0         USART1_CR3_bit.STOP0
#define USART1_CR3_STOP1         USART1_CR3_bit.STOP1

#define USART1_CR4_ADD0          USART1_CR4_bit.ADD0
#define USART1_CR4_ADD1          USART1_CR4_bit.ADD1
#define USART1_CR4_ADD2          USART1_CR4_bit.ADD2
#define USART1_CR4_ADD3          USART1_CR4_bit.ADD3

#define USART1_CR5_EIE           USART1_CR5_bit.EIE
#define USART1_CR5_IREN          USART1_CR5_bit.IREN
#define USART1_CR5_IRLP          USART1_CR5_bit.IRLP
#define USART1_CR5_HDSEL         USART1_CR5_bit.HDSEL
#define USART1_CR5_NACK          USART1_CR5_bit.NACK
#define USART1_CR5_SCEN          USART1_CR5_bit.SCEN
#define USART1_CR5_DMAR          USART1_CR5_bit.DMAR
#define USART1_CR5_DMAT          USART1_CR5_bit.DMAT

#endif

/*-------------------------------------------------------------------------
 *      USART1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_USART1_SR_PE        0x01
#define MASK_USART1_SR_FE        0x02
#define MASK_USART1_SR_NF        0x04
#define MASK_USART1_SR_OR        0x08
#define MASK_USART1_SR_IDLE      0x10
#define MASK_USART1_SR_RXNE      0x20
#define MASK_USART1_SR_TC        0x40
#define MASK_USART1_SR_TXE       0x80

#define MASK_USART1_BRR1_USART_DIV4 0x01
#define MASK_USART1_BRR1_USART_DIV5 0x02
#define MASK_USART1_BRR1_USART_DIV6 0x04
#define MASK_USART1_BRR1_USART_DIV7 0x08
#define MASK_USART1_BRR1_USART_DIV8 0x10
#define MASK_USART1_BRR1_USART_DIV9 0x20
#define MASK_USART1_BRR1_USART_DIV10 0x40
#define MASK_USART1_BRR1_USART_DIV11 0x80

#define MASK_USART1_BRR2_USART_DIV0 0x01
#define MASK_USART1_BRR2_USART_DIV1 0x02
#define MASK_USART1_BRR2_USART_DIV2 0x04
#define MASK_USART1_BRR2_USART_DIV3 0x08
#define MASK_USART1_BRR2_USART_DIV12 0x10
#define MASK_USART1_BRR2_USART_DIV13 0x20
#define MASK_USART1_BRR2_USART_DIV14 0x40
#define MASK_USART1_BRR2_USART_DIV15 0x80

#define MASK_USART1_CR1_PIEN     0x01
#define MASK_USART1_CR1_PS       0x02
#define MASK_USART1_CR1_PCEN     0x04
#define MASK_USART1_CR1_WAKE     0x08
#define MASK_USART1_CR1_M        0x10
#define MASK_USART1_CR1_USARTD   0x20
#define MASK_USART1_CR1_T8       0x40
#define MASK_USART1_CR1_R8       0x80

#define MASK_USART1_CR2_SBK      0x01
#define MASK_USART1_CR2_RWU      0x02
#define MASK_USART1_CR2_REN      0x04
#define MASK_USART1_CR2_TEN      0x08
#define MASK_USART1_CR2_ILIEN    0x10
#define MASK_USART1_CR2_RIEN     0x20
#define MASK_USART1_CR2_TCIEN    0x40
#define MASK_USART1_CR2_TIEN     0x80

#define MASK_USART1_CR3_LBCL     0x01
#define MASK_USART1_CR3_CPHA     0x02
#define MASK_USART1_CR3_CPOL     0x04
#define MASK_USART1_CR3_CLKEN    0x08
#define MASK_USART1_CR3_STOP0    0x10
#define MASK_USART1_CR3_STOP1    0x20

#define MASK_USART1_CR4_ADD0     0x01
#define MASK_USART1_CR4_ADD1     0x02
#define MASK_USART1_CR4_ADD2     0x04
#define MASK_USART1_CR4_ADD3     0x08

#define MASK_USART1_CR5_EIE      0x01
#define MASK_USART1_CR5_IREN     0x02
#define MASK_USART1_CR5_IRLP     0x04
#define MASK_USART1_CR5_HDSEL    0x08
#define MASK_USART1_CR5_NACK     0x10
#define MASK_USART1_CR5_SCEN     0x20
#define MASK_USART1_CR5_DMAR     0x40
#define MASK_USART1_CR5_DMAT     0x80


/*-------------------------------------------------------------------------
 *      TIM2 register definitions
 *-----------------------------------------------------------------------*/
/* TIM2 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM2_CR1;
#endif
__IO_REG8_BIT(TIM2_CR1,    0x5250, __READ_WRITE, __BITS_TIM2_CR1);

/* TIM2 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 3;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM2_CR2;
#endif
__IO_REG8_BIT(TIM2_CR2,    0x5251, __READ_WRITE, __BITS_TIM2_CR2);

/* TIM2 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM2_SMCR;
#endif
__IO_REG8_BIT(TIM2_SMCR,   0x5252, __READ_WRITE, __BITS_TIM2_SMCR);

/* TIM2 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM2_ETR;
#endif
__IO_REG8_BIT(TIM2_ETR,    0x5253, __READ_WRITE, __BITS_TIM2_ETR);

/* TIM2 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
} __BITS_TIM2_DER;
#endif
__IO_REG8_BIT(TIM2_DER,    0x5254, __READ_WRITE, __BITS_TIM2_DER);

/* TIM2 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM2_IER;
#endif
__IO_REG8_BIT(TIM2_IER,    0x5255, __READ_WRITE, __BITS_TIM2_IER);

/* TIM2 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM2_SR1;
#endif
__IO_REG8_BIT(TIM2_SR1,    0x5256, __READ_WRITE, __BITS_TIM2_SR1);

/* TIM2 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM2_SR2;
#endif
__IO_REG8_BIT(TIM2_SR2,    0x5257, __READ_WRITE, __BITS_TIM2_SR2);

/* TIM2 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM2_EGR;
#endif
__IO_REG8_BIT(TIM2_EGR,    0x5258, __WRITE, __BITS_TIM2_EGR);

/* TIM2 capture/compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM2_CCMR1;
#endif
__IO_REG8_BIT(TIM2_CCMR1,  0x5259, __READ_WRITE, __BITS_TIM2_CCMR1);

/* TIM2 capture/compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM2_CCMR2;
#endif
__IO_REG8_BIT(TIM2_CCMR2,  0x525A, __READ_WRITE, __BITS_TIM2_CCMR2);

/* TIM2 capture/compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM2_CCER1;
#endif
__IO_REG8_BIT(TIM2_CCER1,  0x525B, __READ_WRITE, __BITS_TIM2_CCER1);

/* TIM2 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM2_CNTRH;
#endif
__IO_REG8_BIT(TIM2_CNTRH,  0x525C, __READ_WRITE, __BITS_TIM2_CNTRH);

/* TIM2 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM2_CNTRL;
#endif
__IO_REG8_BIT(TIM2_CNTRL,  0x525D, __READ_WRITE, __BITS_TIM2_CNTRL);

/* TIM2 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM2_PSCR;
#endif
__IO_REG8_BIT(TIM2_PSCR,   0x525E, __READ_WRITE, __BITS_TIM2_PSCR);

/* TIM2 auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM2_ARRH;
#endif
__IO_REG8_BIT(TIM2_ARRH,   0x525F, __READ_WRITE, __BITS_TIM2_ARRH);

/* TIM2 auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM2_ARRL;
#endif
__IO_REG8_BIT(TIM2_ARRL,   0x5260, __READ_WRITE, __BITS_TIM2_ARRL);

/* TIM2 capture/compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM2_CCR1H;
#endif
__IO_REG8_BIT(TIM2_CCR1H,  0x5261, __READ_WRITE, __BITS_TIM2_CCR1H);

/* TIM2 capture/compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM2_CCR1L;
#endif
__IO_REG8_BIT(TIM2_CCR1L,  0x5262, __READ_WRITE, __BITS_TIM2_CCR1L);

/* TIM2 capture/compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM2_CCR2H;
#endif
__IO_REG8_BIT(TIM2_CCR2H,  0x5263, __READ_WRITE, __BITS_TIM2_CCR2H);

/* TIM2 capture/compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM2_CCR2L;
#endif
__IO_REG8_BIT(TIM2_CCR2L,  0x5264, __READ_WRITE, __BITS_TIM2_CCR2L);

/* TIM2 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM2_BKR;
#endif
__IO_REG8_BIT(TIM2_BKR,    0x5265, __READ_WRITE, __BITS_TIM2_BKR);

/* TIM2 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char OIS2        : 1;
} __BITS_TIM2_OISR;
#endif
__IO_REG8_BIT(TIM2_OISR,   0x5266, __READ_WRITE, __BITS_TIM2_OISR);


/*-------------------------------------------------------------------------
 *      TIM2 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM2_CR1_CEN             TIM2_CR1_bit.CEN
#define TIM2_CR1_UDIS            TIM2_CR1_bit.UDIS
#define TIM2_CR1_URS             TIM2_CR1_bit.URS
#define TIM2_CR1_OPM             TIM2_CR1_bit.OPM
#define TIM2_CR1_DIR             TIM2_CR1_bit.DIR
#define TIM2_CR1_CMS             TIM2_CR1_bit.CMS
#define TIM2_CR1_ARPE            TIM2_CR1_bit.ARPE

#define TIM2_CR2_CCDS            TIM2_CR2_bit.CCDS
#define TIM2_CR2_MMS             TIM2_CR2_bit.MMS
#define TIM2_CR2_TI1S            TIM2_CR2_bit.TI1S

#define TIM2_SMCR_SMS            TIM2_SMCR_bit.SMS
#define TIM2_SMCR_TS             TIM2_SMCR_bit.TS
#define TIM2_SMCR_MSM            TIM2_SMCR_bit.MSM

#define TIM2_ETR_ETF             TIM2_ETR_bit.ETF
#define TIM2_ETR_ETPS            TIM2_ETR_bit.ETPS
#define TIM2_ETR_ECE             TIM2_ETR_bit.ECE
#define TIM2_ETR_ETP             TIM2_ETR_bit.ETP

#define TIM2_DER_UDE             TIM2_DER_bit.UDE
#define TIM2_DER_CC1DE           TIM2_DER_bit.CC1DE
#define TIM2_DER_CC2DE           TIM2_DER_bit.CC2DE

#define TIM2_IER_UIE             TIM2_IER_bit.UIE
#define TIM2_IER_CC1IE           TIM2_IER_bit.CC1IE
#define TIM2_IER_CC2IE           TIM2_IER_bit.CC2IE
#define TIM2_IER_TIE             TIM2_IER_bit.TIE
#define TIM2_IER_BIE             TIM2_IER_bit.BIE

#define TIM2_SR1_UIF             TIM2_SR1_bit.UIF
#define TIM2_SR1_CC1IF           TIM2_SR1_bit.CC1IF
#define TIM2_SR1_CC2IF           TIM2_SR1_bit.CC2IF
#define TIM2_SR1_TIF             TIM2_SR1_bit.TIF
#define TIM2_SR1_BIF             TIM2_SR1_bit.BIF

#define TIM2_SR2_CC1OF           TIM2_SR2_bit.CC1OF
#define TIM2_SR2_CC2OF           TIM2_SR2_bit.CC2OF

#define TIM2_EGR_UG              TIM2_EGR_bit.UG
#define TIM2_EGR_CC1G            TIM2_EGR_bit.CC1G
#define TIM2_EGR_CC2G            TIM2_EGR_bit.CC2G
#define TIM2_EGR_TG              TIM2_EGR_bit.TG
#define TIM2_EGR_BG              TIM2_EGR_bit.BG

#define TIM2_CCMR1_CC1S          TIM2_CCMR1_bit.CC1S
#define TIM2_CCMR1_OC1FE         TIM2_CCMR1_bit.OC1FE
#define TIM2_CCMR1_OC1PE         TIM2_CCMR1_bit.OC1PE
#define TIM2_CCMR1_OC1M          TIM2_CCMR1_bit.OC1M

#define TIM2_CCMR2_CC2S          TIM2_CCMR2_bit.CC2S
#define TIM2_CCMR2_OC2FE         TIM2_CCMR2_bit.OC2FE
#define TIM2_CCMR2_OC2PE         TIM2_CCMR2_bit.OC2PE
#define TIM2_CCMR2_OC2M          TIM2_CCMR2_bit.OC2M

#define TIM2_CCER1_CC1E          TIM2_CCER1_bit.CC1E
#define TIM2_CCER1_CC1P          TIM2_CCER1_bit.CC1P
#define TIM2_CCER1_CC2E          TIM2_CCER1_bit.CC2E
#define TIM2_CCER1_CC2P          TIM2_CCER1_bit.CC2P

#define TIM2_CNTRH_CNT8          TIM2_CNTRH_bit.CNT8
#define TIM2_CNTRH_CNT9          TIM2_CNTRH_bit.CNT9
#define TIM2_CNTRH_CNT10         TIM2_CNTRH_bit.CNT10
#define TIM2_CNTRH_CNT11         TIM2_CNTRH_bit.CNT11
#define TIM2_CNTRH_CNT12         TIM2_CNTRH_bit.CNT12
#define TIM2_CNTRH_CNT13         TIM2_CNTRH_bit.CNT13
#define TIM2_CNTRH_CNT14         TIM2_CNTRH_bit.CNT14
#define TIM2_CNTRH_CNT15         TIM2_CNTRH_bit.CNT15

#define TIM2_CNTRL_CNT0          TIM2_CNTRL_bit.CNT0
#define TIM2_CNTRL_CNT1          TIM2_CNTRL_bit.CNT1
#define TIM2_CNTRL_CNT2          TIM2_CNTRL_bit.CNT2
#define TIM2_CNTRL_CNT3          TIM2_CNTRL_bit.CNT3
#define TIM2_CNTRL_CNT4          TIM2_CNTRL_bit.CNT4
#define TIM2_CNTRL_CNT5          TIM2_CNTRL_bit.CNT5
#define TIM2_CNTRL_CNT6          TIM2_CNTRL_bit.CNT6
#define TIM2_CNTRL_CNT7          TIM2_CNTRL_bit.CNT7

#define TIM2_PSCR_PSC            TIM2_PSCR_bit.PSC

#define TIM2_ARRH_ARR8           TIM2_ARRH_bit.ARR8
#define TIM2_ARRH_ARR9           TIM2_ARRH_bit.ARR9
#define TIM2_ARRH_ARR10          TIM2_ARRH_bit.ARR10
#define TIM2_ARRH_ARR11          TIM2_ARRH_bit.ARR11
#define TIM2_ARRH_ARR12          TIM2_ARRH_bit.ARR12
#define TIM2_ARRH_ARR13          TIM2_ARRH_bit.ARR13
#define TIM2_ARRH_ARR14          TIM2_ARRH_bit.ARR14
#define TIM2_ARRH_ARR15          TIM2_ARRH_bit.ARR15

#define TIM2_ARRL_ARR0           TIM2_ARRL_bit.ARR0
#define TIM2_ARRL_ARR1           TIM2_ARRL_bit.ARR1
#define TIM2_ARRL_ARR2           TIM2_ARRL_bit.ARR2
#define TIM2_ARRL_ARR3           TIM2_ARRL_bit.ARR3
#define TIM2_ARRL_ARR4           TIM2_ARRL_bit.ARR4
#define TIM2_ARRL_ARR5           TIM2_ARRL_bit.ARR5
#define TIM2_ARRL_ARR6           TIM2_ARRL_bit.ARR6
#define TIM2_ARRL_ARR7           TIM2_ARRL_bit.ARR7

#define TIM2_CCR1H_CCR18         TIM2_CCR1H_bit.CCR18
#define TIM2_CCR1H_CCR19         TIM2_CCR1H_bit.CCR19
#define TIM2_CCR1H_CCR110        TIM2_CCR1H_bit.CCR110
#define TIM2_CCR1H_CCR111        TIM2_CCR1H_bit.CCR111
#define TIM2_CCR1H_CCR112        TIM2_CCR1H_bit.CCR112
#define TIM2_CCR1H_CCR113        TIM2_CCR1H_bit.CCR113
#define TIM2_CCR1H_CCR114        TIM2_CCR1H_bit.CCR114
#define TIM2_CCR1H_CCR115        TIM2_CCR1H_bit.CCR115

#define TIM2_CCR1L_CCR10         TIM2_CCR1L_bit.CCR10
#define TIM2_CCR1L_CCR11         TIM2_CCR1L_bit.CCR11
#define TIM2_CCR1L_CCR12         TIM2_CCR1L_bit.CCR12
#define TIM2_CCR1L_CCR13         TIM2_CCR1L_bit.CCR13
#define TIM2_CCR1L_CCR14         TIM2_CCR1L_bit.CCR14
#define TIM2_CCR1L_CCR15         TIM2_CCR1L_bit.CCR15
#define TIM2_CCR1L_CCR16         TIM2_CCR1L_bit.CCR16
#define TIM2_CCR1L_CCR17         TIM2_CCR1L_bit.CCR17

#define TIM2_CCR2H_CCR28         TIM2_CCR2H_bit.CCR28
#define TIM2_CCR2H_CCR29         TIM2_CCR2H_bit.CCR29
#define TIM2_CCR2H_CCR210        TIM2_CCR2H_bit.CCR210
#define TIM2_CCR2H_CCR211        TIM2_CCR2H_bit.CCR211
#define TIM2_CCR2H_CCR212        TIM2_CCR2H_bit.CCR212
#define TIM2_CCR2H_CCR213        TIM2_CCR2H_bit.CCR213
#define TIM2_CCR2H_CCR214        TIM2_CCR2H_bit.CCR214
#define TIM2_CCR2H_CCR215        TIM2_CCR2H_bit.CCR215

#define TIM2_CCR2L_CCR10         TIM2_CCR2L_bit.CCR10
#define TIM2_CCR2L_CCR11         TIM2_CCR2L_bit.CCR11
#define TIM2_CCR2L_CCR12         TIM2_CCR2L_bit.CCR12
#define TIM2_CCR2L_CCR13         TIM2_CCR2L_bit.CCR13
#define TIM2_CCR2L_CCR14         TIM2_CCR2L_bit.CCR14
#define TIM2_CCR2L_CCR15         TIM2_CCR2L_bit.CCR15
#define TIM2_CCR2L_CCR16         TIM2_CCR2L_bit.CCR16
#define TIM2_CCR2L_CCR17         TIM2_CCR2L_bit.CCR17

#define TIM2_BKR_LOCK            TIM2_BKR_bit.LOCK
#define TIM2_BKR_OSSI            TIM2_BKR_bit.OSSI
#define TIM2_BKR_BKE             TIM2_BKR_bit.BKE
#define TIM2_BKR_BKP             TIM2_BKR_bit.BKP
#define TIM2_BKR_AOE             TIM2_BKR_bit.AOE
#define TIM2_BKR_MOE             TIM2_BKR_bit.MOE

#define TIM2_OISR_OIS1           TIM2_OISR_bit.OIS1
#define TIM2_OISR_OIS2           TIM2_OISR_bit.OIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM2 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM2_CR1_CEN        0x01
#define MASK_TIM2_CR1_UDIS       0x02
#define MASK_TIM2_CR1_URS        0x04
#define MASK_TIM2_CR1_OPM        0x08
#define MASK_TIM2_CR1_DIR        0x10
#define MASK_TIM2_CR1_CMS        0x60
#define MASK_TIM2_CR1_ARPE       0x80

#define MASK_TIM2_CR2_CCDS       0x08
#define MASK_TIM2_CR2_MMS        0x70
#define MASK_TIM2_CR2_TI1S       0x80

#define MASK_TIM2_SMCR_SMS       0x07
#define MASK_TIM2_SMCR_TS        0x70
#define MASK_TIM2_SMCR_MSM       0x80

#define MASK_TIM2_ETR_ETF        0x0F
#define MASK_TIM2_ETR_ETPS       0x30
#define MASK_TIM2_ETR_ECE        0x40
#define MASK_TIM2_ETR_ETP        0x80

#define MASK_TIM2_DER_UDE        0x01
#define MASK_TIM2_DER_CC1DE      0x02
#define MASK_TIM2_DER_CC2DE      0x04

#define MASK_TIM2_IER_UIE        0x01
#define MASK_TIM2_IER_CC1IE      0x02
#define MASK_TIM2_IER_CC2IE      0x04
#define MASK_TIM2_IER_TIE        0x40
#define MASK_TIM2_IER_BIE        0x80

#define MASK_TIM2_SR1_UIF        0x01
#define MASK_TIM2_SR1_CC1IF      0x02
#define MASK_TIM2_SR1_CC2IF      0x04
#define MASK_TIM2_SR1_TIF        0x40
#define MASK_TIM2_SR1_BIF        0x80

#define MASK_TIM2_SR2_CC1OF      0x02
#define MASK_TIM2_SR2_CC2OF      0x04

#define MASK_TIM2_EGR_UG         0x01
#define MASK_TIM2_EGR_CC1G       0x02
#define MASK_TIM2_EGR_CC2G       0x04
#define MASK_TIM2_EGR_TG         0x40
#define MASK_TIM2_EGR_BG         0x80

#define MASK_TIM2_CCMR1_CC1S     0x03
#define MASK_TIM2_CCMR1_OC1FE    0x04
#define MASK_TIM2_CCMR1_OC1PE    0x08
#define MASK_TIM2_CCMR1_OC1M     0x70

#define MASK_TIM2_CCMR2_CC2S     0x03
#define MASK_TIM2_CCMR2_OC2FE    0x04
#define MASK_TIM2_CCMR2_OC2PE    0x08
#define MASK_TIM2_CCMR2_OC2M     0x70

#define MASK_TIM2_CCER1_CC1E     0x01
#define MASK_TIM2_CCER1_CC1P     0x02
#define MASK_TIM2_CCER1_CC2E     0x10
#define MASK_TIM2_CCER1_CC2P     0x20

#define MASK_TIM2_CNTRH_CNT8     0x01
#define MASK_TIM2_CNTRH_CNT9     0x02
#define MASK_TIM2_CNTRH_CNT10    0x04
#define MASK_TIM2_CNTRH_CNT11    0x08
#define MASK_TIM2_CNTRH_CNT12    0x10
#define MASK_TIM2_CNTRH_CNT13    0x20
#define MASK_TIM2_CNTRH_CNT14    0x40
#define MASK_TIM2_CNTRH_CNT15    0x80

#define MASK_TIM2_CNTRL_CNT0     0x01
#define MASK_TIM2_CNTRL_CNT1     0x02
#define MASK_TIM2_CNTRL_CNT2     0x04
#define MASK_TIM2_CNTRL_CNT3     0x08
#define MASK_TIM2_CNTRL_CNT4     0x10
#define MASK_TIM2_CNTRL_CNT5     0x20
#define MASK_TIM2_CNTRL_CNT6     0x40
#define MASK_TIM2_CNTRL_CNT7     0x80

#define MASK_TIM2_PSCR_PSC       0x07

#define MASK_TIM2_ARRH_ARR8      0x01
#define MASK_TIM2_ARRH_ARR9      0x02
#define MASK_TIM2_ARRH_ARR10     0x04
#define MASK_TIM2_ARRH_ARR11     0x08
#define MASK_TIM2_ARRH_ARR12     0x10
#define MASK_TIM2_ARRH_ARR13     0x20
#define MASK_TIM2_ARRH_ARR14     0x40
#define MASK_TIM2_ARRH_ARR15     0x80

#define MASK_TIM2_ARRL_ARR0      0x01
#define MASK_TIM2_ARRL_ARR1      0x02
#define MASK_TIM2_ARRL_ARR2      0x04
#define MASK_TIM2_ARRL_ARR3      0x08
#define MASK_TIM2_ARRL_ARR4      0x10
#define MASK_TIM2_ARRL_ARR5      0x20
#define MASK_TIM2_ARRL_ARR6      0x40
#define MASK_TIM2_ARRL_ARR7      0x80

#define MASK_TIM2_CCR1H_CCR18    0x01
#define MASK_TIM2_CCR1H_CCR19    0x02
#define MASK_TIM2_CCR1H_CCR110   0x04
#define MASK_TIM2_CCR1H_CCR111   0x08
#define MASK_TIM2_CCR1H_CCR112   0x10
#define MASK_TIM2_CCR1H_CCR113   0x20
#define MASK_TIM2_CCR1H_CCR114   0x40
#define MASK_TIM2_CCR1H_CCR115   0x80

#define MASK_TIM2_CCR1L_CCR10    0x01
#define MASK_TIM2_CCR1L_CCR11    0x02
#define MASK_TIM2_CCR1L_CCR12    0x04
#define MASK_TIM2_CCR1L_CCR13    0x08
#define MASK_TIM2_CCR1L_CCR14    0x10
#define MASK_TIM2_CCR1L_CCR15    0x20
#define MASK_TIM2_CCR1L_CCR16    0x40
#define MASK_TIM2_CCR1L_CCR17    0x80

#define MASK_TIM2_CCR2H_CCR28    0x01
#define MASK_TIM2_CCR2H_CCR29    0x02
#define MASK_TIM2_CCR2H_CCR210   0x04
#define MASK_TIM2_CCR2H_CCR211   0x08
#define MASK_TIM2_CCR2H_CCR212   0x10
#define MASK_TIM2_CCR2H_CCR213   0x20
#define MASK_TIM2_CCR2H_CCR214   0x40
#define MASK_TIM2_CCR2H_CCR215   0x80

#define MASK_TIM2_CCR2L_CCR10    0x01
#define MASK_TIM2_CCR2L_CCR11    0x02
#define MASK_TIM2_CCR2L_CCR12    0x04
#define MASK_TIM2_CCR2L_CCR13    0x08
#define MASK_TIM2_CCR2L_CCR14    0x10
#define MASK_TIM2_CCR2L_CCR15    0x20
#define MASK_TIM2_CCR2L_CCR16    0x40
#define MASK_TIM2_CCR2L_CCR17    0x80

#define MASK_TIM2_BKR_LOCK       0x03
#define MASK_TIM2_BKR_OSSI       0x04
#define MASK_TIM2_BKR_BKE        0x10
#define MASK_TIM2_BKR_BKP        0x20
#define MASK_TIM2_BKR_AOE        0x40
#define MASK_TIM2_BKR_MOE        0x80

#define MASK_TIM2_OISR_OIS1      0x01
#define MASK_TIM2_OISR_OIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM3 register definitions
 *-----------------------------------------------------------------------*/
/* TIM3 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM3_CR1;
#endif
__IO_REG8_BIT(TIM3_CR1,    0x5280, __READ_WRITE, __BITS_TIM3_CR1);

/* TIM3 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 3;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM3_CR2;
#endif
__IO_REG8_BIT(TIM3_CR2,    0x5281, __READ_WRITE, __BITS_TIM3_CR2);

/* TIM3 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM3_SMCR;
#endif
__IO_REG8_BIT(TIM3_SMCR,   0x5282, __READ_WRITE, __BITS_TIM3_SMCR);

/* TIM3 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM3_ETR;
#endif
__IO_REG8_BIT(TIM3_ETR,    0x5283, __READ_WRITE, __BITS_TIM3_ETR);

/* TIM3 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
} __BITS_TIM3_DER;
#endif
__IO_REG8_BIT(TIM3_DER,    0x5284, __READ_WRITE, __BITS_TIM3_DER);

/* TIM3 interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char             : 3;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM3_IER;
#endif
__IO_REG8_BIT(TIM3_IER,    0x5285, __READ_WRITE, __BITS_TIM3_IER);

/* TIM3 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char             : 3;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM3_SR1;
#endif
__IO_REG8_BIT(TIM3_SR1,    0x5286, __READ_WRITE, __BITS_TIM3_SR1);

/* TIM3 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
} __BITS_TIM3_SR2;
#endif
__IO_REG8_BIT(TIM3_SR2,    0x5287, __READ_WRITE, __BITS_TIM3_SR2);

/* TIM3 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char             : 3;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM3_EGR;
#endif
__IO_REG8_BIT(TIM3_EGR,    0x5288, __WRITE, __BITS_TIM3_EGR);

/* TIM3 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
} __BITS_TIM3_CCMR1;
#endif
__IO_REG8_BIT(TIM3_CCMR1,  0x5289, __READ_WRITE, __BITS_TIM3_CCMR1);

/* TIM3 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
} __BITS_TIM3_CCMR2;
#endif
__IO_REG8_BIT(TIM3_CCMR2,  0x528A, __READ_WRITE, __BITS_TIM3_CCMR2);

/* TIM3 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char             : 2;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
} __BITS_TIM3_CCER1;
#endif
__IO_REG8_BIT(TIM3_CCER1,  0x528B, __READ_WRITE, __BITS_TIM3_CCER1);

/* TIM3 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM3_CNTRH;
#endif
__IO_REG8_BIT(TIM3_CNTRH,  0x528C, __READ_WRITE, __BITS_TIM3_CNTRH);

/* TIM3 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM3_CNTRL;
#endif
__IO_REG8_BIT(TIM3_CNTRL,  0x528D, __READ_WRITE, __BITS_TIM3_CNTRL);

/* TIM3 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 3;
} __BITS_TIM3_PSCR;
#endif
__IO_REG8_BIT(TIM3_PSCR,   0x528E, __READ_WRITE, __BITS_TIM3_PSCR);

/* TIM3 Auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM3_ARRH;
#endif
__IO_REG8_BIT(TIM3_ARRH,   0x528F, __READ_WRITE, __BITS_TIM3_ARRH);

/* TIM3 Auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM3_ARRL;
#endif
__IO_REG8_BIT(TIM3_ARRL,   0x5290, __READ_WRITE, __BITS_TIM3_ARRL);

/* TIM3 Capture/Compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM3_CCR1H;
#endif
__IO_REG8_BIT(TIM3_CCR1H,  0x5291, __READ_WRITE, __BITS_TIM3_CCR1H);

/* TIM3 Capture/Compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM3_CCR1L;
#endif
__IO_REG8_BIT(TIM3_CCR1L,  0x5292, __READ_WRITE, __BITS_TIM3_CCR1L);

/* TIM3 Capture/Compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM3_CCR2H;
#endif
__IO_REG8_BIT(TIM3_CCR2H,  0x5293, __READ_WRITE, __BITS_TIM3_CCR2H);

/* TIM3 Capture/Compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM3_CCR2L;
#endif
__IO_REG8_BIT(TIM3_CCR2L,  0x5294, __READ_WRITE, __BITS_TIM3_CCR2L);

/* TIM3 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char             : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM3_BKR;
#endif
__IO_REG8_BIT(TIM3_BKR,    0x5295, __READ_WRITE, __BITS_TIM3_BKR);

/* TIM3 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char             : 1;
  unsigned char OIS2        : 1;
} __BITS_TIM3_OISR;
#endif
__IO_REG8_BIT(TIM3_OISR,   0x5296, __READ_WRITE, __BITS_TIM3_OISR);


/*-------------------------------------------------------------------------
 *      TIM3 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM3_CR1_CEN             TIM3_CR1_bit.CEN
#define TIM3_CR1_UDIS            TIM3_CR1_bit.UDIS
#define TIM3_CR1_URS             TIM3_CR1_bit.URS
#define TIM3_CR1_OPM             TIM3_CR1_bit.OPM
#define TIM3_CR1_DIR             TIM3_CR1_bit.DIR
#define TIM3_CR1_CMS             TIM3_CR1_bit.CMS
#define TIM3_CR1_ARPE            TIM3_CR1_bit.ARPE

#define TIM3_CR2_CCDS            TIM3_CR2_bit.CCDS
#define TIM3_CR2_MMS             TIM3_CR2_bit.MMS
#define TIM3_CR2_TI1S            TIM3_CR2_bit.TI1S

#define TIM3_SMCR_SMS            TIM3_SMCR_bit.SMS
#define TIM3_SMCR_TS             TIM3_SMCR_bit.TS
#define TIM3_SMCR_MSM            TIM3_SMCR_bit.MSM

#define TIM3_ETR_ETF             TIM3_ETR_bit.ETF
#define TIM3_ETR_ETPS            TIM3_ETR_bit.ETPS
#define TIM3_ETR_ECE             TIM3_ETR_bit.ECE
#define TIM3_ETR_ETP             TIM3_ETR_bit.ETP

#define TIM3_DER_UDE             TIM3_DER_bit.UDE
#define TIM3_DER_CC1DE           TIM3_DER_bit.CC1DE
#define TIM3_DER_CC2DE           TIM3_DER_bit.CC2DE

#define TIM3_IER_UIE             TIM3_IER_bit.UIE
#define TIM3_IER_CC1IE           TIM3_IER_bit.CC1IE
#define TIM3_IER_CC2IE           TIM3_IER_bit.CC2IE
#define TIM3_IER_TIE             TIM3_IER_bit.TIE
#define TIM3_IER_BIE             TIM3_IER_bit.BIE

#define TIM3_SR1_UIF             TIM3_SR1_bit.UIF
#define TIM3_SR1_CC1IF           TIM3_SR1_bit.CC1IF
#define TIM3_SR1_CC2IF           TIM3_SR1_bit.CC2IF
#define TIM3_SR1_TIF             TIM3_SR1_bit.TIF
#define TIM3_SR1_BIF             TIM3_SR1_bit.BIF

#define TIM3_SR2_CC1OF           TIM3_SR2_bit.CC1OF
#define TIM3_SR2_CC2OF           TIM3_SR2_bit.CC2OF

#define TIM3_EGR_UG              TIM3_EGR_bit.UG
#define TIM3_EGR_CC1G            TIM3_EGR_bit.CC1G
#define TIM3_EGR_CC2G            TIM3_EGR_bit.CC2G
#define TIM3_EGR_TG              TIM3_EGR_bit.TG
#define TIM3_EGR_BG              TIM3_EGR_bit.BG

#define TIM3_CCMR1_CC1S          TIM3_CCMR1_bit.CC1S
#define TIM3_CCMR1_OC1FE         TIM3_CCMR1_bit.OC1FE
#define TIM3_CCMR1_OC1PE         TIM3_CCMR1_bit.OC1PE
#define TIM3_CCMR1_OC1M          TIM3_CCMR1_bit.OC1M

#define TIM3_CCMR2_CC2S          TIM3_CCMR2_bit.CC2S
#define TIM3_CCMR2_OC2FE         TIM3_CCMR2_bit.OC2FE
#define TIM3_CCMR2_OC2PE         TIM3_CCMR2_bit.OC2PE
#define TIM3_CCMR2_OC2M          TIM3_CCMR2_bit.OC2M

#define TIM3_CCER1_CC1E          TIM3_CCER1_bit.CC1E
#define TIM3_CCER1_CC1P          TIM3_CCER1_bit.CC1P
#define TIM3_CCER1_CC2E          TIM3_CCER1_bit.CC2E
#define TIM3_CCER1_CC2P          TIM3_CCER1_bit.CC2P

#define TIM3_CNTRH_CNT8          TIM3_CNTRH_bit.CNT8
#define TIM3_CNTRH_CNT9          TIM3_CNTRH_bit.CNT9
#define TIM3_CNTRH_CNT10         TIM3_CNTRH_bit.CNT10
#define TIM3_CNTRH_CNT11         TIM3_CNTRH_bit.CNT11
#define TIM3_CNTRH_CNT12         TIM3_CNTRH_bit.CNT12
#define TIM3_CNTRH_CNT13         TIM3_CNTRH_bit.CNT13
#define TIM3_CNTRH_CNT14         TIM3_CNTRH_bit.CNT14
#define TIM3_CNTRH_CNT15         TIM3_CNTRH_bit.CNT15

#define TIM3_CNTRL_CNT0          TIM3_CNTRL_bit.CNT0
#define TIM3_CNTRL_CNT1          TIM3_CNTRL_bit.CNT1
#define TIM3_CNTRL_CNT2          TIM3_CNTRL_bit.CNT2
#define TIM3_CNTRL_CNT3          TIM3_CNTRL_bit.CNT3
#define TIM3_CNTRL_CNT4          TIM3_CNTRL_bit.CNT4
#define TIM3_CNTRL_CNT5          TIM3_CNTRL_bit.CNT5
#define TIM3_CNTRL_CNT6          TIM3_CNTRL_bit.CNT6
#define TIM3_CNTRL_CNT7          TIM3_CNTRL_bit.CNT7

#define TIM3_PSCR_PSC            TIM3_PSCR_bit.PSC

#define TIM3_ARRH_ARR8           TIM3_ARRH_bit.ARR8
#define TIM3_ARRH_ARR9           TIM3_ARRH_bit.ARR9
#define TIM3_ARRH_ARR10          TIM3_ARRH_bit.ARR10
#define TIM3_ARRH_ARR11          TIM3_ARRH_bit.ARR11
#define TIM3_ARRH_ARR12          TIM3_ARRH_bit.ARR12
#define TIM3_ARRH_ARR13          TIM3_ARRH_bit.ARR13
#define TIM3_ARRH_ARR14          TIM3_ARRH_bit.ARR14
#define TIM3_ARRH_ARR15          TIM3_ARRH_bit.ARR15

#define TIM3_ARRL_ARR0           TIM3_ARRL_bit.ARR0
#define TIM3_ARRL_ARR1           TIM3_ARRL_bit.ARR1
#define TIM3_ARRL_ARR2           TIM3_ARRL_bit.ARR2
#define TIM3_ARRL_ARR3           TIM3_ARRL_bit.ARR3
#define TIM3_ARRL_ARR4           TIM3_ARRL_bit.ARR4
#define TIM3_ARRL_ARR5           TIM3_ARRL_bit.ARR5
#define TIM3_ARRL_ARR6           TIM3_ARRL_bit.ARR6
#define TIM3_ARRL_ARR7           TIM3_ARRL_bit.ARR7

#define TIM3_CCR1H_CCR18         TIM3_CCR1H_bit.CCR18
#define TIM3_CCR1H_CCR19         TIM3_CCR1H_bit.CCR19
#define TIM3_CCR1H_CCR110        TIM3_CCR1H_bit.CCR110
#define TIM3_CCR1H_CCR111        TIM3_CCR1H_bit.CCR111
#define TIM3_CCR1H_CCR112        TIM3_CCR1H_bit.CCR112
#define TIM3_CCR1H_CCR113        TIM3_CCR1H_bit.CCR113
#define TIM3_CCR1H_CCR114        TIM3_CCR1H_bit.CCR114
#define TIM3_CCR1H_CCR115        TIM3_CCR1H_bit.CCR115

#define TIM3_CCR1L_CCR10         TIM3_CCR1L_bit.CCR10
#define TIM3_CCR1L_CCR11         TIM3_CCR1L_bit.CCR11
#define TIM3_CCR1L_CCR12         TIM3_CCR1L_bit.CCR12
#define TIM3_CCR1L_CCR13         TIM3_CCR1L_bit.CCR13
#define TIM3_CCR1L_CCR14         TIM3_CCR1L_bit.CCR14
#define TIM3_CCR1L_CCR15         TIM3_CCR1L_bit.CCR15
#define TIM3_CCR1L_CCR16         TIM3_CCR1L_bit.CCR16
#define TIM3_CCR1L_CCR17         TIM3_CCR1L_bit.CCR17

#define TIM3_CCR2H_CCR28         TIM3_CCR2H_bit.CCR28
#define TIM3_CCR2H_CCR29         TIM3_CCR2H_bit.CCR29
#define TIM3_CCR2H_CCR210        TIM3_CCR2H_bit.CCR210
#define TIM3_CCR2H_CCR211        TIM3_CCR2H_bit.CCR211
#define TIM3_CCR2H_CCR212        TIM3_CCR2H_bit.CCR212
#define TIM3_CCR2H_CCR213        TIM3_CCR2H_bit.CCR213
#define TIM3_CCR2H_CCR214        TIM3_CCR2H_bit.CCR214
#define TIM3_CCR2H_CCR215        TIM3_CCR2H_bit.CCR215

#define TIM3_CCR2L_CCR10         TIM3_CCR2L_bit.CCR10
#define TIM3_CCR2L_CCR11         TIM3_CCR2L_bit.CCR11
#define TIM3_CCR2L_CCR12         TIM3_CCR2L_bit.CCR12
#define TIM3_CCR2L_CCR13         TIM3_CCR2L_bit.CCR13
#define TIM3_CCR2L_CCR14         TIM3_CCR2L_bit.CCR14
#define TIM3_CCR2L_CCR15         TIM3_CCR2L_bit.CCR15
#define TIM3_CCR2L_CCR16         TIM3_CCR2L_bit.CCR16
#define TIM3_CCR2L_CCR17         TIM3_CCR2L_bit.CCR17

#define TIM3_BKR_LOCK            TIM3_BKR_bit.LOCK
#define TIM3_BKR_OSSI            TIM3_BKR_bit.OSSI
#define TIM3_BKR_BKE             TIM3_BKR_bit.BKE
#define TIM3_BKR_BKP             TIM3_BKR_bit.BKP
#define TIM3_BKR_AOE             TIM3_BKR_bit.AOE
#define TIM3_BKR_MOE             TIM3_BKR_bit.MOE

#define TIM3_OISR_OIS1           TIM3_OISR_bit.OIS1
#define TIM3_OISR_OIS2           TIM3_OISR_bit.OIS2

#endif

/*-------------------------------------------------------------------------
 *      TIM3 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM3_CR1_CEN        0x01
#define MASK_TIM3_CR1_UDIS       0x02
#define MASK_TIM3_CR1_URS        0x04
#define MASK_TIM3_CR1_OPM        0x08
#define MASK_TIM3_CR1_DIR        0x10
#define MASK_TIM3_CR1_CMS        0x60
#define MASK_TIM3_CR1_ARPE       0x80

#define MASK_TIM3_CR2_CCDS       0x08
#define MASK_TIM3_CR2_MMS        0x70
#define MASK_TIM3_CR2_TI1S       0x80

#define MASK_TIM3_SMCR_SMS       0x07
#define MASK_TIM3_SMCR_TS        0x70
#define MASK_TIM3_SMCR_MSM       0x80

#define MASK_TIM3_ETR_ETF        0x0F
#define MASK_TIM3_ETR_ETPS       0x30
#define MASK_TIM3_ETR_ECE        0x40
#define MASK_TIM3_ETR_ETP        0x80

#define MASK_TIM3_DER_UDE        0x01
#define MASK_TIM3_DER_CC1DE      0x02
#define MASK_TIM3_DER_CC2DE      0x04

#define MASK_TIM3_IER_UIE        0x01
#define MASK_TIM3_IER_CC1IE      0x02
#define MASK_TIM3_IER_CC2IE      0x04
#define MASK_TIM3_IER_TIE        0x40
#define MASK_TIM3_IER_BIE        0x80

#define MASK_TIM3_SR1_UIF        0x01
#define MASK_TIM3_SR1_CC1IF      0x02
#define MASK_TIM3_SR1_CC2IF      0x04
#define MASK_TIM3_SR1_TIF        0x40
#define MASK_TIM3_SR1_BIF        0x80

#define MASK_TIM3_SR2_CC1OF      0x02
#define MASK_TIM3_SR2_CC2OF      0x04

#define MASK_TIM3_EGR_UG         0x01
#define MASK_TIM3_EGR_CC1G       0x02
#define MASK_TIM3_EGR_CC2G       0x04
#define MASK_TIM3_EGR_TG         0x40
#define MASK_TIM3_EGR_BG         0x80

#define MASK_TIM3_CCMR1_CC1S     0x03
#define MASK_TIM3_CCMR1_OC1FE    0x04
#define MASK_TIM3_CCMR1_OC1PE    0x08
#define MASK_TIM3_CCMR1_OC1M     0x70

#define MASK_TIM3_CCMR2_CC2S     0x03
#define MASK_TIM3_CCMR2_OC2FE    0x04
#define MASK_TIM3_CCMR2_OC2PE    0x08
#define MASK_TIM3_CCMR2_OC2M     0x70

#define MASK_TIM3_CCER1_CC1E     0x01
#define MASK_TIM3_CCER1_CC1P     0x02
#define MASK_TIM3_CCER1_CC2E     0x10
#define MASK_TIM3_CCER1_CC2P     0x20

#define MASK_TIM3_CNTRH_CNT8     0x01
#define MASK_TIM3_CNTRH_CNT9     0x02
#define MASK_TIM3_CNTRH_CNT10    0x04
#define MASK_TIM3_CNTRH_CNT11    0x08
#define MASK_TIM3_CNTRH_CNT12    0x10
#define MASK_TIM3_CNTRH_CNT13    0x20
#define MASK_TIM3_CNTRH_CNT14    0x40
#define MASK_TIM3_CNTRH_CNT15    0x80

#define MASK_TIM3_CNTRL_CNT0     0x01
#define MASK_TIM3_CNTRL_CNT1     0x02
#define MASK_TIM3_CNTRL_CNT2     0x04
#define MASK_TIM3_CNTRL_CNT3     0x08
#define MASK_TIM3_CNTRL_CNT4     0x10
#define MASK_TIM3_CNTRL_CNT5     0x20
#define MASK_TIM3_CNTRL_CNT6     0x40
#define MASK_TIM3_CNTRL_CNT7     0x80

#define MASK_TIM3_PSCR_PSC       0x07

#define MASK_TIM3_ARRH_ARR8      0x01
#define MASK_TIM3_ARRH_ARR9      0x02
#define MASK_TIM3_ARRH_ARR10     0x04
#define MASK_TIM3_ARRH_ARR11     0x08
#define MASK_TIM3_ARRH_ARR12     0x10
#define MASK_TIM3_ARRH_ARR13     0x20
#define MASK_TIM3_ARRH_ARR14     0x40
#define MASK_TIM3_ARRH_ARR15     0x80

#define MASK_TIM3_ARRL_ARR0      0x01
#define MASK_TIM3_ARRL_ARR1      0x02
#define MASK_TIM3_ARRL_ARR2      0x04
#define MASK_TIM3_ARRL_ARR3      0x08
#define MASK_TIM3_ARRL_ARR4      0x10
#define MASK_TIM3_ARRL_ARR5      0x20
#define MASK_TIM3_ARRL_ARR6      0x40
#define MASK_TIM3_ARRL_ARR7      0x80

#define MASK_TIM3_CCR1H_CCR18    0x01
#define MASK_TIM3_CCR1H_CCR19    0x02
#define MASK_TIM3_CCR1H_CCR110   0x04
#define MASK_TIM3_CCR1H_CCR111   0x08
#define MASK_TIM3_CCR1H_CCR112   0x10
#define MASK_TIM3_CCR1H_CCR113   0x20
#define MASK_TIM3_CCR1H_CCR114   0x40
#define MASK_TIM3_CCR1H_CCR115   0x80

#define MASK_TIM3_CCR1L_CCR10    0x01
#define MASK_TIM3_CCR1L_CCR11    0x02
#define MASK_TIM3_CCR1L_CCR12    0x04
#define MASK_TIM3_CCR1L_CCR13    0x08
#define MASK_TIM3_CCR1L_CCR14    0x10
#define MASK_TIM3_CCR1L_CCR15    0x20
#define MASK_TIM3_CCR1L_CCR16    0x40
#define MASK_TIM3_CCR1L_CCR17    0x80

#define MASK_TIM3_CCR2H_CCR28    0x01
#define MASK_TIM3_CCR2H_CCR29    0x02
#define MASK_TIM3_CCR2H_CCR210   0x04
#define MASK_TIM3_CCR2H_CCR211   0x08
#define MASK_TIM3_CCR2H_CCR212   0x10
#define MASK_TIM3_CCR2H_CCR213   0x20
#define MASK_TIM3_CCR2H_CCR214   0x40
#define MASK_TIM3_CCR2H_CCR215   0x80

#define MASK_TIM3_CCR2L_CCR10    0x01
#define MASK_TIM3_CCR2L_CCR11    0x02
#define MASK_TIM3_CCR2L_CCR12    0x04
#define MASK_TIM3_CCR2L_CCR13    0x08
#define MASK_TIM3_CCR2L_CCR14    0x10
#define MASK_TIM3_CCR2L_CCR15    0x20
#define MASK_TIM3_CCR2L_CCR16    0x40
#define MASK_TIM3_CCR2L_CCR17    0x80

#define MASK_TIM3_BKR_LOCK       0x03
#define MASK_TIM3_BKR_OSSI       0x04
#define MASK_TIM3_BKR_BKE        0x10
#define MASK_TIM3_BKR_BKP        0x20
#define MASK_TIM3_BKR_AOE        0x40
#define MASK_TIM3_BKR_MOE        0x80

#define MASK_TIM3_OISR_OIS1      0x01
#define MASK_TIM3_OISR_OIS2      0x04


/*-------------------------------------------------------------------------
 *      TIM1 register definitions
 *-----------------------------------------------------------------------*/
/* TIM1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char DIR         : 1;
  unsigned char CMS         : 2;
  unsigned char ARPE        : 1;
} __BITS_TIM1_CR1;
#endif
__IO_REG8_BIT(TIM1_CR1,    0x52B0, __READ_WRITE, __BITS_TIM1_CR1);

/* TIM1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCPC        : 1;
  unsigned char             : 1;
  unsigned char COMS        : 1;
  unsigned char CCDS        : 1;
  unsigned char MMS         : 3;
  unsigned char TI1S        : 1;
} __BITS_TIM1_CR2;
#endif
__IO_REG8_BIT(TIM1_CR2,    0x52B1, __READ_WRITE, __BITS_TIM1_CR2);

/* TIM1 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char OCCS        : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM1_SMCR;
#endif
__IO_REG8_BIT(TIM1_SMCR,   0x52B2, __READ_WRITE, __BITS_TIM1_SMCR);

/* TIM1 external trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ETF         : 4;
  unsigned char ETPS        : 2;
  unsigned char ECE         : 1;
  unsigned char ETP         : 1;
} __BITS_TIM1_ETR;
#endif
__IO_REG8_BIT(TIM1_ETR,    0x52B3, __READ_WRITE, __BITS_TIM1_ETR);

/* TIM1 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
  unsigned char CC1DE       : 1;
  unsigned char CC2DE       : 1;
  unsigned char CC3DE       : 1;
  unsigned char CC4DE       : 1;
  unsigned char COMDE       : 1;
} __BITS_TIM1_DER;
#endif
__IO_REG8_BIT(TIM1_DER,    0x52B4, __READ_WRITE, __BITS_TIM1_DER);

/* TIM1 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char CC1IE       : 1;
  unsigned char CC2IE       : 1;
  unsigned char CC3IE       : 1;
  unsigned char CC4IE       : 1;
  unsigned char COMIE       : 1;
  unsigned char TIE         : 1;
  unsigned char BIE         : 1;
} __BITS_TIM1_IER;
#endif
__IO_REG8_BIT(TIM1_IER,    0x52B5, __READ_WRITE, __BITS_TIM1_IER);

/* TIM1 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char CC1IF       : 1;
  unsigned char CC2IF       : 1;
  unsigned char CC3IF       : 1;
  unsigned char CC4IF       : 1;
  unsigned char COMIF       : 1;
  unsigned char TIF         : 1;
  unsigned char BIF         : 1;
} __BITS_TIM1_SR1;
#endif
__IO_REG8_BIT(TIM1_SR1,    0x52B6, __READ_WRITE, __BITS_TIM1_SR1);

/* TIM1 status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 1;
  unsigned char CC1OF       : 1;
  unsigned char CC2OF       : 1;
  unsigned char CC3OF       : 1;
  unsigned char CC4OF       : 1;
} __BITS_TIM1_SR2;
#endif
__IO_REG8_BIT(TIM1_SR2,    0x52B7, __READ_WRITE, __BITS_TIM1_SR2);

/* TIM1 event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char CC1G        : 1;
  unsigned char CC2G        : 1;
  unsigned char CC3G        : 1;
  unsigned char CC4G        : 1;
  unsigned char COMG        : 1;
  unsigned char TG          : 1;
  unsigned char BG          : 1;
} __BITS_TIM1_EGR;
#endif
__IO_REG8_BIT(TIM1_EGR,    0x52B8, __WRITE, __BITS_TIM1_EGR);

/* TIM1 Capture/Compare mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1S        : 2;
  unsigned char OC1FE       : 1;
  unsigned char OC1PE       : 1;
  unsigned char OC1M        : 3;
  unsigned char OC1CE       : 1;
} __BITS_TIM1_CCMR1;
#endif
__IO_REG8_BIT(TIM1_CCMR1,  0x52B9, __READ_WRITE, __BITS_TIM1_CCMR1);

/* TIM1 Capture/Compare mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC2S        : 2;
  unsigned char OC2FE       : 1;
  unsigned char OC2PE       : 1;
  unsigned char OC2M        : 3;
  unsigned char OC2CE       : 1;
} __BITS_TIM1_CCMR2;
#endif
__IO_REG8_BIT(TIM1_CCMR2,  0x52BA, __READ_WRITE, __BITS_TIM1_CCMR2);

/* TIM1 Capture/Compare mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3S        : 2;
  unsigned char OC3FE       : 1;
  unsigned char OC3PE       : 1;
  unsigned char OC3M        : 3;
  unsigned char OC3CE       : 1;
} __BITS_TIM1_CCMR3;
#endif
__IO_REG8_BIT(TIM1_CCMR3,  0x52BB, __READ_WRITE, __BITS_TIM1_CCMR3);

/* TIM1 Capture/Compare mode register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC4S        : 2;
  unsigned char             : 1;
  unsigned char OC4PE       : 1;
  unsigned char OC4M        : 3;
  unsigned char OC4CE       : 1;
} __BITS_TIM1_CCMR4;
#endif
__IO_REG8_BIT(TIM1_CCMR4,  0x52BC, __READ_WRITE, __BITS_TIM1_CCMR4);

/* TIM1 Capture/Compare enable register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC1E        : 1;
  unsigned char CC1P        : 1;
  unsigned char CC1NE       : 1;
  unsigned char CC1NP       : 1;
  unsigned char CC2E        : 1;
  unsigned char CC2P        : 1;
  unsigned char CC2NE       : 1;
  unsigned char CC2NP       : 1;
} __BITS_TIM1_CCER1;
#endif
__IO_REG8_BIT(TIM1_CCER1,  0x52BD, __READ_WRITE, __BITS_TIM1_CCER1);

/* TIM1 Capture/Compare enable register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CC3E        : 1;
  unsigned char CC3P        : 1;
  unsigned char CC3NE       : 1;
  unsigned char CC3NP       : 1;
  unsigned char CC4E        : 1;
  unsigned char CC4P        : 1;
} __BITS_TIM1_CCER2;
#endif
__IO_REG8_BIT(TIM1_CCER2,  0x52BE, __READ_WRITE, __BITS_TIM1_CCER2);

/* TIM1 counter high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT8        : 1;
  unsigned char CNT9        : 1;
  unsigned char CNT10       : 1;
  unsigned char CNT11       : 1;
  unsigned char CNT12       : 1;
  unsigned char CNT13       : 1;
  unsigned char CNT14       : 1;
  unsigned char CNT15       : 1;
} __BITS_TIM1_CNTRH;
#endif
__IO_REG8_BIT(TIM1_CNTRH,  0x52BF, __READ_WRITE, __BITS_TIM1_CNTRH);

/* TIM1 counter low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM1_CNTRL;
#endif
__IO_REG8_BIT(TIM1_CNTRL,  0x52C0, __READ_WRITE, __BITS_TIM1_CNTRL);

/* TIM1 prescaler register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC8        : 1;
  unsigned char PSC9        : 1;
  unsigned char PSC10       : 1;
  unsigned char PSC11       : 1;
  unsigned char PSC12       : 1;
  unsigned char PSC13       : 1;
  unsigned char PSC14       : 1;
  unsigned char PSC15       : 1;
} __BITS_TIM1_PSCRH;
#endif
__IO_REG8_BIT(TIM1_PSCRH,  0x52C1, __READ_WRITE, __BITS_TIM1_PSCRH);

/* TIM1 prescaler register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC0        : 1;
  unsigned char PSC1        : 1;
  unsigned char PSC2        : 1;
  unsigned char PSC3        : 1;
  unsigned char PSC4        : 1;
  unsigned char PSC5        : 1;
  unsigned char PSC6        : 1;
  unsigned char PSC7        : 1;
} __BITS_TIM1_PSCRL;
#endif
__IO_REG8_BIT(TIM1_PSCRL,  0x52C2, __READ_WRITE, __BITS_TIM1_PSCRL);

/* TIM1 Auto-reload register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR8        : 1;
  unsigned char ARR9        : 1;
  unsigned char ARR10       : 1;
  unsigned char ARR11       : 1;
  unsigned char ARR12       : 1;
  unsigned char ARR13       : 1;
  unsigned char ARR14       : 1;
  unsigned char ARR15       : 1;
} __BITS_TIM1_ARRH;
#endif
__IO_REG8_BIT(TIM1_ARRH,   0x52C3, __READ_WRITE, __BITS_TIM1_ARRH);

/* TIM1 Auto-reload register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM1_ARRL;
#endif
__IO_REG8_BIT(TIM1_ARRL,   0x52C4, __READ_WRITE, __BITS_TIM1_ARRL);

/* TIM1 Repetition counter register */
__IO_REG8    (TIM1_RCR,    0x52C5, __READ_WRITE);
/* TIM1 Capture/Compare register 1 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR18       : 1;
  unsigned char CCR19       : 1;
  unsigned char CCR110      : 1;
  unsigned char CCR111      : 1;
  unsigned char CCR112      : 1;
  unsigned char CCR113      : 1;
  unsigned char CCR114      : 1;
  unsigned char CCR115      : 1;
} __BITS_TIM1_CCR1H;
#endif
__IO_REG8_BIT(TIM1_CCR1H,  0x52C6, __READ_WRITE, __BITS_TIM1_CCR1H);

/* TIM1 Capture/Compare register 1 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR10       : 1;
  unsigned char CCR11       : 1;
  unsigned char CCR12       : 1;
  unsigned char CCR13       : 1;
  unsigned char CCR14       : 1;
  unsigned char CCR15       : 1;
  unsigned char CCR16       : 1;
  unsigned char CCR17       : 1;
} __BITS_TIM1_CCR1L;
#endif
__IO_REG8_BIT(TIM1_CCR1L,  0x52C7, __READ_WRITE, __BITS_TIM1_CCR1L);

/* TIM1 Capture/Compare register 2 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR28       : 1;
  unsigned char CCR29       : 1;
  unsigned char CCR210      : 1;
  unsigned char CCR211      : 1;
  unsigned char CCR212      : 1;
  unsigned char CCR213      : 1;
  unsigned char CCR214      : 1;
  unsigned char CCR215      : 1;
} __BITS_TIM1_CCR2H;
#endif
__IO_REG8_BIT(TIM1_CCR2H,  0x52C8, __READ_WRITE, __BITS_TIM1_CCR2H);

/* TIM1 Capture/Compare register 2 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR20       : 1;
  unsigned char CCR21       : 1;
  unsigned char CCR22       : 1;
  unsigned char CCR23       : 1;
  unsigned char CCR24       : 1;
  unsigned char CCR25       : 1;
  unsigned char CCR26       : 1;
  unsigned char CCR27       : 1;
} __BITS_TIM1_CCR2L;
#endif
__IO_REG8_BIT(TIM1_CCR2L,  0x52C9, __READ_WRITE, __BITS_TIM1_CCR2L);

/* TIM1 Capture/Compare register 3 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR38       : 1;
  unsigned char CCR39       : 1;
  unsigned char CCR310      : 1;
  unsigned char CCR311      : 1;
  unsigned char CCR312      : 1;
  unsigned char CCR313      : 1;
  unsigned char CCR314      : 1;
  unsigned char CCR315      : 1;
} __BITS_TIM1_CCR3H;
#endif
__IO_REG8_BIT(TIM1_CCR3H,  0x52CA, __READ_WRITE, __BITS_TIM1_CCR3H);

/* TIM1 Capture/Compare register 3 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR30       : 1;
  unsigned char CCR31       : 1;
  unsigned char CCR32       : 1;
  unsigned char CCR33       : 1;
  unsigned char CCR34       : 1;
  unsigned char CCR35       : 1;
  unsigned char CCR36       : 1;
  unsigned char CCR37       : 1;
} __BITS_TIM1_CCR3L;
#endif
__IO_REG8_BIT(TIM1_CCR3L,  0x52CB, __READ_WRITE, __BITS_TIM1_CCR3L);

/* TIM1 Capture/Compare register 4 high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR48       : 1;
  unsigned char CCR49       : 1;
  unsigned char CCR410      : 1;
  unsigned char CCR411      : 1;
  unsigned char CCR412      : 1;
  unsigned char CCR413      : 1;
  unsigned char CCR414      : 1;
  unsigned char CCR415      : 1;
} __BITS_TIM1_CCR4H;
#endif
__IO_REG8_BIT(TIM1_CCR4H,  0x52CC, __READ_WRITE, __BITS_TIM1_CCR4H);

/* TIM1 Capture/Compare register 4 low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CCR40       : 1;
  unsigned char CCR41       : 1;
  unsigned char CCR42       : 1;
  unsigned char CCR43       : 1;
  unsigned char CCR44       : 1;
  unsigned char CCR45       : 1;
  unsigned char CCR46       : 1;
  unsigned char CCR47       : 1;
} __BITS_TIM1_CCR4L;
#endif
__IO_REG8_BIT(TIM1_CCR4L,  0x52CD, __READ_WRITE, __BITS_TIM1_CCR4L);

/* TIM1 break register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LOCK        : 2;
  unsigned char OSSI        : 1;
  unsigned char OSSR        : 1;
  unsigned char BKE         : 1;
  unsigned char BKP         : 1;
  unsigned char AOE         : 1;
  unsigned char MOE         : 1;
} __BITS_TIM1_BKR;
#endif
__IO_REG8_BIT(TIM1_BKR,    0x52CE, __READ_WRITE, __BITS_TIM1_BKR);

/* TIM1 dead-time register */
__IO_REG8    (TIM1_DTR,    0x52CF, __READ_WRITE);
/* TIM1 output idle state register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char OIS1        : 1;
  unsigned char OIS1N       : 1;
  unsigned char OIS2        : 1;
  unsigned char OIS2N       : 1;
  unsigned char OIS3        : 1;
  unsigned char OIS3N       : 1;
} __BITS_TIM1_OISR;
#endif
__IO_REG8_BIT(TIM1_OISR,   0x52D0, __READ_WRITE, __BITS_TIM1_OISR);

/* DMA1 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DBA         : 5;
} __BITS_TIM1_DCR1;
#endif
__IO_REG8_BIT(TIM1_DCR1,   0x52D1, __READ_WRITE, __BITS_TIM1_DCR1);

/* TIM1 DMA1 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DBL         : 5;
} __BITS_TIM1_DCR2;
#endif
__IO_REG8_BIT(TIM1_DCR2,   0x52D2, __READ_WRITE, __BITS_TIM1_DCR2);

/* TIM1 DMA1 address for burst mode */
__IO_REG8    (TIM1_DMA1R,  0x52D3, __READ_WRITE);

/*-------------------------------------------------------------------------
 *      TIM1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM1_CR1_CEN             TIM1_CR1_bit.CEN
#define TIM1_CR1_UDIS            TIM1_CR1_bit.UDIS
#define TIM1_CR1_URS             TIM1_CR1_bit.URS
#define TIM1_CR1_OPM             TIM1_CR1_bit.OPM
#define TIM1_CR1_DIR             TIM1_CR1_bit.DIR
#define TIM1_CR1_CMS             TIM1_CR1_bit.CMS
#define TIM1_CR1_ARPE            TIM1_CR1_bit.ARPE

#define TIM1_CR2_CCPC            TIM1_CR2_bit.CCPC
#define TIM1_CR2_COMS            TIM1_CR2_bit.COMS
#define TIM1_CR2_CCDS            TIM1_CR2_bit.CCDS
#define TIM1_CR2_MMS             TIM1_CR2_bit.MMS
#define TIM1_CR2_TI1S            TIM1_CR2_bit.TI1S

#define TIM1_SMCR_SMS            TIM1_SMCR_bit.SMS
#define TIM1_SMCR_OCCS           TIM1_SMCR_bit.OCCS
#define TIM1_SMCR_TS             TIM1_SMCR_bit.TS
#define TIM1_SMCR_MSM            TIM1_SMCR_bit.MSM

#define TIM1_ETR_ETF             TIM1_ETR_bit.ETF
#define TIM1_ETR_ETPS            TIM1_ETR_bit.ETPS
#define TIM1_ETR_ECE             TIM1_ETR_bit.ECE
#define TIM1_ETR_ETP             TIM1_ETR_bit.ETP

#define TIM1_DER_UDE             TIM1_DER_bit.UDE
#define TIM1_DER_CC1DE           TIM1_DER_bit.CC1DE
#define TIM1_DER_CC2DE           TIM1_DER_bit.CC2DE
#define TIM1_DER_CC3DE           TIM1_DER_bit.CC3DE
#define TIM1_DER_CC4DE           TIM1_DER_bit.CC4DE
#define TIM1_DER_COMDE           TIM1_DER_bit.COMDE

#define TIM1_IER_UIE             TIM1_IER_bit.UIE
#define TIM1_IER_CC1IE           TIM1_IER_bit.CC1IE
#define TIM1_IER_CC2IE           TIM1_IER_bit.CC2IE
#define TIM1_IER_CC3IE           TIM1_IER_bit.CC3IE
#define TIM1_IER_CC4IE           TIM1_IER_bit.CC4IE
#define TIM1_IER_COMIE           TIM1_IER_bit.COMIE
#define TIM1_IER_TIE             TIM1_IER_bit.TIE
#define TIM1_IER_BIE             TIM1_IER_bit.BIE

#define TIM1_SR1_UIF             TIM1_SR1_bit.UIF
#define TIM1_SR1_CC1IF           TIM1_SR1_bit.CC1IF
#define TIM1_SR1_CC2IF           TIM1_SR1_bit.CC2IF
#define TIM1_SR1_CC3IF           TIM1_SR1_bit.CC3IF
#define TIM1_SR1_CC4IF           TIM1_SR1_bit.CC4IF
#define TIM1_SR1_COMIF           TIM1_SR1_bit.COMIF
#define TIM1_SR1_TIF             TIM1_SR1_bit.TIF
#define TIM1_SR1_BIF             TIM1_SR1_bit.BIF

#define TIM1_SR2_CC1OF           TIM1_SR2_bit.CC1OF
#define TIM1_SR2_CC2OF           TIM1_SR2_bit.CC2OF
#define TIM1_SR2_CC3OF           TIM1_SR2_bit.CC3OF
#define TIM1_SR2_CC4OF           TIM1_SR2_bit.CC4OF

#define TIM1_EGR_UG              TIM1_EGR_bit.UG
#define TIM1_EGR_CC1G            TIM1_EGR_bit.CC1G
#define TIM1_EGR_CC2G            TIM1_EGR_bit.CC2G
#define TIM1_EGR_CC3G            TIM1_EGR_bit.CC3G
#define TIM1_EGR_CC4G            TIM1_EGR_bit.CC4G
#define TIM1_EGR_COMG            TIM1_EGR_bit.COMG
#define TIM1_EGR_TG              TIM1_EGR_bit.TG
#define TIM1_EGR_BG              TIM1_EGR_bit.BG

#define TIM1_CCMR1_CC1S          TIM1_CCMR1_bit.CC1S
#define TIM1_CCMR1_OC1FE         TIM1_CCMR1_bit.OC1FE
#define TIM1_CCMR1_OC1PE         TIM1_CCMR1_bit.OC1PE
#define TIM1_CCMR1_OC1M          TIM1_CCMR1_bit.OC1M
#define TIM1_CCMR1_OC1CE         TIM1_CCMR1_bit.OC1CE

#define TIM1_CCMR2_CC2S          TIM1_CCMR2_bit.CC2S
#define TIM1_CCMR2_OC2FE         TIM1_CCMR2_bit.OC2FE
#define TIM1_CCMR2_OC2PE         TIM1_CCMR2_bit.OC2PE
#define TIM1_CCMR2_OC2M          TIM1_CCMR2_bit.OC2M
#define TIM1_CCMR2_OC2CE         TIM1_CCMR2_bit.OC2CE

#define TIM1_CCMR3_CC3S          TIM1_CCMR3_bit.CC3S
#define TIM1_CCMR3_OC3FE         TIM1_CCMR3_bit.OC3FE
#define TIM1_CCMR3_OC3PE         TIM1_CCMR3_bit.OC3PE
#define TIM1_CCMR3_OC3M          TIM1_CCMR3_bit.OC3M
#define TIM1_CCMR3_OC3CE         TIM1_CCMR3_bit.OC3CE

#define TIM1_CCMR4_CC4S          TIM1_CCMR4_bit.CC4S
#define TIM1_CCMR4_OC4PE         TIM1_CCMR4_bit.OC4PE
#define TIM1_CCMR4_OC4M          TIM1_CCMR4_bit.OC4M
#define TIM1_CCMR4_OC4CE         TIM1_CCMR4_bit.OC4CE

#define TIM1_CCER1_CC1E          TIM1_CCER1_bit.CC1E
#define TIM1_CCER1_CC1P          TIM1_CCER1_bit.CC1P
#define TIM1_CCER1_CC1NE         TIM1_CCER1_bit.CC1NE
#define TIM1_CCER1_CC1NP         TIM1_CCER1_bit.CC1NP
#define TIM1_CCER1_CC2E          TIM1_CCER1_bit.CC2E
#define TIM1_CCER1_CC2P          TIM1_CCER1_bit.CC2P
#define TIM1_CCER1_CC2NE         TIM1_CCER1_bit.CC2NE
#define TIM1_CCER1_CC2NP         TIM1_CCER1_bit.CC2NP

#define TIM1_CCER2_CC3E          TIM1_CCER2_bit.CC3E
#define TIM1_CCER2_CC3P          TIM1_CCER2_bit.CC3P
#define TIM1_CCER2_CC3NE         TIM1_CCER2_bit.CC3NE
#define TIM1_CCER2_CC3NP         TIM1_CCER2_bit.CC3NP
#define TIM1_CCER2_CC4E          TIM1_CCER2_bit.CC4E
#define TIM1_CCER2_CC4P          TIM1_CCER2_bit.CC4P

#define TIM1_CNTRH_CNT8          TIM1_CNTRH_bit.CNT8
#define TIM1_CNTRH_CNT9          TIM1_CNTRH_bit.CNT9
#define TIM1_CNTRH_CNT10         TIM1_CNTRH_bit.CNT10
#define TIM1_CNTRH_CNT11         TIM1_CNTRH_bit.CNT11
#define TIM1_CNTRH_CNT12         TIM1_CNTRH_bit.CNT12
#define TIM1_CNTRH_CNT13         TIM1_CNTRH_bit.CNT13
#define TIM1_CNTRH_CNT14         TIM1_CNTRH_bit.CNT14
#define TIM1_CNTRH_CNT15         TIM1_CNTRH_bit.CNT15

#define TIM1_CNTRL_CNT0          TIM1_CNTRL_bit.CNT0
#define TIM1_CNTRL_CNT1          TIM1_CNTRL_bit.CNT1
#define TIM1_CNTRL_CNT2          TIM1_CNTRL_bit.CNT2
#define TIM1_CNTRL_CNT3          TIM1_CNTRL_bit.CNT3
#define TIM1_CNTRL_CNT4          TIM1_CNTRL_bit.CNT4
#define TIM1_CNTRL_CNT5          TIM1_CNTRL_bit.CNT5
#define TIM1_CNTRL_CNT6          TIM1_CNTRL_bit.CNT6
#define TIM1_CNTRL_CNT7          TIM1_CNTRL_bit.CNT7

#define TIM1_PSCRH_PSC8          TIM1_PSCRH_bit.PSC8
#define TIM1_PSCRH_PSC9          TIM1_PSCRH_bit.PSC9
#define TIM1_PSCRH_PSC10         TIM1_PSCRH_bit.PSC10
#define TIM1_PSCRH_PSC11         TIM1_PSCRH_bit.PSC11
#define TIM1_PSCRH_PSC12         TIM1_PSCRH_bit.PSC12
#define TIM1_PSCRH_PSC13         TIM1_PSCRH_bit.PSC13
#define TIM1_PSCRH_PSC14         TIM1_PSCRH_bit.PSC14
#define TIM1_PSCRH_PSC15         TIM1_PSCRH_bit.PSC15

#define TIM1_PSCRL_PSC0          TIM1_PSCRL_bit.PSC0
#define TIM1_PSCRL_PSC1          TIM1_PSCRL_bit.PSC1
#define TIM1_PSCRL_PSC2          TIM1_PSCRL_bit.PSC2
#define TIM1_PSCRL_PSC3          TIM1_PSCRL_bit.PSC3
#define TIM1_PSCRL_PSC4          TIM1_PSCRL_bit.PSC4
#define TIM1_PSCRL_PSC5          TIM1_PSCRL_bit.PSC5
#define TIM1_PSCRL_PSC6          TIM1_PSCRL_bit.PSC6
#define TIM1_PSCRL_PSC7          TIM1_PSCRL_bit.PSC7

#define TIM1_ARRH_ARR8           TIM1_ARRH_bit.ARR8
#define TIM1_ARRH_ARR9           TIM1_ARRH_bit.ARR9
#define TIM1_ARRH_ARR10          TIM1_ARRH_bit.ARR10
#define TIM1_ARRH_ARR11          TIM1_ARRH_bit.ARR11
#define TIM1_ARRH_ARR12          TIM1_ARRH_bit.ARR12
#define TIM1_ARRH_ARR13          TIM1_ARRH_bit.ARR13
#define TIM1_ARRH_ARR14          TIM1_ARRH_bit.ARR14
#define TIM1_ARRH_ARR15          TIM1_ARRH_bit.ARR15

#define TIM1_ARRL_ARR0           TIM1_ARRL_bit.ARR0
#define TIM1_ARRL_ARR1           TIM1_ARRL_bit.ARR1
#define TIM1_ARRL_ARR2           TIM1_ARRL_bit.ARR2
#define TIM1_ARRL_ARR3           TIM1_ARRL_bit.ARR3
#define TIM1_ARRL_ARR4           TIM1_ARRL_bit.ARR4
#define TIM1_ARRL_ARR5           TIM1_ARRL_bit.ARR5
#define TIM1_ARRL_ARR6           TIM1_ARRL_bit.ARR6
#define TIM1_ARRL_ARR7           TIM1_ARRL_bit.ARR7

#define TIM1_CCR1H_CCR18         TIM1_CCR1H_bit.CCR18
#define TIM1_CCR1H_CCR19         TIM1_CCR1H_bit.CCR19
#define TIM1_CCR1H_CCR110        TIM1_CCR1H_bit.CCR110
#define TIM1_CCR1H_CCR111        TIM1_CCR1H_bit.CCR111
#define TIM1_CCR1H_CCR112        TIM1_CCR1H_bit.CCR112
#define TIM1_CCR1H_CCR113        TIM1_CCR1H_bit.CCR113
#define TIM1_CCR1H_CCR114        TIM1_CCR1H_bit.CCR114
#define TIM1_CCR1H_CCR115        TIM1_CCR1H_bit.CCR115

#define TIM1_CCR1L_CCR10         TIM1_CCR1L_bit.CCR10
#define TIM1_CCR1L_CCR11         TIM1_CCR1L_bit.CCR11
#define TIM1_CCR1L_CCR12         TIM1_CCR1L_bit.CCR12
#define TIM1_CCR1L_CCR13         TIM1_CCR1L_bit.CCR13
#define TIM1_CCR1L_CCR14         TIM1_CCR1L_bit.CCR14
#define TIM1_CCR1L_CCR15         TIM1_CCR1L_bit.CCR15
#define TIM1_CCR1L_CCR16         TIM1_CCR1L_bit.CCR16
#define TIM1_CCR1L_CCR17         TIM1_CCR1L_bit.CCR17

#define TIM1_CCR2H_CCR28         TIM1_CCR2H_bit.CCR28
#define TIM1_CCR2H_CCR29         TIM1_CCR2H_bit.CCR29
#define TIM1_CCR2H_CCR210        TIM1_CCR2H_bit.CCR210
#define TIM1_CCR2H_CCR211        TIM1_CCR2H_bit.CCR211
#define TIM1_CCR2H_CCR212        TIM1_CCR2H_bit.CCR212
#define TIM1_CCR2H_CCR213        TIM1_CCR2H_bit.CCR213
#define TIM1_CCR2H_CCR214        TIM1_CCR2H_bit.CCR214
#define TIM1_CCR2H_CCR215        TIM1_CCR2H_bit.CCR215

#define TIM1_CCR2L_CCR20         TIM1_CCR2L_bit.CCR20
#define TIM1_CCR2L_CCR21         TIM1_CCR2L_bit.CCR21
#define TIM1_CCR2L_CCR22         TIM1_CCR2L_bit.CCR22
#define TIM1_CCR2L_CCR23         TIM1_CCR2L_bit.CCR23
#define TIM1_CCR2L_CCR24         TIM1_CCR2L_bit.CCR24
#define TIM1_CCR2L_CCR25         TIM1_CCR2L_bit.CCR25
#define TIM1_CCR2L_CCR26         TIM1_CCR2L_bit.CCR26
#define TIM1_CCR2L_CCR27         TIM1_CCR2L_bit.CCR27

#define TIM1_CCR3H_CCR38         TIM1_CCR3H_bit.CCR38
#define TIM1_CCR3H_CCR39         TIM1_CCR3H_bit.CCR39
#define TIM1_CCR3H_CCR310        TIM1_CCR3H_bit.CCR310
#define TIM1_CCR3H_CCR311        TIM1_CCR3H_bit.CCR311
#define TIM1_CCR3H_CCR312        TIM1_CCR3H_bit.CCR312
#define TIM1_CCR3H_CCR313        TIM1_CCR3H_bit.CCR313
#define TIM1_CCR3H_CCR314        TIM1_CCR3H_bit.CCR314
#define TIM1_CCR3H_CCR315        TIM1_CCR3H_bit.CCR315

#define TIM1_CCR3L_CCR30         TIM1_CCR3L_bit.CCR30
#define TIM1_CCR3L_CCR31         TIM1_CCR3L_bit.CCR31
#define TIM1_CCR3L_CCR32         TIM1_CCR3L_bit.CCR32
#define TIM1_CCR3L_CCR33         TIM1_CCR3L_bit.CCR33
#define TIM1_CCR3L_CCR34         TIM1_CCR3L_bit.CCR34
#define TIM1_CCR3L_CCR35         TIM1_CCR3L_bit.CCR35
#define TIM1_CCR3L_CCR36         TIM1_CCR3L_bit.CCR36
#define TIM1_CCR3L_CCR37         TIM1_CCR3L_bit.CCR37

#define TIM1_CCR4H_CCR48         TIM1_CCR4H_bit.CCR48
#define TIM1_CCR4H_CCR49         TIM1_CCR4H_bit.CCR49
#define TIM1_CCR4H_CCR410        TIM1_CCR4H_bit.CCR410
#define TIM1_CCR4H_CCR411        TIM1_CCR4H_bit.CCR411
#define TIM1_CCR4H_CCR412        TIM1_CCR4H_bit.CCR412
#define TIM1_CCR4H_CCR413        TIM1_CCR4H_bit.CCR413
#define TIM1_CCR4H_CCR414        TIM1_CCR4H_bit.CCR414
#define TIM1_CCR4H_CCR415        TIM1_CCR4H_bit.CCR415

#define TIM1_CCR4L_CCR40         TIM1_CCR4L_bit.CCR40
#define TIM1_CCR4L_CCR41         TIM1_CCR4L_bit.CCR41
#define TIM1_CCR4L_CCR42         TIM1_CCR4L_bit.CCR42
#define TIM1_CCR4L_CCR43         TIM1_CCR4L_bit.CCR43
#define TIM1_CCR4L_CCR44         TIM1_CCR4L_bit.CCR44
#define TIM1_CCR4L_CCR45         TIM1_CCR4L_bit.CCR45
#define TIM1_CCR4L_CCR46         TIM1_CCR4L_bit.CCR46
#define TIM1_CCR4L_CCR47         TIM1_CCR4L_bit.CCR47

#define TIM1_BKR_LOCK            TIM1_BKR_bit.LOCK
#define TIM1_BKR_OSSI            TIM1_BKR_bit.OSSI
#define TIM1_BKR_OSSR            TIM1_BKR_bit.OSSR
#define TIM1_BKR_BKE             TIM1_BKR_bit.BKE
#define TIM1_BKR_BKP             TIM1_BKR_bit.BKP
#define TIM1_BKR_AOE             TIM1_BKR_bit.AOE
#define TIM1_BKR_MOE             TIM1_BKR_bit.MOE

#define TIM1_OISR_OIS1           TIM1_OISR_bit.OIS1
#define TIM1_OISR_OIS1N          TIM1_OISR_bit.OIS1N
#define TIM1_OISR_OIS2           TIM1_OISR_bit.OIS2
#define TIM1_OISR_OIS2N          TIM1_OISR_bit.OIS2N
#define TIM1_OISR_OIS3           TIM1_OISR_bit.OIS3
#define TIM1_OISR_OIS3N          TIM1_OISR_bit.OIS3N

#define TIM1_DCR1_DBA            TIM1_DCR1_bit.DBA

#define TIM1_DCR2_DBL            TIM1_DCR2_bit.DBL

#endif

/*-------------------------------------------------------------------------
 *      TIM1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM1_CR1_CEN        0x01
#define MASK_TIM1_CR1_UDIS       0x02
#define MASK_TIM1_CR1_URS        0x04
#define MASK_TIM1_CR1_OPM        0x08
#define MASK_TIM1_CR1_DIR        0x10
#define MASK_TIM1_CR1_CMS        0x60
#define MASK_TIM1_CR1_ARPE       0x80

#define MASK_TIM1_CR2_CCPC       0x01
#define MASK_TIM1_CR2_COMS       0x04
#define MASK_TIM1_CR2_CCDS       0x08
#define MASK_TIM1_CR2_MMS        0x70
#define MASK_TIM1_CR2_TI1S       0x80

#define MASK_TIM1_SMCR_SMS       0x07
#define MASK_TIM1_SMCR_OCCS      0x08
#define MASK_TIM1_SMCR_TS        0x70
#define MASK_TIM1_SMCR_MSM       0x80

#define MASK_TIM1_ETR_ETF        0x0F
#define MASK_TIM1_ETR_ETPS       0x30
#define MASK_TIM1_ETR_ECE        0x40
#define MASK_TIM1_ETR_ETP        0x80

#define MASK_TIM1_DER_UDE        0x01
#define MASK_TIM1_DER_CC1DE      0x02
#define MASK_TIM1_DER_CC2DE      0x04
#define MASK_TIM1_DER_CC3DE      0x08
#define MASK_TIM1_DER_CC4DE      0x10
#define MASK_TIM1_DER_COMDE      0x20

#define MASK_TIM1_IER_UIE        0x01
#define MASK_TIM1_IER_CC1IE      0x02
#define MASK_TIM1_IER_CC2IE      0x04
#define MASK_TIM1_IER_CC3IE      0x08
#define MASK_TIM1_IER_CC4IE      0x10
#define MASK_TIM1_IER_COMIE      0x20
#define MASK_TIM1_IER_TIE        0x40
#define MASK_TIM1_IER_BIE        0x80

#define MASK_TIM1_SR1_UIF        0x01
#define MASK_TIM1_SR1_CC1IF      0x02
#define MASK_TIM1_SR1_CC2IF      0x04
#define MASK_TIM1_SR1_CC3IF      0x08
#define MASK_TIM1_SR1_CC4IF      0x10
#define MASK_TIM1_SR1_COMIF      0x20
#define MASK_TIM1_SR1_TIF        0x40
#define MASK_TIM1_SR1_BIF        0x80

#define MASK_TIM1_SR2_CC1OF      0x02
#define MASK_TIM1_SR2_CC2OF      0x04
#define MASK_TIM1_SR2_CC3OF      0x08
#define MASK_TIM1_SR2_CC4OF      0x10

#define MASK_TIM1_EGR_UG         0x01
#define MASK_TIM1_EGR_CC1G       0x02
#define MASK_TIM1_EGR_CC2G       0x04
#define MASK_TIM1_EGR_CC3G       0x08
#define MASK_TIM1_EGR_CC4G       0x10
#define MASK_TIM1_EGR_COMG       0x20
#define MASK_TIM1_EGR_TG         0x40
#define MASK_TIM1_EGR_BG         0x80

#define MASK_TIM1_CCMR1_CC1S     0x03
#define MASK_TIM1_CCMR1_OC1FE    0x04
#define MASK_TIM1_CCMR1_OC1PE    0x08
#define MASK_TIM1_CCMR1_OC1M     0x70
#define MASK_TIM1_CCMR1_OC1CE    0x80

#define MASK_TIM1_CCMR2_CC2S     0x03
#define MASK_TIM1_CCMR2_OC2FE    0x04
#define MASK_TIM1_CCMR2_OC2PE    0x08
#define MASK_TIM1_CCMR2_OC2M     0x70
#define MASK_TIM1_CCMR2_OC2CE    0x80

#define MASK_TIM1_CCMR3_CC3S     0x03
#define MASK_TIM1_CCMR3_OC3FE    0x04
#define MASK_TIM1_CCMR3_OC3PE    0x08
#define MASK_TIM1_CCMR3_OC3M     0x70
#define MASK_TIM1_CCMR3_OC3CE    0x80

#define MASK_TIM1_CCMR4_CC4S     0x03
#define MASK_TIM1_CCMR4_OC4PE    0x08
#define MASK_TIM1_CCMR4_OC4M     0x70
#define MASK_TIM1_CCMR4_OC4CE    0x80

#define MASK_TIM1_CCER1_CC1E     0x01
#define MASK_TIM1_CCER1_CC1P     0x02
#define MASK_TIM1_CCER1_CC1NE    0x04
#define MASK_TIM1_CCER1_CC1NP    0x08
#define MASK_TIM1_CCER1_CC2E     0x10
#define MASK_TIM1_CCER1_CC2P     0x20
#define MASK_TIM1_CCER1_CC2NE    0x40
#define MASK_TIM1_CCER1_CC2NP    0x80

#define MASK_TIM1_CCER2_CC3E     0x01
#define MASK_TIM1_CCER2_CC3P     0x02
#define MASK_TIM1_CCER2_CC3NE    0x04
#define MASK_TIM1_CCER2_CC3NP    0x08
#define MASK_TIM1_CCER2_CC4E     0x10
#define MASK_TIM1_CCER2_CC4P     0x20

#define MASK_TIM1_CNTRH_CNT8     0x01
#define MASK_TIM1_CNTRH_CNT9     0x02
#define MASK_TIM1_CNTRH_CNT10    0x04
#define MASK_TIM1_CNTRH_CNT11    0x08
#define MASK_TIM1_CNTRH_CNT12    0x10
#define MASK_TIM1_CNTRH_CNT13    0x20
#define MASK_TIM1_CNTRH_CNT14    0x40
#define MASK_TIM1_CNTRH_CNT15    0x80

#define MASK_TIM1_CNTRL_CNT0     0x01
#define MASK_TIM1_CNTRL_CNT1     0x02
#define MASK_TIM1_CNTRL_CNT2     0x04
#define MASK_TIM1_CNTRL_CNT3     0x08
#define MASK_TIM1_CNTRL_CNT4     0x10
#define MASK_TIM1_CNTRL_CNT5     0x20
#define MASK_TIM1_CNTRL_CNT6     0x40
#define MASK_TIM1_CNTRL_CNT7     0x80

#define MASK_TIM1_PSCRH_PSC8     0x01
#define MASK_TIM1_PSCRH_PSC9     0x02
#define MASK_TIM1_PSCRH_PSC10    0x04
#define MASK_TIM1_PSCRH_PSC11    0x08
#define MASK_TIM1_PSCRH_PSC12    0x10
#define MASK_TIM1_PSCRH_PSC13    0x20
#define MASK_TIM1_PSCRH_PSC14    0x40
#define MASK_TIM1_PSCRH_PSC15    0x80

#define MASK_TIM1_PSCRL_PSC0     0x01
#define MASK_TIM1_PSCRL_PSC1     0x02
#define MASK_TIM1_PSCRL_PSC2     0x04
#define MASK_TIM1_PSCRL_PSC3     0x08
#define MASK_TIM1_PSCRL_PSC4     0x10
#define MASK_TIM1_PSCRL_PSC5     0x20
#define MASK_TIM1_PSCRL_PSC6     0x40
#define MASK_TIM1_PSCRL_PSC7     0x80

#define MASK_TIM1_ARRH_ARR8      0x01
#define MASK_TIM1_ARRH_ARR9      0x02
#define MASK_TIM1_ARRH_ARR10     0x04
#define MASK_TIM1_ARRH_ARR11     0x08
#define MASK_TIM1_ARRH_ARR12     0x10
#define MASK_TIM1_ARRH_ARR13     0x20
#define MASK_TIM1_ARRH_ARR14     0x40
#define MASK_TIM1_ARRH_ARR15     0x80

#define MASK_TIM1_ARRL_ARR0      0x01
#define MASK_TIM1_ARRL_ARR1      0x02
#define MASK_TIM1_ARRL_ARR2      0x04
#define MASK_TIM1_ARRL_ARR3      0x08
#define MASK_TIM1_ARRL_ARR4      0x10
#define MASK_TIM1_ARRL_ARR5      0x20
#define MASK_TIM1_ARRL_ARR6      0x40
#define MASK_TIM1_ARRL_ARR7      0x80

#define MASK_TIM1_CCR1H_CCR18    0x01
#define MASK_TIM1_CCR1H_CCR19    0x02
#define MASK_TIM1_CCR1H_CCR110   0x04
#define MASK_TIM1_CCR1H_CCR111   0x08
#define MASK_TIM1_CCR1H_CCR112   0x10
#define MASK_TIM1_CCR1H_CCR113   0x20
#define MASK_TIM1_CCR1H_CCR114   0x40
#define MASK_TIM1_CCR1H_CCR115   0x80

#define MASK_TIM1_CCR1L_CCR10    0x01
#define MASK_TIM1_CCR1L_CCR11    0x02
#define MASK_TIM1_CCR1L_CCR12    0x04
#define MASK_TIM1_CCR1L_CCR13    0x08
#define MASK_TIM1_CCR1L_CCR14    0x10
#define MASK_TIM1_CCR1L_CCR15    0x20
#define MASK_TIM1_CCR1L_CCR16    0x40
#define MASK_TIM1_CCR1L_CCR17    0x80

#define MASK_TIM1_CCR2H_CCR28    0x01
#define MASK_TIM1_CCR2H_CCR29    0x02
#define MASK_TIM1_CCR2H_CCR210   0x04
#define MASK_TIM1_CCR2H_CCR211   0x08
#define MASK_TIM1_CCR2H_CCR212   0x10
#define MASK_TIM1_CCR2H_CCR213   0x20
#define MASK_TIM1_CCR2H_CCR214   0x40
#define MASK_TIM1_CCR2H_CCR215   0x80

#define MASK_TIM1_CCR2L_CCR20    0x01
#define MASK_TIM1_CCR2L_CCR21    0x02
#define MASK_TIM1_CCR2L_CCR22    0x04
#define MASK_TIM1_CCR2L_CCR23    0x08
#define MASK_TIM1_CCR2L_CCR24    0x10
#define MASK_TIM1_CCR2L_CCR25    0x20
#define MASK_TIM1_CCR2L_CCR26    0x40
#define MASK_TIM1_CCR2L_CCR27    0x80

#define MASK_TIM1_CCR3H_CCR38    0x01
#define MASK_TIM1_CCR3H_CCR39    0x02
#define MASK_TIM1_CCR3H_CCR310   0x04
#define MASK_TIM1_CCR3H_CCR311   0x08
#define MASK_TIM1_CCR3H_CCR312   0x10
#define MASK_TIM1_CCR3H_CCR313   0x20
#define MASK_TIM1_CCR3H_CCR314   0x40
#define MASK_TIM1_CCR3H_CCR315   0x80

#define MASK_TIM1_CCR3L_CCR30    0x01
#define MASK_TIM1_CCR3L_CCR31    0x02
#define MASK_TIM1_CCR3L_CCR32    0x04
#define MASK_TIM1_CCR3L_CCR33    0x08
#define MASK_TIM1_CCR3L_CCR34    0x10
#define MASK_TIM1_CCR3L_CCR35    0x20
#define MASK_TIM1_CCR3L_CCR36    0x40
#define MASK_TIM1_CCR3L_CCR37    0x80

#define MASK_TIM1_CCR4H_CCR48    0x01
#define MASK_TIM1_CCR4H_CCR49    0x02
#define MASK_TIM1_CCR4H_CCR410   0x04
#define MASK_TIM1_CCR4H_CCR411   0x08
#define MASK_TIM1_CCR4H_CCR412   0x10
#define MASK_TIM1_CCR4H_CCR413   0x20
#define MASK_TIM1_CCR4H_CCR414   0x40
#define MASK_TIM1_CCR4H_CCR415   0x80

#define MASK_TIM1_CCR4L_CCR40    0x01
#define MASK_TIM1_CCR4L_CCR41    0x02
#define MASK_TIM1_CCR4L_CCR42    0x04
#define MASK_TIM1_CCR4L_CCR43    0x08
#define MASK_TIM1_CCR4L_CCR44    0x10
#define MASK_TIM1_CCR4L_CCR45    0x20
#define MASK_TIM1_CCR4L_CCR46    0x40
#define MASK_TIM1_CCR4L_CCR47    0x80

#define MASK_TIM1_BKR_LOCK       0x03
#define MASK_TIM1_BKR_OSSI       0x04
#define MASK_TIM1_BKR_OSSR       0x08
#define MASK_TIM1_BKR_BKE        0x10
#define MASK_TIM1_BKR_BKP        0x20
#define MASK_TIM1_BKR_AOE        0x40
#define MASK_TIM1_BKR_MOE        0x80

#define MASK_TIM1_OISR_OIS1      0x01
#define MASK_TIM1_OISR_OIS1N     0x02
#define MASK_TIM1_OISR_OIS2      0x04
#define MASK_TIM1_OISR_OIS2N     0x08
#define MASK_TIM1_OISR_OIS3      0x10
#define MASK_TIM1_OISR_OIS3N     0x20

#define MASK_TIM1_DCR1_DBA       0x1F

#define MASK_TIM1_DCR2_DBL       0x1F


/*-------------------------------------------------------------------------
 *      TIM4 register definitions
 *-----------------------------------------------------------------------*/
/* TIM4 control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CEN         : 1;
  unsigned char UDIS        : 1;
  unsigned char URS         : 1;
  unsigned char OPM         : 1;
  unsigned char             : 3;
  unsigned char ARPE        : 1;
} __BITS_TIM4_CR1;
#endif
__IO_REG8_BIT(TIM4_CR1,    0x52E0, __READ_WRITE, __BITS_TIM4_CR1);

/* TIM4 control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char MMS         : 3;
} __BITS_TIM4_CR2;
#endif
__IO_REG8_BIT(TIM4_CR2,    0x52E1, __READ_WRITE, __BITS_TIM4_CR2);

/* TIM4 Slave mode control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMS         : 3;
  unsigned char             : 1;
  unsigned char TS          : 3;
  unsigned char MSM         : 1;
} __BITS_TIM4_SMCR;
#endif
__IO_REG8_BIT(TIM4_SMCR,   0x52E2, __READ_WRITE, __BITS_TIM4_SMCR);

/* TIM4 DMA1 request enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UDE         : 1;
} __BITS_TIM4_DER;
#endif
__IO_REG8_BIT(TIM4_DER,    0x52E3, __READ_WRITE, __BITS_TIM4_DER);

/* TIM4 Interrupt enable register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIE         : 1;
  unsigned char             : 5;
  unsigned char TIE         : 1;
} __BITS_TIM4_IER;
#endif
__IO_REG8_BIT(TIM4_IER,    0x52E4, __READ_WRITE, __BITS_TIM4_IER);

/* TIM4 status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UIF         : 1;
  unsigned char             : 5;
  unsigned char TIF         : 1;
} __BITS_TIM4_SR1;
#endif
__IO_REG8_BIT(TIM4_SR1,    0x52E5, __READ_WRITE, __BITS_TIM4_SR1);

/* TIM4 Event generation register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char UG          : 1;
  unsigned char             : 5;
  unsigned char TG          : 1;
} __BITS_TIM4_EGR;
#endif
__IO_REG8_BIT(TIM4_EGR,    0x52E6, __WRITE, __BITS_TIM4_EGR);

/* TIM4 counter */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CNT0        : 1;
  unsigned char CNT1        : 1;
  unsigned char CNT2        : 1;
  unsigned char CNT3        : 1;
  unsigned char CNT4        : 1;
  unsigned char CNT5        : 1;
  unsigned char CNT6        : 1;
  unsigned char CNT7        : 1;
} __BITS_TIM4_CNTR;
#endif
__IO_REG8_BIT(TIM4_CNTR,   0x52E7, __READ_WRITE, __BITS_TIM4_CNTR);

/* TIM4 prescaler register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char PSC         : 4;
} __BITS_TIM4_PSCR;
#endif
__IO_REG8_BIT(TIM4_PSCR,   0x52E8, __READ_WRITE, __BITS_TIM4_PSCR);

/* TIM4 Auto-reload register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ARR0        : 1;
  unsigned char ARR1        : 1;
  unsigned char ARR2        : 1;
  unsigned char ARR3        : 1;
  unsigned char ARR4        : 1;
  unsigned char ARR5        : 1;
  unsigned char ARR6        : 1;
  unsigned char ARR7        : 1;
} __BITS_TIM4_ARR;
#endif
__IO_REG8_BIT(TIM4_ARR,    0x52E9, __READ_WRITE, __BITS_TIM4_ARR);


/*-------------------------------------------------------------------------
 *      TIM4 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define TIM4_CR1_CEN             TIM4_CR1_bit.CEN
#define TIM4_CR1_UDIS            TIM4_CR1_bit.UDIS
#define TIM4_CR1_URS             TIM4_CR1_bit.URS
#define TIM4_CR1_OPM             TIM4_CR1_bit.OPM
#define TIM4_CR1_ARPE            TIM4_CR1_bit.ARPE

#define TIM4_CR2_MMS             TIM4_CR2_bit.MMS

#define TIM4_SMCR_SMS            TIM4_SMCR_bit.SMS
#define TIM4_SMCR_TS             TIM4_SMCR_bit.TS
#define TIM4_SMCR_MSM            TIM4_SMCR_bit.MSM

#define TIM4_DER_UDE             TIM4_DER_bit.UDE

#define TIM4_IER_UIE             TIM4_IER_bit.UIE
#define TIM4_IER_TIE             TIM4_IER_bit.TIE

#define TIM4_SR1_UIF             TIM4_SR1_bit.UIF
#define TIM4_SR1_TIF             TIM4_SR1_bit.TIF

#define TIM4_EGR_UG              TIM4_EGR_bit.UG
#define TIM4_EGR_TG              TIM4_EGR_bit.TG

#define TIM4_CNTR_CNT0           TIM4_CNTR_bit.CNT0
#define TIM4_CNTR_CNT1           TIM4_CNTR_bit.CNT1
#define TIM4_CNTR_CNT2           TIM4_CNTR_bit.CNT2
#define TIM4_CNTR_CNT3           TIM4_CNTR_bit.CNT3
#define TIM4_CNTR_CNT4           TIM4_CNTR_bit.CNT4
#define TIM4_CNTR_CNT5           TIM4_CNTR_bit.CNT5
#define TIM4_CNTR_CNT6           TIM4_CNTR_bit.CNT6
#define TIM4_CNTR_CNT7           TIM4_CNTR_bit.CNT7

#define TIM4_PSCR_PSC            TIM4_PSCR_bit.PSC

#define TIM4_ARR_ARR0            TIM4_ARR_bit.ARR0
#define TIM4_ARR_ARR1            TIM4_ARR_bit.ARR1
#define TIM4_ARR_ARR2            TIM4_ARR_bit.ARR2
#define TIM4_ARR_ARR3            TIM4_ARR_bit.ARR3
#define TIM4_ARR_ARR4            TIM4_ARR_bit.ARR4
#define TIM4_ARR_ARR5            TIM4_ARR_bit.ARR5
#define TIM4_ARR_ARR6            TIM4_ARR_bit.ARR6
#define TIM4_ARR_ARR7            TIM4_ARR_bit.ARR7

#endif

/*-------------------------------------------------------------------------
 *      TIM4 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_TIM4_CR1_CEN        0x01
#define MASK_TIM4_CR1_UDIS       0x02
#define MASK_TIM4_CR1_URS        0x04
#define MASK_TIM4_CR1_OPM        0x08
#define MASK_TIM4_CR1_ARPE       0x80

#define MASK_TIM4_CR2_MMS        0x70

#define MASK_TIM4_SMCR_SMS       0x07
#define MASK_TIM4_SMCR_TS        0x70
#define MASK_TIM4_SMCR_MSM       0x80

#define MASK_TIM4_DER_UDE        0x01

#define MASK_TIM4_IER_UIE        0x01
#define MASK_TIM4_IER_TIE        0x40

#define MASK_TIM4_SR1_UIF        0x01
#define MASK_TIM4_SR1_TIF        0x40

#define MASK_TIM4_EGR_UG         0x01
#define MASK_TIM4_EGR_TG         0x40

#define MASK_TIM4_CNTR_CNT0      0x01
#define MASK_TIM4_CNTR_CNT1      0x02
#define MASK_TIM4_CNTR_CNT2      0x04
#define MASK_TIM4_CNTR_CNT3      0x08
#define MASK_TIM4_CNTR_CNT4      0x10
#define MASK_TIM4_CNTR_CNT5      0x20
#define MASK_TIM4_CNTR_CNT6      0x40
#define MASK_TIM4_CNTR_CNT7      0x80

#define MASK_TIM4_PSCR_PSC       0x0F

#define MASK_TIM4_ARR_ARR0       0x01
#define MASK_TIM4_ARR_ARR1       0x02
#define MASK_TIM4_ARR_ARR2       0x04
#define MASK_TIM4_ARR_ARR3       0x08
#define MASK_TIM4_ARR_ARR4       0x10
#define MASK_TIM4_ARR_ARR5       0x20
#define MASK_TIM4_ARR_ARR6       0x40
#define MASK_TIM4_ARR_ARR7       0x80


/*-------------------------------------------------------------------------
 *      IRTIM register definitions
 *-----------------------------------------------------------------------*/
/* Infra-red control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IR_EN       : 1;
  unsigned char HS_EN       : 1;
} __BITS_IR_CR;
#endif
__IO_REG8_BIT(IR_CR,       0x52FF, __READ_WRITE, __BITS_IR_CR);


/*-------------------------------------------------------------------------
 *      IRTIM bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define IR_CR_IR_EN              IR_CR_bit.IR_EN
#define IR_CR_HS_EN              IR_CR_bit.HS_EN

#endif

/*-------------------------------------------------------------------------
 *      IRTIM bit masks
 *-----------------------------------------------------------------------*/
#define MASK_IR_CR_IR_EN         0x01
#define MASK_IR_CR_HS_EN         0x02


/*-------------------------------------------------------------------------
 *      ADC1 register definitions
 *-----------------------------------------------------------------------*/
/* ADC1 configuration register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char ADON        : 1;
  unsigned char START       : 1;
  unsigned char CONT        : 1;
  unsigned char EOCIE       : 1;
  unsigned char AWDIE       : 1;
  unsigned char RES         : 2;
  unsigned char OVERIE      : 1;
} __BITS_ADC1_CR1;
#endif
__IO_REG8_BIT(ADC1_CR1,    0x5340, __READ_WRITE, __BITS_ADC1_CR1);

/* ADC1 configuration register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SMTP1       : 3;
  unsigned char EXTSEL0     : 1;
  unsigned char EXTSEL1     : 1;
  unsigned char TRIG_EDGE0  : 1;
  unsigned char TRIG_EDGE1  : 1;
  unsigned char PRESC       : 1;
} __BITS_ADC1_CR2;
#endif
__IO_REG8_BIT(ADC1_CR2,    0x5341, __READ_WRITE, __BITS_ADC1_CR2);

/* ADC1 configuration register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL       : 5;
  unsigned char SMTP2       : 3;
} __BITS_ADC1_CR3;
#endif
__IO_REG8_BIT(ADC1_CR3,    0x5342, __READ_WRITE, __BITS_ADC1_CR3);

/* ADC1 status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EOC         : 1;
  unsigned char AWD         : 1;
  unsigned char OVER        : 1;
} __BITS_ADC1_SR;
#endif
__IO_REG8_BIT(ADC1_SR,     0x5343, __READ_WRITE, __BITS_ADC1_SR);

/* ADC1 data register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONV_DATA8  : 1;
  unsigned char CONV_DATA9  : 1;
  unsigned char CONV_DATA10 : 1;
  unsigned char CONV_DATA11 : 1;
} __BITS_ADC1_DRH;
#endif
__IO_REG8_BIT(ADC1_DRH,    0x5344, __READ, __BITS_ADC1_DRH);

/* ADC1 data register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CONV_DATA0  : 1;
  unsigned char CONV_DATA1  : 1;
  unsigned char CONV_DATA2  : 1;
  unsigned char CONV_DATA3  : 1;
  unsigned char CONV_DATA4  : 1;
  unsigned char CONV_DATA5  : 1;
  unsigned char CONV_DATA6  : 1;
  unsigned char CONV_DATA7  : 1;
} __BITS_ADC1_DRL;
#endif
__IO_REG8_BIT(ADC1_DRL,    0x5345, __READ, __BITS_ADC1_DRL);

/* ADC1 high threshold register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HT8         : 1;
  unsigned char HT9         : 1;
  unsigned char HT10        : 1;
  unsigned char HT11        : 1;
} __BITS_ADC1_HTRH;
#endif
__IO_REG8_BIT(ADC1_HTRH,   0x5346, __READ_WRITE, __BITS_ADC1_HTRH);

/* ADC1 high threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char HT0         : 1;
  unsigned char HT1         : 1;
  unsigned char HT2         : 1;
  unsigned char HT3         : 1;
  unsigned char HT4         : 1;
  unsigned char HT5         : 1;
  unsigned char HT6         : 1;
  unsigned char HT7         : 1;
} __BITS_ADC1_HTRL;
#endif
__IO_REG8_BIT(ADC1_HTRL,   0x5347, __READ_WRITE, __BITS_ADC1_HTRL);

/* ADC1 low threshold register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LT8         : 1;
  unsigned char LT9         : 1;
  unsigned char LT10        : 1;
  unsigned char LT11        : 1;
} __BITS_ADC1_LTRH;
#endif
__IO_REG8_BIT(ADC1_LTRH,   0x5348, __READ_WRITE, __BITS_ADC1_LTRH);

/* ADC1 low threshold register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char LT0         : 1;
  unsigned char LT1         : 1;
  unsigned char LT2         : 1;
  unsigned char LT3         : 1;
  unsigned char LT4         : 1;
  unsigned char LT5         : 1;
  unsigned char LT6         : 1;
  unsigned char LT7         : 1;
} __BITS_ADC1_LTRL;
#endif
__IO_REG8_BIT(ADC1_LTRL,   0x5349, __READ_WRITE, __BITS_ADC1_LTRL);

/* ADC1 channel sequence 1 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S24   : 1;
  unsigned char CHSEL_S25   : 1;
  unsigned char CHSEL_S26   : 1;
  unsigned char CHSEL_S27   : 1;
  unsigned char CHSEL_S28   : 1;
  unsigned char CHSEL_S29   : 1;
  unsigned char             : 1;
  unsigned char DMAOFF      : 1;
} __BITS_ADC1_SQR1;
#endif
__IO_REG8_BIT(ADC1_SQR1,   0x534A, __READ_WRITE, __BITS_ADC1_SQR1);

/* ADC1 channel sequence 2 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S16   : 1;
  unsigned char CHSEL_S17   : 1;
  unsigned char CHSEL_S18   : 1;
  unsigned char CHSEL_S19   : 1;
  unsigned char CHSEL_S20   : 1;
  unsigned char CHSEL_S21   : 1;
  unsigned char CHSEL_S22   : 1;
  unsigned char CHSEL_S23   : 1;
} __BITS_ADC1_SQR2;
#endif
__IO_REG8_BIT(ADC1_SQR2,   0x534B, __READ_WRITE, __BITS_ADC1_SQR2);

/* ADC1 channel sequence 3 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S8    : 1;
  unsigned char CHSEL_S9    : 1;
  unsigned char CHSEL_S10   : 1;
  unsigned char CHSEL_S11   : 1;
  unsigned char CHSEL_S12   : 1;
  unsigned char CHSEL_S13   : 1;
  unsigned char CHSEL_S14   : 1;
  unsigned char CHSEL_S15   : 1;
} __BITS_ADC1_SQR3;
#endif
__IO_REG8_BIT(ADC1_SQR3,   0x534C, __READ_WRITE, __BITS_ADC1_SQR3);

/* ADC1 channel sequence 4 register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CHSEL_S0    : 1;
  unsigned char CHSEL_S1    : 1;
  unsigned char CHSEL_S2    : 1;
  unsigned char CHSEL_S3    : 1;
  unsigned char CHSEL_S4    : 1;
  unsigned char CHSEL_S5    : 1;
  unsigned char CHSEL_S6    : 1;
  unsigned char CHSEL_S7    : 1;
} __BITS_ADC1_SQR4;
#endif
__IO_REG8_BIT(ADC1_SQR4,   0x534D, __READ_WRITE, __BITS_ADC1_SQR4);

/* ADC1 trigger disable 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG24      : 1;
  unsigned char TRIG25      : 1;
  unsigned char TRIG26      : 1;
  unsigned char TRIG27      : 1;
  unsigned char VREFINTON   : 1;
  unsigned char TSON        : 1;
} __BITS_ADC1_TRIGR1;
#endif
__IO_REG8_BIT(ADC1_TRIGR1, 0x534E, __READ_WRITE, __BITS_ADC1_TRIGR1);

/* ADC1 trigger disable 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG16      : 1;
  unsigned char TRIG17      : 1;
  unsigned char TRIG18      : 1;
  unsigned char TRIG19      : 1;
  unsigned char TRIG20      : 1;
  unsigned char TRIG21      : 1;
  unsigned char TRIG22      : 1;
  unsigned char TRIG23      : 1;
} __BITS_ADC1_TRIGR2;
#endif
__IO_REG8_BIT(ADC1_TRIGR2, 0x534F, __READ_WRITE, __BITS_ADC1_TRIGR2);

/* ADC1 trigger disable 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG8       : 1;
  unsigned char TRIG9       : 1;
  unsigned char TRIG10      : 1;
  unsigned char TRIG11      : 1;
  unsigned char TRIG12      : 1;
  unsigned char TRIG13      : 1;
  unsigned char TRIG14      : 1;
  unsigned char TRIG15      : 1;
} __BITS_ADC1_TRIGR3;
#endif
__IO_REG8_BIT(ADC1_TRIGR3, 0x5350, __READ_WRITE, __BITS_ADC1_TRIGR3);

/* ADC1 trigger disable 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char TRIG0       : 1;
  unsigned char TRIG1       : 1;
  unsigned char TRIG2       : 1;
  unsigned char TRIG3       : 1;
  unsigned char TRIG4       : 1;
  unsigned char TRIG5       : 1;
  unsigned char TRIG6       : 1;
  unsigned char TRIG7       : 1;
} __BITS_ADC1_TRIGR4;
#endif
__IO_REG8_BIT(ADC1_TRIGR4, 0x5351, __READ_WRITE, __BITS_ADC1_TRIGR4);


/*-------------------------------------------------------------------------
 *      ADC1 bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ADC1_CR1_ADON            ADC1_CR1_bit.ADON
#define ADC1_CR1_START           ADC1_CR1_bit.START
#define ADC1_CR1_CONT            ADC1_CR1_bit.CONT
#define ADC1_CR1_EOCIE           ADC1_CR1_bit.EOCIE
#define ADC1_CR1_AWDIE           ADC1_CR1_bit.AWDIE
#define ADC1_CR1_RES             ADC1_CR1_bit.RES
#define ADC1_CR1_OVERIE          ADC1_CR1_bit.OVERIE

#define ADC1_CR2_SMTP1           ADC1_CR2_bit.SMTP1
#define ADC1_CR2_EXTSEL0         ADC1_CR2_bit.EXTSEL0
#define ADC1_CR2_EXTSEL1         ADC1_CR2_bit.EXTSEL1
#define ADC1_CR2_TRIG_EDGE0      ADC1_CR2_bit.TRIG_EDGE0
#define ADC1_CR2_TRIG_EDGE1      ADC1_CR2_bit.TRIG_EDGE1
#define ADC1_CR2_PRESC           ADC1_CR2_bit.PRESC

#define ADC1_CR3_CHSEL           ADC1_CR3_bit.CHSEL
#define ADC1_CR3_SMTP2           ADC1_CR3_bit.SMTP2

#define ADC1_SR_EOC              ADC1_SR_bit.EOC
#define ADC1_SR_AWD              ADC1_SR_bit.AWD
#define ADC1_SR_OVER             ADC1_SR_bit.OVER

#define ADC1_DRH_CONV_DATA8      ADC1_DRH_bit.CONV_DATA8
#define ADC1_DRH_CONV_DATA9      ADC1_DRH_bit.CONV_DATA9
#define ADC1_DRH_CONV_DATA10     ADC1_DRH_bit.CONV_DATA10
#define ADC1_DRH_CONV_DATA11     ADC1_DRH_bit.CONV_DATA11

#define ADC1_DRL_CONV_DATA0      ADC1_DRL_bit.CONV_DATA0
#define ADC1_DRL_CONV_DATA1      ADC1_DRL_bit.CONV_DATA1
#define ADC1_DRL_CONV_DATA2      ADC1_DRL_bit.CONV_DATA2
#define ADC1_DRL_CONV_DATA3      ADC1_DRL_bit.CONV_DATA3
#define ADC1_DRL_CONV_DATA4      ADC1_DRL_bit.CONV_DATA4
#define ADC1_DRL_CONV_DATA5      ADC1_DRL_bit.CONV_DATA5
#define ADC1_DRL_CONV_DATA6      ADC1_DRL_bit.CONV_DATA6
#define ADC1_DRL_CONV_DATA7      ADC1_DRL_bit.CONV_DATA7

#define ADC1_HTRH_HT8            ADC1_HTRH_bit.HT8
#define ADC1_HTRH_HT9            ADC1_HTRH_bit.HT9
#define ADC1_HTRH_HT10           ADC1_HTRH_bit.HT10
#define ADC1_HTRH_HT11           ADC1_HTRH_bit.HT11

#define ADC1_HTRL_HT0            ADC1_HTRL_bit.HT0
#define ADC1_HTRL_HT1            ADC1_HTRL_bit.HT1
#define ADC1_HTRL_HT2            ADC1_HTRL_bit.HT2
#define ADC1_HTRL_HT3            ADC1_HTRL_bit.HT3
#define ADC1_HTRL_HT4            ADC1_HTRL_bit.HT4
#define ADC1_HTRL_HT5            ADC1_HTRL_bit.HT5
#define ADC1_HTRL_HT6            ADC1_HTRL_bit.HT6
#define ADC1_HTRL_HT7            ADC1_HTRL_bit.HT7

#define ADC1_LTRH_LT8            ADC1_LTRH_bit.LT8
#define ADC1_LTRH_LT9            ADC1_LTRH_bit.LT9
#define ADC1_LTRH_LT10           ADC1_LTRH_bit.LT10
#define ADC1_LTRH_LT11           ADC1_LTRH_bit.LT11

#define ADC1_LTRL_LT0            ADC1_LTRL_bit.LT0
#define ADC1_LTRL_LT1            ADC1_LTRL_bit.LT1
#define ADC1_LTRL_LT2            ADC1_LTRL_bit.LT2
#define ADC1_LTRL_LT3            ADC1_LTRL_bit.LT3
#define ADC1_LTRL_LT4            ADC1_LTRL_bit.LT4
#define ADC1_LTRL_LT5            ADC1_LTRL_bit.LT5
#define ADC1_LTRL_LT6            ADC1_LTRL_bit.LT6
#define ADC1_LTRL_LT7            ADC1_LTRL_bit.LT7

#define ADC1_SQR1_CHSEL_S24      ADC1_SQR1_bit.CHSEL_S24
#define ADC1_SQR1_CHSEL_S25      ADC1_SQR1_bit.CHSEL_S25
#define ADC1_SQR1_CHSEL_S26      ADC1_SQR1_bit.CHSEL_S26
#define ADC1_SQR1_CHSEL_S27      ADC1_SQR1_bit.CHSEL_S27
#define ADC1_SQR1_CHSEL_S28      ADC1_SQR1_bit.CHSEL_S28
#define ADC1_SQR1_CHSEL_S29      ADC1_SQR1_bit.CHSEL_S29
#define ADC1_SQR1_DMAOFF         ADC1_SQR1_bit.DMAOFF

#define ADC1_SQR2_CHSEL_S16      ADC1_SQR2_bit.CHSEL_S16
#define ADC1_SQR2_CHSEL_S17      ADC1_SQR2_bit.CHSEL_S17
#define ADC1_SQR2_CHSEL_S18      ADC1_SQR2_bit.CHSEL_S18
#define ADC1_SQR2_CHSEL_S19      ADC1_SQR2_bit.CHSEL_S19
#define ADC1_SQR2_CHSEL_S20      ADC1_SQR2_bit.CHSEL_S20
#define ADC1_SQR2_CHSEL_S21      ADC1_SQR2_bit.CHSEL_S21
#define ADC1_SQR2_CHSEL_S22      ADC1_SQR2_bit.CHSEL_S22
#define ADC1_SQR2_CHSEL_S23      ADC1_SQR2_bit.CHSEL_S23

#define ADC1_SQR3_CHSEL_S8       ADC1_SQR3_bit.CHSEL_S8
#define ADC1_SQR3_CHSEL_S9       ADC1_SQR3_bit.CHSEL_S9
#define ADC1_SQR3_CHSEL_S10      ADC1_SQR3_bit.CHSEL_S10
#define ADC1_SQR3_CHSEL_S11      ADC1_SQR3_bit.CHSEL_S11
#define ADC1_SQR3_CHSEL_S12      ADC1_SQR3_bit.CHSEL_S12
#define ADC1_SQR3_CHSEL_S13      ADC1_SQR3_bit.CHSEL_S13
#define ADC1_SQR3_CHSEL_S14      ADC1_SQR3_bit.CHSEL_S14
#define ADC1_SQR3_CHSEL_S15      ADC1_SQR3_bit.CHSEL_S15

#define ADC1_SQR4_CHSEL_S0       ADC1_SQR4_bit.CHSEL_S0
#define ADC1_SQR4_CHSEL_S1       ADC1_SQR4_bit.CHSEL_S1
#define ADC1_SQR4_CHSEL_S2       ADC1_SQR4_bit.CHSEL_S2
#define ADC1_SQR4_CHSEL_S3       ADC1_SQR4_bit.CHSEL_S3
#define ADC1_SQR4_CHSEL_S4       ADC1_SQR4_bit.CHSEL_S4
#define ADC1_SQR4_CHSEL_S5       ADC1_SQR4_bit.CHSEL_S5
#define ADC1_SQR4_CHSEL_S6       ADC1_SQR4_bit.CHSEL_S6
#define ADC1_SQR4_CHSEL_S7       ADC1_SQR4_bit.CHSEL_S7

#define ADC1_TRIGR1_TRIG24       ADC1_TRIGR1_bit.TRIG24
#define ADC1_TRIGR1_TRIG25       ADC1_TRIGR1_bit.TRIG25
#define ADC1_TRIGR1_TRIG26       ADC1_TRIGR1_bit.TRIG26
#define ADC1_TRIGR1_TRIG27       ADC1_TRIGR1_bit.TRIG27
#define ADC1_TRIGR1_VREFINTON    ADC1_TRIGR1_bit.VREFINTON
#define ADC1_TRIGR1_TSON         ADC1_TRIGR1_bit.TSON

#define ADC1_TRIGR2_TRIG16       ADC1_TRIGR2_bit.TRIG16
#define ADC1_TRIGR2_TRIG17       ADC1_TRIGR2_bit.TRIG17
#define ADC1_TRIGR2_TRIG18       ADC1_TRIGR2_bit.TRIG18
#define ADC1_TRIGR2_TRIG19       ADC1_TRIGR2_bit.TRIG19
#define ADC1_TRIGR2_TRIG20       ADC1_TRIGR2_bit.TRIG20
#define ADC1_TRIGR2_TRIG21       ADC1_TRIGR2_bit.TRIG21
#define ADC1_TRIGR2_TRIG22       ADC1_TRIGR2_bit.TRIG22
#define ADC1_TRIGR2_TRIG23       ADC1_TRIGR2_bit.TRIG23

#define ADC1_TRIGR3_TRIG8        ADC1_TRIGR3_bit.TRIG8
#define ADC1_TRIGR3_TRIG9        ADC1_TRIGR3_bit.TRIG9
#define ADC1_TRIGR3_TRIG10       ADC1_TRIGR3_bit.TRIG10
#define ADC1_TRIGR3_TRIG11       ADC1_TRIGR3_bit.TRIG11
#define ADC1_TRIGR3_TRIG12       ADC1_TRIGR3_bit.TRIG12
#define ADC1_TRIGR3_TRIG13       ADC1_TRIGR3_bit.TRIG13
#define ADC1_TRIGR3_TRIG14       ADC1_TRIGR3_bit.TRIG14
#define ADC1_TRIGR3_TRIG15       ADC1_TRIGR3_bit.TRIG15

#define ADC1_TRIGR4_TRIG0        ADC1_TRIGR4_bit.TRIG0
#define ADC1_TRIGR4_TRIG1        ADC1_TRIGR4_bit.TRIG1
#define ADC1_TRIGR4_TRIG2        ADC1_TRIGR4_bit.TRIG2
#define ADC1_TRIGR4_TRIG3        ADC1_TRIGR4_bit.TRIG3
#define ADC1_TRIGR4_TRIG4        ADC1_TRIGR4_bit.TRIG4
#define ADC1_TRIGR4_TRIG5        ADC1_TRIGR4_bit.TRIG5
#define ADC1_TRIGR4_TRIG6        ADC1_TRIGR4_bit.TRIG6
#define ADC1_TRIGR4_TRIG7        ADC1_TRIGR4_bit.TRIG7

#endif

/*-------------------------------------------------------------------------
 *      ADC1 bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ADC1_CR1_ADON       0x01
#define MASK_ADC1_CR1_START      0x02
#define MASK_ADC1_CR1_CONT       0x04
#define MASK_ADC1_CR1_EOCIE      0x08
#define MASK_ADC1_CR1_AWDIE      0x10
#define MASK_ADC1_CR1_RES        0x60
#define MASK_ADC1_CR1_OVERIE     0x80

#define MASK_ADC1_CR2_SMTP1      0x07
#define MASK_ADC1_CR2_EXTSEL0    0x08
#define MASK_ADC1_CR2_EXTSEL1    0x10
#define MASK_ADC1_CR2_TRIG_EDGE0 0x20
#define MASK_ADC1_CR2_TRIG_EDGE1 0x40
#define MASK_ADC1_CR2_PRESC      0x80

#define MASK_ADC1_CR3_CHSEL      0x1F
#define MASK_ADC1_CR3_SMTP2      0xE0

#define MASK_ADC1_SR_EOC         0x01
#define MASK_ADC1_SR_AWD         0x02
#define MASK_ADC1_SR_OVER        0x04

#define MASK_ADC1_DRH_CONV_DATA8 0x01
#define MASK_ADC1_DRH_CONV_DATA9 0x02
#define MASK_ADC1_DRH_CONV_DATA10 0x04
#define MASK_ADC1_DRH_CONV_DATA11 0x08

#define MASK_ADC1_DRL_CONV_DATA0 0x01
#define MASK_ADC1_DRL_CONV_DATA1 0x02
#define MASK_ADC1_DRL_CONV_DATA2 0x04
#define MASK_ADC1_DRL_CONV_DATA3 0x08
#define MASK_ADC1_DRL_CONV_DATA4 0x10
#define MASK_ADC1_DRL_CONV_DATA5 0x20
#define MASK_ADC1_DRL_CONV_DATA6 0x40
#define MASK_ADC1_DRL_CONV_DATA7 0x80

#define MASK_ADC1_HTRH_HT8       0x01
#define MASK_ADC1_HTRH_HT9       0x02
#define MASK_ADC1_HTRH_HT10      0x04
#define MASK_ADC1_HTRH_HT11      0x08

#define MASK_ADC1_HTRL_HT0       0x01
#define MASK_ADC1_HTRL_HT1       0x02
#define MASK_ADC1_HTRL_HT2       0x04
#define MASK_ADC1_HTRL_HT3       0x08
#define MASK_ADC1_HTRL_HT4       0x10
#define MASK_ADC1_HTRL_HT5       0x20
#define MASK_ADC1_HTRL_HT6       0x40
#define MASK_ADC1_HTRL_HT7       0x80

#define MASK_ADC1_LTRH_LT8       0x01
#define MASK_ADC1_LTRH_LT9       0x02
#define MASK_ADC1_LTRH_LT10      0x04
#define MASK_ADC1_LTRH_LT11      0x08

#define MASK_ADC1_LTRL_LT0       0x01
#define MASK_ADC1_LTRL_LT1       0x02
#define MASK_ADC1_LTRL_LT2       0x04
#define MASK_ADC1_LTRL_LT3       0x08
#define MASK_ADC1_LTRL_LT4       0x10
#define MASK_ADC1_LTRL_LT5       0x20
#define MASK_ADC1_LTRL_LT6       0x40
#define MASK_ADC1_LTRL_LT7       0x80

#define MASK_ADC1_SQR1_CHSEL_S24 0x01
#define MASK_ADC1_SQR1_CHSEL_S25 0x02
#define MASK_ADC1_SQR1_CHSEL_S26 0x04
#define MASK_ADC1_SQR1_CHSEL_S27 0x08
#define MASK_ADC1_SQR1_CHSEL_S28 0x10
#define MASK_ADC1_SQR1_CHSEL_S29 0x20
#define MASK_ADC1_SQR1_DMAOFF    0x80

#define MASK_ADC1_SQR2_CHSEL_S16 0x01
#define MASK_ADC1_SQR2_CHSEL_S17 0x02
#define MASK_ADC1_SQR2_CHSEL_S18 0x04
#define MASK_ADC1_SQR2_CHSEL_S19 0x08
#define MASK_ADC1_SQR2_CHSEL_S20 0x10
#define MASK_ADC1_SQR2_CHSEL_S21 0x20
#define MASK_ADC1_SQR2_CHSEL_S22 0x40
#define MASK_ADC1_SQR2_CHSEL_S23 0x80

#define MASK_ADC1_SQR3_CHSEL_S8  0x01
#define MASK_ADC1_SQR3_CHSEL_S9  0x02
#define MASK_ADC1_SQR3_CHSEL_S10 0x04
#define MASK_ADC1_SQR3_CHSEL_S11 0x08
#define MASK_ADC1_SQR3_CHSEL_S12 0x10
#define MASK_ADC1_SQR3_CHSEL_S13 0x20
#define MASK_ADC1_SQR3_CHSEL_S14 0x40
#define MASK_ADC1_SQR3_CHSEL_S15 0x80

#define MASK_ADC1_SQR4_CHSEL_S0  0x01
#define MASK_ADC1_SQR4_CHSEL_S1  0x02
#define MASK_ADC1_SQR4_CHSEL_S2  0x04
#define MASK_ADC1_SQR4_CHSEL_S3  0x08
#define MASK_ADC1_SQR4_CHSEL_S4  0x10
#define MASK_ADC1_SQR4_CHSEL_S5  0x20
#define MASK_ADC1_SQR4_CHSEL_S6  0x40
#define MASK_ADC1_SQR4_CHSEL_S7  0x80

#define MASK_ADC1_TRIGR1_TRIG24  0x01
#define MASK_ADC1_TRIGR1_TRIG25  0x02
#define MASK_ADC1_TRIGR1_TRIG26  0x04
#define MASK_ADC1_TRIGR1_TRIG27  0x08
#define MASK_ADC1_TRIGR1_VREFINTON 0x10
#define MASK_ADC1_TRIGR1_TSON    0x20

#define MASK_ADC1_TRIGR2_TRIG16  0x01
#define MASK_ADC1_TRIGR2_TRIG17  0x02
#define MASK_ADC1_TRIGR2_TRIG18  0x04
#define MASK_ADC1_TRIGR2_TRIG19  0x08
#define MASK_ADC1_TRIGR2_TRIG20  0x10
#define MASK_ADC1_TRIGR2_TRIG21  0x20
#define MASK_ADC1_TRIGR2_TRIG22  0x40
#define MASK_ADC1_TRIGR2_TRIG23  0x80

#define MASK_ADC1_TRIGR3_TRIG8   0x01
#define MASK_ADC1_TRIGR3_TRIG9   0x02
#define MASK_ADC1_TRIGR3_TRIG10  0x04
#define MASK_ADC1_TRIGR3_TRIG11  0x08
#define MASK_ADC1_TRIGR3_TRIG12  0x10
#define MASK_ADC1_TRIGR3_TRIG13  0x20
#define MASK_ADC1_TRIGR3_TRIG14  0x40
#define MASK_ADC1_TRIGR3_TRIG15  0x80

#define MASK_ADC1_TRIGR4_TRIG0   0x01
#define MASK_ADC1_TRIGR4_TRIG1   0x02
#define MASK_ADC1_TRIGR4_TRIG2   0x04
#define MASK_ADC1_TRIGR4_TRIG3   0x08
#define MASK_ADC1_TRIGR4_TRIG4   0x10
#define MASK_ADC1_TRIGR4_TRIG5   0x20
#define MASK_ADC1_TRIGR4_TRIG6   0x40
#define MASK_ADC1_TRIGR4_TRIG7   0x80


/*-------------------------------------------------------------------------
 *      DAC register definitions
 *-----------------------------------------------------------------------*/
/* DAC control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char EN          : 1;
  unsigned char BOFF        : 1;
  unsigned char TEN         : 1;
  unsigned char TSEL        : 3;
} __BITS_DAC_CR1;
#endif
__IO_REG8_BIT(DAC_CR1,     0x5380, __READ_WRITE, __BITS_DAC_CR1);

/* DAC control register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char DMAEN       : 1;
  unsigned char DMAUDRIE    : 1;
} __BITS_DAC_CR2;
#endif
__IO_REG8_BIT(DAC_CR2,     0x5381, __READ_WRITE, __BITS_DAC_CR2);

/* DAC software trigger register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWTRIG      : 1;
} __BITS_DAC_SWTRIGR;
#endif
__IO_REG8_BIT(DAC_SWTRIGR, 0x5384, __READ, __BITS_DAC_SWTRIGR);

/* DAC status register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DMAUDR      : 1;
} __BITS_DAC_SR;
#endif
__IO_REG8_BIT(DAC_SR,      0x5385, __READ_WRITE, __BITS_DAC_SR);

/* DAC right aligned data holding register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char RDHRH       : 4;
} __BITS_DAC_RDHRH;
#endif
__IO_REG8_BIT(DAC_RDHRH,   0x5388, __READ_WRITE, __BITS_DAC_RDHRH);

/* DAC right aligned data holding register low */
__IO_REG8    (DAC_RDHRL,   0x5389, __READ_WRITE);
/* DAC left aligned data holding register high */
__IO_REG8    (DAC_LDHRH,   0x538C, __READ_WRITE);
/* DAC left aligned data holding register low */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char             : 4;
  unsigned char LDHRL       : 4;
} __BITS_DAC_LDHRL;
#endif
__IO_REG8_BIT(DAC_LDHRL,   0x538D, __READ_WRITE, __BITS_DAC_LDHRL);

/* DAC 8-bit data holding register */
__IO_REG8    (DAC_DHR8,    0x5390, __READ_WRITE);
/* DAC data output register high */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char DORH        : 4;
} __BITS_DAC_DORH;
#endif
__IO_REG8_BIT(DAC_DORH,    0x53AC, __READ, __BITS_DAC_DORH);

/* DAC data output register low */
__IO_REG8    (DAC_DORL,    0x53AD, __READ);

/*-------------------------------------------------------------------------
 *      DAC bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define DAC_CR1_EN               DAC_CR1_bit.EN
#define DAC_CR1_BOFF             DAC_CR1_bit.BOFF
#define DAC_CR1_TEN              DAC_CR1_bit.TEN
#define DAC_CR1_TSEL             DAC_CR1_bit.TSEL

#define DAC_CR2_DMAEN            DAC_CR2_bit.DMAEN
#define DAC_CR2_DMAUDRIE         DAC_CR2_bit.DMAUDRIE

#define DAC_SWTRIGR_SWTRIG       DAC_SWTRIGR_bit.SWTRIG

#define DAC_SR_DMAUDR            DAC_SR_bit.DMAUDR

#define DAC_RDHRH_RDHRH          DAC_RDHRH_bit.RDHRH

#define DAC_LDHRL_LDHRL          DAC_LDHRL_bit.LDHRL

#define DAC_DORH_DORH            DAC_DORH_bit.DORH

#endif

/*-------------------------------------------------------------------------
 *      DAC bit masks
 *-----------------------------------------------------------------------*/
#define MASK_DAC_CR1_EN          0x01
#define MASK_DAC_CR1_BOFF        0x02
#define MASK_DAC_CR1_TEN         0x04
#define MASK_DAC_CR1_TSEL        0x38

#define MASK_DAC_CR2_DMAEN       0x10
#define MASK_DAC_CR2_DMAUDRIE    0x20

#define MASK_DAC_SWTRIGR_SWTRIG  0x01

#define MASK_DAC_SR_DMAUDR       0x01

#define MASK_DAC_RDHRH_RDHRH     0x0F

#define MASK_DAC_LDHRL_LDHRL     0xF0

#define MASK_DAC_DORH_DORH       0x0F


/*-------------------------------------------------------------------------
 *      RI register definitions
 *-----------------------------------------------------------------------*/
/* Timer input capture routing register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IC2CS       : 5;
} __BITS_RI_ICR1;
#endif
__IO_REG8_BIT(RI_ICR1,     0x5431, __READ_WRITE, __BITS_RI_ICR1);

/* Timer input capture routing register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IC3CS       : 5;
} __BITS_RI_ICR2;
#endif
__IO_REG8_BIT(RI_ICR2,     0x5432, __READ_WRITE, __BITS_RI_ICR2);

/* I/O input register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1I        : 1;
  unsigned char CH4I        : 1;
  unsigned char CH7I        : 1;
  unsigned char CH10I       : 1;
  unsigned char CH13I       : 1;
  unsigned char CH16I       : 1;
  unsigned char CH19I       : 1;
  unsigned char CH22I       : 1;
} __BITS_RI_IOIR1;
#endif
__IO_REG8_BIT(RI_IOIR1,    0x5433, __READ, __BITS_RI_IOIR1);

/* I/O input register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2I        : 1;
  unsigned char CH5I        : 1;
  unsigned char CH8I        : 1;
  unsigned char CH11I       : 1;
  unsigned char CH14I       : 1;
  unsigned char CH17I       : 1;
  unsigned char CH20I       : 1;
  unsigned char CH23I       : 1;
} __BITS_RI_IOIR2;
#endif
__IO_REG8_BIT(RI_IOIR2,    0x5434, __READ, __BITS_RI_IOIR2);

/* I/O input register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3I        : 1;
  unsigned char CH6I        : 1;
  unsigned char CH9I        : 1;
  unsigned char CH12I       : 1;
  unsigned char CH15I       : 1;
  unsigned char CH18I       : 1;
  unsigned char CH21I       : 1;
  unsigned char CH24I       : 1;
} __BITS_RI_IOIR3;
#endif
__IO_REG8_BIT(RI_IOIR3,    0x5435, __READ, __BITS_RI_IOIR3);

/* I/O control mode register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1M        : 1;
  unsigned char CH4M        : 1;
  unsigned char CH7M        : 1;
  unsigned char CH10M       : 1;
  unsigned char CH13M       : 1;
  unsigned char CH16M       : 1;
  unsigned char CH19M       : 1;
  unsigned char CH22M       : 1;
} __BITS_RI_IOCMR1;
#endif
__IO_REG8_BIT(RI_IOCMR1,   0x5436, __READ_WRITE, __BITS_RI_IOCMR1);

/* I/O control mode register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2M        : 1;
  unsigned char CH5M        : 1;
  unsigned char CH8M        : 1;
  unsigned char CH11M       : 1;
  unsigned char CH14M       : 1;
  unsigned char CH17M       : 1;
  unsigned char CH20M       : 1;
  unsigned char CH23M       : 1;
} __BITS_RI_IOCMR2;
#endif
__IO_REG8_BIT(RI_IOCMR2,   0x5437, __READ_WRITE, __BITS_RI_IOCMR2);

/* I/O control mode register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3M        : 1;
  unsigned char CH6M        : 1;
  unsigned char CH9M        : 1;
  unsigned char CH12M       : 1;
  unsigned char CH53M       : 1;
  unsigned char CH18M       : 1;
  unsigned char CH21M       : 1;
  unsigned char CH24M       : 1;
} __BITS_RI_IOCMR3;
#endif
__IO_REG8_BIT(RI_IOCMR3,   0x5438, __READ_WRITE, __BITS_RI_IOCMR3);

/* I/O switch register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH1E        : 1;
  unsigned char CH4E        : 1;
  unsigned char CH7E        : 1;
  unsigned char CH10E       : 1;
  unsigned char CH13E       : 1;
  unsigned char CH16E       : 1;
  unsigned char CH19E       : 1;
  unsigned char CH22E       : 1;
} __BITS_RI_IOSR1;
#endif
__IO_REG8_BIT(RI_IOSR1,    0x5439, __READ_WRITE, __BITS_RI_IOSR1);

/* I/O switch register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH2E        : 1;
  unsigned char CH5E        : 1;
  unsigned char CH8E        : 1;
  unsigned char CH11E       : 1;
  unsigned char CH14E       : 1;
  unsigned char CH17E       : 1;
  unsigned char CH20E       : 1;
  unsigned char CH23E       : 1;
} __BITS_RI_IOSR2;
#endif
__IO_REG8_BIT(RI_IOSR2,    0x543A, __READ_WRITE, __BITS_RI_IOSR2);

/* I/O switch register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CH3E        : 1;
  unsigned char CH6E        : 1;
  unsigned char CH9E        : 1;
  unsigned char CH12E       : 1;
  unsigned char CH15E       : 1;
  unsigned char CH18E       : 1;
  unsigned char CH21E       : 1;
  unsigned char CH24E       : 1;
} __BITS_RI_IOSR3;
#endif
__IO_REG8_BIT(RI_IOSR3,    0x543B, __READ_WRITE, __BITS_RI_IOSR3);

/* I/O group control register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char IOM1        : 2;
  unsigned char IOM2        : 2;
  unsigned char IOM3        : 2;
} __BITS_RI_IOGCR;
#endif
__IO_REG8_BIT(RI_IOGCR,    0x543C, __READ_WRITE, __BITS_RI_IOGCR);

/* Analog switch register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AS0         : 1;
  unsigned char AS1         : 1;
  unsigned char AS2         : 1;
  unsigned char AS3         : 1;
  unsigned char AS4         : 1;
  unsigned char AS5         : 1;
  unsigned char AS6         : 1;
  unsigned char AS7         : 1;
} __BITS_RI_ASCR1;
#endif
__IO_REG8_BIT(RI_ASCR1,    0x543D, __READ_WRITE, __BITS_RI_ASCR1);

/* Analog switch register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char AS8         : 1;
  unsigned char             : 5;
  unsigned char AS14        : 1;
} __BITS_RI_ASCR2;
#endif
__IO_REG8_BIT(RI_ASCR2,    0x543E, __READ_WRITE, __BITS_RI_ASCR2);

/* Resistor control register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char KPU10       : 1;
  unsigned char KPU400      : 1;
  unsigned char KPD10       : 1;
  unsigned char KPD400      : 1;
} __BITS_RI_RCR;
#endif
__IO_REG8_BIT(RI_RCR,      0x543F, __READ_WRITE, __BITS_RI_RCR);


/*-------------------------------------------------------------------------
 *      RI bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define RI_ICR1_IC2CS            RI_ICR1_bit.IC2CS

#define RI_ICR2_IC3CS            RI_ICR2_bit.IC3CS

#define RI_IOIR1_CH1I            RI_IOIR1_bit.CH1I
#define RI_IOIR1_CH4I            RI_IOIR1_bit.CH4I
#define RI_IOIR1_CH7I            RI_IOIR1_bit.CH7I
#define RI_IOIR1_CH10I           RI_IOIR1_bit.CH10I
#define RI_IOIR1_CH13I           RI_IOIR1_bit.CH13I
#define RI_IOIR1_CH16I           RI_IOIR1_bit.CH16I
#define RI_IOIR1_CH19I           RI_IOIR1_bit.CH19I
#define RI_IOIR1_CH22I           RI_IOIR1_bit.CH22I

#define RI_IOIR2_CH2I            RI_IOIR2_bit.CH2I
#define RI_IOIR2_CH5I            RI_IOIR2_bit.CH5I
#define RI_IOIR2_CH8I            RI_IOIR2_bit.CH8I
#define RI_IOIR2_CH11I           RI_IOIR2_bit.CH11I
#define RI_IOIR2_CH14I           RI_IOIR2_bit.CH14I
#define RI_IOIR2_CH17I           RI_IOIR2_bit.CH17I
#define RI_IOIR2_CH20I           RI_IOIR2_bit.CH20I
#define RI_IOIR2_CH23I           RI_IOIR2_bit.CH23I

#define RI_IOIR3_CH3I            RI_IOIR3_bit.CH3I
#define RI_IOIR3_CH6I            RI_IOIR3_bit.CH6I
#define RI_IOIR3_CH9I            RI_IOIR3_bit.CH9I
#define RI_IOIR3_CH12I           RI_IOIR3_bit.CH12I
#define RI_IOIR3_CH15I           RI_IOIR3_bit.CH15I
#define RI_IOIR3_CH18I           RI_IOIR3_bit.CH18I
#define RI_IOIR3_CH21I           RI_IOIR3_bit.CH21I
#define RI_IOIR3_CH24I           RI_IOIR3_bit.CH24I

#define RI_IOCMR1_CH1M           RI_IOCMR1_bit.CH1M
#define RI_IOCMR1_CH4M           RI_IOCMR1_bit.CH4M
#define RI_IOCMR1_CH7M           RI_IOCMR1_bit.CH7M
#define RI_IOCMR1_CH10M          RI_IOCMR1_bit.CH10M
#define RI_IOCMR1_CH13M          RI_IOCMR1_bit.CH13M
#define RI_IOCMR1_CH16M          RI_IOCMR1_bit.CH16M
#define RI_IOCMR1_CH19M          RI_IOCMR1_bit.CH19M
#define RI_IOCMR1_CH22M          RI_IOCMR1_bit.CH22M

#define RI_IOCMR2_CH2M           RI_IOCMR2_bit.CH2M
#define RI_IOCMR2_CH5M           RI_IOCMR2_bit.CH5M
#define RI_IOCMR2_CH8M           RI_IOCMR2_bit.CH8M
#define RI_IOCMR2_CH11M          RI_IOCMR2_bit.CH11M
#define RI_IOCMR2_CH14M          RI_IOCMR2_bit.CH14M
#define RI_IOCMR2_CH17M          RI_IOCMR2_bit.CH17M
#define RI_IOCMR2_CH20M          RI_IOCMR2_bit.CH20M
#define RI_IOCMR2_CH23M          RI_IOCMR2_bit.CH23M

#define RI_IOCMR3_CH3M           RI_IOCMR3_bit.CH3M
#define RI_IOCMR3_CH6M           RI_IOCMR3_bit.CH6M
#define RI_IOCMR3_CH9M           RI_IOCMR3_bit.CH9M
#define RI_IOCMR3_CH12M          RI_IOCMR3_bit.CH12M
#define RI_IOCMR3_CH53M          RI_IOCMR3_bit.CH53M
#define RI_IOCMR3_CH18M          RI_IOCMR3_bit.CH18M
#define RI_IOCMR3_CH21M          RI_IOCMR3_bit.CH21M
#define RI_IOCMR3_CH24M          RI_IOCMR3_bit.CH24M

#define RI_IOSR1_CH1E            RI_IOSR1_bit.CH1E
#define RI_IOSR1_CH4E            RI_IOSR1_bit.CH4E
#define RI_IOSR1_CH7E            RI_IOSR1_bit.CH7E
#define RI_IOSR1_CH10E           RI_IOSR1_bit.CH10E
#define RI_IOSR1_CH13E           RI_IOSR1_bit.CH13E
#define RI_IOSR1_CH16E           RI_IOSR1_bit.CH16E
#define RI_IOSR1_CH19E           RI_IOSR1_bit.CH19E
#define RI_IOSR1_CH22E           RI_IOSR1_bit.CH22E

#define RI_IOSR2_CH2E            RI_IOSR2_bit.CH2E
#define RI_IOSR2_CH5E            RI_IOSR2_bit.CH5E
#define RI_IOSR2_CH8E            RI_IOSR2_bit.CH8E
#define RI_IOSR2_CH11E           RI_IOSR2_bit.CH11E
#define RI_IOSR2_CH14E           RI_IOSR2_bit.CH14E
#define RI_IOSR2_CH17E           RI_IOSR2_bit.CH17E
#define RI_IOSR2_CH20E           RI_IOSR2_bit.CH20E
#define RI_IOSR2_CH23E           RI_IOSR2_bit.CH23E

#define RI_IOSR3_CH3E            RI_IOSR3_bit.CH3E
#define RI_IOSR3_CH6E            RI_IOSR3_bit.CH6E
#define RI_IOSR3_CH9E            RI_IOSR3_bit.CH9E
#define RI_IOSR3_CH12E           RI_IOSR3_bit.CH12E
#define RI_IOSR3_CH15E           RI_IOSR3_bit.CH15E
#define RI_IOSR3_CH18E           RI_IOSR3_bit.CH18E
#define RI_IOSR3_CH21E           RI_IOSR3_bit.CH21E
#define RI_IOSR3_CH24E           RI_IOSR3_bit.CH24E

#define RI_IOGCR_IOM1            RI_IOGCR_bit.IOM1
#define RI_IOGCR_IOM2            RI_IOGCR_bit.IOM2
#define RI_IOGCR_IOM3            RI_IOGCR_bit.IOM3

#define RI_ASCR1_AS0             RI_ASCR1_bit.AS0
#define RI_ASCR1_AS1             RI_ASCR1_bit.AS1
#define RI_ASCR1_AS2             RI_ASCR1_bit.AS2
#define RI_ASCR1_AS3             RI_ASCR1_bit.AS3
#define RI_ASCR1_AS4             RI_ASCR1_bit.AS4
#define RI_ASCR1_AS5             RI_ASCR1_bit.AS5
#define RI_ASCR1_AS6             RI_ASCR1_bit.AS6
#define RI_ASCR1_AS7             RI_ASCR1_bit.AS7

#define RI_ASCR2_AS8             RI_ASCR2_bit.AS8
#define RI_ASCR2_AS14            RI_ASCR2_bit.AS14

#define RI_RCR_KPU10             RI_RCR_bit.KPU10
#define RI_RCR_KPU400            RI_RCR_bit.KPU400
#define RI_RCR_KPD10             RI_RCR_bit.KPD10
#define RI_RCR_KPD400            RI_RCR_bit.KPD400

#endif

/*-------------------------------------------------------------------------
 *      RI bit masks
 *-----------------------------------------------------------------------*/
#define MASK_RI_ICR1_IC2CS       0x1F

#define MASK_RI_ICR2_IC3CS       0x1F

#define MASK_RI_IOIR1_CH1I       0x01
#define MASK_RI_IOIR1_CH4I       0x02
#define MASK_RI_IOIR1_CH7I       0x04
#define MASK_RI_IOIR1_CH10I      0x08
#define MASK_RI_IOIR1_CH13I      0x10
#define MASK_RI_IOIR1_CH16I      0x20
#define MASK_RI_IOIR1_CH19I      0x40
#define MASK_RI_IOIR1_CH22I      0x80

#define MASK_RI_IOIR2_CH2I       0x01
#define MASK_RI_IOIR2_CH5I       0x02
#define MASK_RI_IOIR2_CH8I       0x04
#define MASK_RI_IOIR2_CH11I      0x08
#define MASK_RI_IOIR2_CH14I      0x10
#define MASK_RI_IOIR2_CH17I      0x20
#define MASK_RI_IOIR2_CH20I      0x40
#define MASK_RI_IOIR2_CH23I      0x80

#define MASK_RI_IOIR3_CH3I       0x01
#define MASK_RI_IOIR3_CH6I       0x02
#define MASK_RI_IOIR3_CH9I       0x04
#define MASK_RI_IOIR3_CH12I      0x08
#define MASK_RI_IOIR3_CH15I      0x10
#define MASK_RI_IOIR3_CH18I      0x20
#define MASK_RI_IOIR3_CH21I      0x40
#define MASK_RI_IOIR3_CH24I      0x80

#define MASK_RI_IOCMR1_CH1M      0x01
#define MASK_RI_IOCMR1_CH4M      0x02
#define MASK_RI_IOCMR1_CH7M      0x04
#define MASK_RI_IOCMR1_CH10M     0x08
#define MASK_RI_IOCMR1_CH13M     0x10
#define MASK_RI_IOCMR1_CH16M     0x20
#define MASK_RI_IOCMR1_CH19M     0x40
#define MASK_RI_IOCMR1_CH22M     0x80

#define MASK_RI_IOCMR2_CH2M      0x01
#define MASK_RI_IOCMR2_CH5M      0x02
#define MASK_RI_IOCMR2_CH8M      0x04
#define MASK_RI_IOCMR2_CH11M     0x08
#define MASK_RI_IOCMR2_CH14M     0x10
#define MASK_RI_IOCMR2_CH17M     0x20
#define MASK_RI_IOCMR2_CH20M     0x40
#define MASK_RI_IOCMR2_CH23M     0x80

#define MASK_RI_IOCMR3_CH3M      0x01
#define MASK_RI_IOCMR3_CH6M      0x02
#define MASK_RI_IOCMR3_CH9M      0x04
#define MASK_RI_IOCMR3_CH12M     0x08
#define MASK_RI_IOCMR3_CH53M     0x10
#define MASK_RI_IOCMR3_CH18M     0x20
#define MASK_RI_IOCMR3_CH21M     0x40
#define MASK_RI_IOCMR3_CH24M     0x80

#define MASK_RI_IOSR1_CH1E       0x01
#define MASK_RI_IOSR1_CH4E       0x02
#define MASK_RI_IOSR1_CH7E       0x04
#define MASK_RI_IOSR1_CH10E      0x08
#define MASK_RI_IOSR1_CH13E      0x10
#define MASK_RI_IOSR1_CH16E      0x20
#define MASK_RI_IOSR1_CH19E      0x40
#define MASK_RI_IOSR1_CH22E      0x80

#define MASK_RI_IOSR2_CH2E       0x01
#define MASK_RI_IOSR2_CH5E       0x02
#define MASK_RI_IOSR2_CH8E       0x04
#define MASK_RI_IOSR2_CH11E      0x08
#define MASK_RI_IOSR2_CH14E      0x10
#define MASK_RI_IOSR2_CH17E      0x20
#define MASK_RI_IOSR2_CH20E      0x40
#define MASK_RI_IOSR2_CH23E      0x80

#define MASK_RI_IOSR3_CH3E       0x01
#define MASK_RI_IOSR3_CH6E       0x02
#define MASK_RI_IOSR3_CH9E       0x04
#define MASK_RI_IOSR3_CH12E      0x08
#define MASK_RI_IOSR3_CH15E      0x10
#define MASK_RI_IOSR3_CH18E      0x20
#define MASK_RI_IOSR3_CH21E      0x40
#define MASK_RI_IOSR3_CH24E      0x80

#define MASK_RI_IOGCR_IOM1       0x03
#define MASK_RI_IOGCR_IOM2       0x0C
#define MASK_RI_IOGCR_IOM3       0x30

#define MASK_RI_ASCR1_AS0        0x01
#define MASK_RI_ASCR1_AS1        0x02
#define MASK_RI_ASCR1_AS2        0x04
#define MASK_RI_ASCR1_AS3        0x08
#define MASK_RI_ASCR1_AS4        0x10
#define MASK_RI_ASCR1_AS5        0x20
#define MASK_RI_ASCR1_AS6        0x40
#define MASK_RI_ASCR1_AS7        0x80

#define MASK_RI_ASCR2_AS8        0x01
#define MASK_RI_ASCR2_AS14       0x40

#define MASK_RI_RCR_KPU10        0x01
#define MASK_RI_RCR_KPU400       0x02
#define MASK_RI_RCR_KPD10        0x04
#define MASK_RI_RCR_KPD400       0x08


/*-------------------------------------------------------------------------
 *      COMP register definitions
 *-----------------------------------------------------------------------*/
/* Comparator control and status register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CMP1        : 2;
  unsigned char STE         : 1;
  unsigned char CMP1OUT     : 1;
  unsigned char EF1         : 1;
  unsigned char IE1         : 1;
} __BITS_COMP_CSR1;
#endif
__IO_REG8_BIT(COMP_CSR1,   0x5440, __READ_WRITE, __BITS_COMP_CSR1);

/* Comparator control and status register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char CMP2        : 2;
  unsigned char SPEED       : 1;
  unsigned char CMP2OUT     : 1;
  unsigned char EF2         : 1;
  unsigned char IE2         : 1;
} __BITS_COMP_CSR2;
#endif
__IO_REG8_BIT(COMP_CSR2,   0x5441, __READ_WRITE, __BITS_COMP_CSR2);

/* Comparator control and status register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFOUTEN   : 1;
  unsigned char WNDWE       : 1;
  unsigned char VREFEN      : 1;
  unsigned char INSEL       : 3;
  unsigned char OUTSEL      : 2;
} __BITS_COMP_CSR3;
#endif
__IO_REG8_BIT(COMP_CSR3,   0x5442, __READ_WRITE, __BITS_COMP_CSR3);

/* Comparator control and status register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char INVTRIG     : 3;
  unsigned char NINVTRIG    : 3;
} __BITS_COMP_CSR4;
#endif
__IO_REG8_BIT(COMP_CSR4,   0x5443, __READ_WRITE, __BITS_COMP_CSR4);

/* Comparator control and status register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VREFTRIG    : 3;
  unsigned char DACTRIG     : 3;
} __BITS_COMP_CSR5;
#endif
__IO_REG8_BIT(COMP_CSR5,   0x5444, __READ_WRITE, __BITS_COMP_CSR5);


/*-------------------------------------------------------------------------
 *      COMP bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define COMP_CSR1_CMP1           COMP_CSR1_bit.CMP1
#define COMP_CSR1_STE            COMP_CSR1_bit.STE
#define COMP_CSR1_CMP1OUT        COMP_CSR1_bit.CMP1OUT
#define COMP_CSR1_EF1            COMP_CSR1_bit.EF1
#define COMP_CSR1_IE1            COMP_CSR1_bit.IE1

#define COMP_CSR2_CMP2           COMP_CSR2_bit.CMP2
#define COMP_CSR2_SPEED          COMP_CSR2_bit.SPEED
#define COMP_CSR2_CMP2OUT        COMP_CSR2_bit.CMP2OUT
#define COMP_CSR2_EF2            COMP_CSR2_bit.EF2
#define COMP_CSR2_IE2            COMP_CSR2_bit.IE2

#define COMP_CSR3_VREFOUTEN      COMP_CSR3_bit.VREFOUTEN
#define COMP_CSR3_WNDWE          COMP_CSR3_bit.WNDWE
#define COMP_CSR3_VREFEN         COMP_CSR3_bit.VREFEN
#define COMP_CSR3_INSEL          COMP_CSR3_bit.INSEL
#define COMP_CSR3_OUTSEL         COMP_CSR3_bit.OUTSEL

#define COMP_CSR4_INVTRIG        COMP_CSR4_bit.INVTRIG
#define COMP_CSR4_NINVTRIG       COMP_CSR4_bit.NINVTRIG

#define COMP_CSR5_VREFTRIG       COMP_CSR5_bit.VREFTRIG
#define COMP_CSR5_DACTRIG        COMP_CSR5_bit.DACTRIG

#endif

/*-------------------------------------------------------------------------
 *      COMP bit masks
 *-----------------------------------------------------------------------*/
#define MASK_COMP_CSR1_CMP1      0x03
#define MASK_COMP_CSR1_STE       0x04
#define MASK_COMP_CSR1_CMP1OUT   0x08
#define MASK_COMP_CSR1_EF1       0x10
#define MASK_COMP_CSR1_IE1       0x20

#define MASK_COMP_CSR2_CMP2      0x03
#define MASK_COMP_CSR2_SPEED     0x04
#define MASK_COMP_CSR2_CMP2OUT   0x08
#define MASK_COMP_CSR2_EF2       0x10
#define MASK_COMP_CSR2_IE2       0x20

#define MASK_COMP_CSR3_VREFOUTEN 0x01
#define MASK_COMP_CSR3_WNDWE     0x02
#define MASK_COMP_CSR3_VREFEN    0x04
#define MASK_COMP_CSR3_INSEL     0x38
#define MASK_COMP_CSR3_OUTSEL    0xC0

#define MASK_COMP_CSR4_INVTRIG   0x07
#define MASK_COMP_CSR4_NINVTRIG  0x38

#define MASK_COMP_CSR5_VREFTRIG  0x07
#define MASK_COMP_CSR5_DACTRIG   0x38


/*-------------------------------------------------------------------------
 *      CPU register definitions
 *-----------------------------------------------------------------------*/
/* Accumulator */
__IO_REG8    (CPU_A,       0x7F00, __READ_WRITE);
/* Program counter extended */
__IO_REG8    (CPU_PCE,     0x7F01, __READ_WRITE);
/* Program counter high */
__IO_REG8    (CPU_PCH,     0x7F02, __READ_WRITE);
/* Program counter low */
__IO_REG8    (CPU_PCL,     0x7F03, __READ_WRITE);
/* X index register high */
__IO_REG8    (CPU_XH,      0x7F04, __READ_WRITE);
/* X index register low */
__IO_REG8    (CPU_XL,      0x7F05, __READ_WRITE);
/* Y index register high */
__IO_REG8    (CPU_YH,      0x7F06, __READ_WRITE);
/* Y index register low */
__IO_REG8    (CPU_YL,      0x7F07, __READ_WRITE);
/* Stack pointer high */
__IO_REG8    (CPU_SPH,     0x7F08, __READ_WRITE);
/* Stack pointer low */
__IO_REG8    (CPU_SPL,     0x7F09, __READ_WRITE);
/* Condition code register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char C           : 1;
  unsigned char Z           : 1;
  unsigned char N           : 1;
  unsigned char I0          : 1;
  unsigned char H           : 1;
  unsigned char I1          : 1;
  unsigned char             : 1;
  unsigned char V           : 1;
} __BITS_CPU_CCR;
#endif
__IO_REG8_BIT(CPU_CCR,     0x7F0A, __READ_WRITE, __BITS_CPU_CCR);

/* Global configuration register */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char SWD         : 1;
  unsigned char AL          : 1;
} __BITS_CPU_CFG_GCR;
#endif
__IO_REG8_BIT(CPU_CFG_GCR, 0x7F60, __READ_WRITE, __BITS_CPU_CFG_GCR);


/*-------------------------------------------------------------------------
 *      CPU bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define CPU_CCR_C                CPU_CCR_bit.C
#define CPU_CCR_Z                CPU_CCR_bit.Z
#define CPU_CCR_N                CPU_CCR_bit.N
#define CPU_CCR_I0               CPU_CCR_bit.I0
#define CPU_CCR_H                CPU_CCR_bit.H
#define CPU_CCR_I1               CPU_CCR_bit.I1
#define CPU_CCR_V                CPU_CCR_bit.V

#define CPU_CFG_GCR_SWD          CPU_CFG_GCR_bit.SWD
#define CPU_CFG_GCR_AL           CPU_CFG_GCR_bit.AL

#endif

/*-------------------------------------------------------------------------
 *      CPU bit masks
 *-----------------------------------------------------------------------*/
#define MASK_CPU_CCR_C           0x01
#define MASK_CPU_CCR_Z           0x02
#define MASK_CPU_CCR_N           0x04
#define MASK_CPU_CCR_I0          0x08
#define MASK_CPU_CCR_H           0x10
#define MASK_CPU_CCR_I1          0x20
#define MASK_CPU_CCR_V           0x80

#define MASK_CPU_CFG_GCR_SWD     0x01
#define MASK_CPU_CFG_GCR_AL      0x02


/*-------------------------------------------------------------------------
 *      ITC-SPR register definitions
 *-----------------------------------------------------------------------*/
/* Interrupt Software priority register 1 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT0SPR    : 2;
  unsigned char VECT1SPR    : 2;
  unsigned char VECT2SPR    : 2;
  unsigned char VECT3SPR    : 2;
} __BITS_ITC_SPR1;
#endif
__IO_REG8_BIT(ITC_SPR1,    0x7F70, __READ_WRITE, __BITS_ITC_SPR1);

/* Interrupt Software priority register 2 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT4SPR    : 2;
  unsigned char VECT5SPR    : 2;
  unsigned char VECT6SPR    : 2;
  unsigned char VECT7SPR    : 2;
} __BITS_ITC_SPR2;
#endif
__IO_REG8_BIT(ITC_SPR2,    0x7F71, __READ_WRITE, __BITS_ITC_SPR2);

/* Interrupt Software priority register 3 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT8SPR    : 2;
  unsigned char VECT9SPR    : 2;
  unsigned char VECT10SPR   : 2;
  unsigned char VECT11SPR   : 2;
} __BITS_ITC_SPR3;
#endif
__IO_REG8_BIT(ITC_SPR3,    0x7F72, __READ_WRITE, __BITS_ITC_SPR3);

/* Interrupt Software priority register 4 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT12SPR   : 2;
  unsigned char VECT13SPR   : 2;
  unsigned char VECT14SPR   : 2;
  unsigned char VECT15SPR   : 2;
} __BITS_ITC_SPR4;
#endif
__IO_REG8_BIT(ITC_SPR4,    0x7F73, __READ_WRITE, __BITS_ITC_SPR4);

/* Interrupt Software priority register 5 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT16SPR   : 2;
  unsigned char VECT17SPR   : 2;
  unsigned char VECT18SPR   : 2;
  unsigned char VECT19SPR   : 2;
} __BITS_ITC_SPR5;
#endif
__IO_REG8_BIT(ITC_SPR5,    0x7F74, __READ_WRITE, __BITS_ITC_SPR5);

/* Interrupt Software priority register 6 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT20SPR   : 2;
  unsigned char VECT21SPR   : 2;
  unsigned char VECT22SPR   : 2;
  unsigned char VECT23SPR   : 2;
} __BITS_ITC_SPR6;
#endif
__IO_REG8_BIT(ITC_SPR6,    0x7F75, __READ_WRITE, __BITS_ITC_SPR6);

/* Interrupt Software priority register 7 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT24SPR   : 2;
  unsigned char VECT25SPR   : 2;
  unsigned char VECT26SPR   : 2;
  unsigned char VECT27SPR   : 2;
} __BITS_ITC_SPR7;
#endif
__IO_REG8_BIT(ITC_SPR7,    0x7F76, __READ_WRITE, __BITS_ITC_SPR7);

/* Interrupt Software priority register 8 */
#ifdef __IAR_SYSTEMS_ICC__
typedef struct
{
  unsigned char VECT28SPR   : 2;
  unsigned char VECT29SPR   : 2;
} __BITS_ITC_SPR8;
#endif
__IO_REG8_BIT(ITC_SPR8,    0x7F77, __READ_WRITE, __BITS_ITC_SPR8);


/*-------------------------------------------------------------------------
 *      ITC-SPR bit fields
 *-----------------------------------------------------------------------*/
#ifdef __IAR_SYSTEMS_ICC__

#define ITC_SPR1_VECT0SPR        ITC_SPR1_bit.VECT0SPR
#define ITC_SPR1_VECT1SPR        ITC_SPR1_bit.VECT1SPR
#define ITC_SPR1_VECT2SPR        ITC_SPR1_bit.VECT2SPR
#define ITC_SPR1_VECT3SPR        ITC_SPR1_bit.VECT3SPR

#define ITC_SPR2_VECT4SPR        ITC_SPR2_bit.VECT4SPR
#define ITC_SPR2_VECT5SPR        ITC_SPR2_bit.VECT5SPR
#define ITC_SPR2_VECT6SPR        ITC_SPR2_bit.VECT6SPR
#define ITC_SPR2_VECT7SPR        ITC_SPR2_bit.VECT7SPR

#define ITC_SPR3_VECT8SPR        ITC_SPR3_bit.VECT8SPR
#define ITC_SPR3_VECT9SPR        ITC_SPR3_bit.VECT9SPR
#define ITC_SPR3_VECT10SPR       ITC_SPR3_bit.VECT10SPR
#define ITC_SPR3_VECT11SPR       ITC_SPR3_bit.VECT11SPR

#define ITC_SPR4_VECT12SPR       ITC_SPR4_bit.VECT12SPR
#define ITC_SPR4_VECT13SPR       ITC_SPR4_bit.VECT13SPR
#define ITC_SPR4_VECT14SPR       ITC_SPR4_bit.VECT14SPR
#define ITC_SPR4_VECT15SPR       ITC_SPR4_bit.VECT15SPR

#define ITC_SPR5_VECT16SPR       ITC_SPR5_bit.VECT16SPR
#define ITC_SPR5_VECT17SPR       ITC_SPR5_bit.VECT17SPR
#define ITC_SPR5_VECT18SPR       ITC_SPR5_bit.VECT18SPR
#define ITC_SPR5_VECT19SPR       ITC_SPR5_bit.VECT19SPR

#define ITC_SPR6_VECT20SPR       ITC_SPR6_bit.VECT20SPR
#define ITC_SPR6_VECT21SPR       ITC_SPR6_bit.VECT21SPR
#define ITC_SPR6_VECT22SPR       ITC_SPR6_bit.VECT22SPR
#define ITC_SPR6_VECT23SPR       ITC_SPR6_bit.VECT23SPR

#define ITC_SPR7_VECT24SPR       ITC_SPR7_bit.VECT24SPR
#define ITC_SPR7_VECT25SPR       ITC_SPR7_bit.VECT25SPR
#define ITC_SPR7_VECT26SPR       ITC_SPR7_bit.VECT26SPR
#define ITC_SPR7_VECT27SPR       ITC_SPR7_bit.VECT27SPR

#define ITC_SPR8_VECT28SPR       ITC_SPR8_bit.VECT28SPR
#define ITC_SPR8_VECT29SPR       ITC_SPR8_bit.VECT29SPR

#endif

/*-------------------------------------------------------------------------
 *      ITC-SPR bit masks
 *-----------------------------------------------------------------------*/
#define MASK_ITC_SPR1_VECT0SPR   0x03
#define MASK_ITC_SPR1_VECT1SPR   0x0C
#define MASK_ITC_SPR1_VECT2SPR   0x30
#define MASK_ITC_SPR1_VECT3SPR   0xC0

#define MASK_ITC_SPR2_VECT4SPR   0x03
#define MASK_ITC_SPR2_VECT5SPR   0x0C
#define MASK_ITC_SPR2_VECT6SPR   0x30
#define MASK_ITC_SPR2_VECT7SPR   0xC0

#define MASK_ITC_SPR3_VECT8SPR   0x03
#define MASK_ITC_SPR3_VECT9SPR   0x0C
#define MASK_ITC_SPR3_VECT10SPR  0x30
#define MASK_ITC_SPR3_VECT11SPR  0xC0

#define MASK_ITC_SPR4_VECT12SPR  0x03
#define MASK_ITC_SPR4_VECT13SPR  0x0C
#define MASK_ITC_SPR4_VECT14SPR  0x30
#define MASK_ITC_SPR4_VECT15SPR  0xC0

#define MASK_ITC_SPR5_VECT16SPR  0x03
#define MASK_ITC_SPR5_VECT17SPR  0x0C
#define MASK_ITC_SPR5_VECT18SPR  0x30
#define MASK_ITC_SPR5_VECT19SPR  0xC0

#define MASK_ITC_SPR6_VECT20SPR  0x03
#define MASK_ITC_SPR6_VECT21SPR  0x0C
#define MASK_ITC_SPR6_VECT22SPR  0x30
#define MASK_ITC_SPR6_VECT23SPR  0xC0

#define MASK_ITC_SPR7_VECT24SPR  0x03
#define MASK_ITC_SPR7_VECT25SPR  0x0C
#define MASK_ITC_SPR7_VECT26SPR  0x30
#define MASK_ITC_SPR7_VECT27SPR  0xC0

#define MASK_ITC_SPR8_VECT28SPR  0x03
#define MASK_ITC_SPR8_VECT29SPR  0x0C


/*-------------------------------------------------------------------------
 *      SWIM register definitions
 *-----------------------------------------------------------------------*/
/* SWIM control status register */
__IO_REG8    (SWIM_CSR,    0x7F80, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      DM register definitions
 *-----------------------------------------------------------------------*/
/* DM breakpoint 1 register extended byte */
__IO_REG8    (DM_BK1RE,    0x7F90, __READ_WRITE);
/* DM breakpoint 1 register high byte */
__IO_REG8    (DM_BK1RH,    0x7F91, __READ_WRITE);
/* DM breakpoint 1 register low byte */
__IO_REG8    (DM_BK1RL,    0x7F92, __READ_WRITE);
/* DM breakpoint 2 register extended byte */
__IO_REG8    (DM_BK2RE,    0x7F93, __READ_WRITE);
/* DM breakpoint 2 register high byte */
__IO_REG8    (DM_BK2RH,    0x7F94, __READ_WRITE);
/* DM breakpoint 2 register low byte */
__IO_REG8    (DM_BK2RL,    0x7F95, __READ_WRITE);
/* DM Debug module control register 1 */
__IO_REG8    (DM_CR1,      0x7F96, __READ_WRITE);
/* DM Debug module control register 2 */
__IO_REG8    (DM_CR2,      0x7F97, __READ_WRITE);
/* DM Debug module control/status register 1 */
__IO_REG8    (DM_CSR1,     0x7F98, __READ_WRITE);
/* DM Debug module control/status register 2 */
__IO_REG8    (DM_CSR2,     0x7F99, __READ_WRITE);
/* DM enable function register */
__IO_REG8    (DM_ENFCTR,   0x7F9A, __READ_WRITE);


/*-------------------------------------------------------------------------
 *      Interrupt vector numbers
 *
 *  Note: The vector numbers listed in ST's manuals for STM8 are offset
 *        by 2 compared to the vector numbers used by EWSTM8.
 *-----------------------------------------------------------------------*/
#define FLASH_EOP_vector                      3 /* IRQ No. in STM8 manual:  1 */
#define FLASH_WR_PG_DIS_vector                3 /* IRQ No. in STM8 manual:  1 */
#define DMA1_CH0_HT_vector                    4 /* IRQ No. in STM8 manual:  2 */
#define DMA1_CH0_TC_vector                    4 /* IRQ No. in STM8 manual:  2 */
#define DMA1_CH1_HT_vector                    4 /* IRQ No. in STM8 manual:  2 */
#define DMA1_CH1_TC_vector                    4 /* IRQ No. in STM8 manual:  2 */
#define DMA1_CH2_HT_vector                    5 /* IRQ No. in STM8 manual:  3 */
#define DMA1_CH2_TC_vector                    5 /* IRQ No. in STM8 manual:  3 */
#define DMA1_CH3_HT_vector                    5 /* IRQ No. in STM8 manual:  3 */
#define DMA1_CH3_TC_vector                    5 /* IRQ No. in STM8 manual:  3 */
#define RTC_ALARM_vector                      6 /* IRQ No. in STM8 manual:  4 */
#define RTC_WAKEUP_vector                     6 /* IRQ No. in STM8 manual:  4 */
#define EXTIE_vector                          7 /* IRQ No. in STM8 manual:  5 */
#define EXTIF_vector                          7 /* IRQ No. in STM8 manual:  5 */
#define EXTIPVD_vector                        7 /* IRQ No. in STM8 manual:  5 */
#define EXTIB_vector                          8 /* IRQ No. in STM8 manual:  6 */
#define EXTID_vector                          9 /* IRQ No. in STM8 manual:  7 */
#define EXTI0_vector                         10 /* IRQ No. in STM8 manual:  8 */
#define EXTI1_vector                         11 /* IRQ No. in STM8 manual:  9 */
#define EXTI2_vector                         12 /* IRQ No. in STM8 manual: 10 */
#define EXTI3_vector                         13 /* IRQ No. in STM8 manual: 11 */
#define EXTI4_vector                         14 /* IRQ No. in STM8 manual: 12 */
#define EXTI5_vector                         15 /* IRQ No. in STM8 manual: 13 */
#define EXTI6_vector                         16 /* IRQ No. in STM8 manual: 14 */
#define EXTI7_vector                         17 /* IRQ No. in STM8 manual: 15 */
#define CLK_CSS_vector                       19 /* IRQ No. in STM8 manual: 17 */
#define CLK_SWITCH_vector                    19 /* IRQ No. in STM8 manual: 17 */
#define TIM1_BIF_vector                      19 /* IRQ No. in STM8 manual: 17 */
#define ADC1_AWD_vector                      20 /* IRQ No. in STM8 manual: 18 */
#define ADC1_EOC_vector                      20 /* IRQ No. in STM8 manual: 18 */
#define ADC1_OVER_vector                     20 /* IRQ No. in STM8 manual: 18 */
#define COMP_EF1_vector                      20 /* IRQ No. in STM8 manual: 18 */
#define COMP_EF2_vector                      20 /* IRQ No. in STM8 manual: 18 */
#define TIM2_BIF_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_OVR_UIF_vector                  21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_TIF_vector                      21 /* IRQ No. in STM8 manual: 19 */
#define TIM2_CAPCOM_CC1IF_vector             22 /* IRQ No. in STM8 manual: 20 */
#define TIM2_CAPCOM_CC2IF_vector             22 /* IRQ No. in STM8 manual: 20 */
#define TIM3_BIF_vector                      23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_OVR_UIF_vector                  23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_TIF_vector                      23 /* IRQ No. in STM8 manual: 21 */
#define TIM3_CAPCOM_CC1IF_vector             24 /* IRQ No. in STM8 manual: 22 */
#define TIM3_CAPCOM_CC2IF_vector             24 /* IRQ No. in STM8 manual: 22 */
#define TIM1_OVR_UIF_vector                  25 /* IRQ No. in STM8 manual: 23 */
#define TIM1_TIF_vector                      25 /* IRQ No. in STM8 manual: 23 */
#define TIM1_CAPCOM_CC1IF_vector             26 /* IRQ No. in STM8 manual: 24 */
#define TIM1_CAPCOM_CC2IF_vector             26 /* IRQ No. in STM8 manual: 24 */
#define TIM1_CAPCOM_CC3IF_vector             26 /* IRQ No. in STM8 manual: 24 */
#define TIM1_CAPCOM_CC4IF_vector             26 /* IRQ No. in STM8 manual: 24 */
#define TIM1_CAPCOM_COMIF_vector             26 /* IRQ No. in STM8 manual: 24 */
#define TIM4_TIF_vector                      27 /* IRQ No. in STM8 manual: 25 */
#define TIM4_UIF_vector                      27 /* IRQ No. in STM8 manual: 25 */
#define SPI_MODF_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define SPI_OVR_vector                       28 /* IRQ No. in STM8 manual: 26 */
#define SPI_RXNE_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define SPI_TXE_vector                       28 /* IRQ No. in STM8 manual: 26 */
#define SPI_WKUP_vector                      28 /* IRQ No. in STM8 manual: 26 */
#define USART_T_TC_vector                    29 /* IRQ No. in STM8 manual: 27 */
#define USART_T_TXE_vector                   29 /* IRQ No. in STM8 manual: 27 */
#define USART_R_IDLE_vector                  30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_OR_vector                    30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_PE_vector                    30 /* IRQ No. in STM8 manual: 28 */
#define USART_R_RXNE_vector                  30 /* IRQ No. in STM8 manual: 28 */
#define I2C_ADD10_vector                     31 /* IRQ No. in STM8 manual: 29 */
#define I2C_ADDR_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_AF_vector                        31 /* IRQ No. in STM8 manual: 29 */
#define I2C_ARLO_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_BERR_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_BTF_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_OVR_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_RXNE_vector                      31 /* IRQ No. in STM8 manual: 29 */
#define I2C_SB_vector                        31 /* IRQ No. in STM8 manual: 29 */
#define I2C_STOPF_vector                     31 /* IRQ No. in STM8 manual: 29 */
#define I2C_TXE_vector                       31 /* IRQ No. in STM8 manual: 29 */
#define I2C_WUFH_vector                      31 /* IRQ No. in STM8 manual: 29 */

#ifdef __IAR_SYSTEMS_ICC__
#pragma language=restore
#endif

#endif    /* __IOSTM8L151K4_H__ */

/*----------------------------------------------
 *      End of file
 *--------------------------------------------*/

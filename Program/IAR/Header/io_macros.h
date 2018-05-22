/*-------------------------------------------------------------------------
 *      Common SFR macro declarations used for
 *      STM8 IAR C/C++ Compiler and Assembler.
 *
 *      Copyright 2012 IAR Systems AB.
 *
 *
 *-------------------------------------------------------------------------*/

#ifndef __IO_MACROS_H__
#define __IO_MACROS_H__

#pragma system_include

/*---------------------------------------------
 *          C/EC++ specific macros
 *--------------------------------------------*/

#ifdef __IAR_SYSTEMS_ICC__

/*---------------------------------------------
 *          I/O reg attributes
 *--------------------------------------------*/
#define __READ_WRITE
#ifdef __cplusplus
#define __READ          /* Not supported */
#else
#define __READ          const
#endif
#define __WRITE         /* Not supported */

/*---------------------------------------------
 * Define NAME as an I/O 8 bit reg
 * Access of 8 bit reg:  NAME
 *--------------------------------------------*/
#define __IO_REG8(NAME, ADDRESS, ATTRIBUTE)              \
                  __near __no_init volatile ATTRIBUTE unsigned char NAME @ ADDRESS;

/*---------------------------------------------
 * Define NAME as an I/O reg with bit access
 * Access of 8 bit reg:  NAME
 * Access of bit(s):     NAME_bit.noXX
 *--------------------------------------------*/
#define __IO_REG8_BIT(NAME, ADDRESS, ATTRIBUTE, BIT_STRUCT)       \
                      __near __no_init volatile ATTRIBUTE union   \
                        {                                         \
                          unsigned char NAME;                     \
                          BIT_STRUCT NAME ## _bit;                \
                        } @ ADDRESS;

#endif /* __IAR_SYSTEMS_ICC__ */

/*---------------------------------------------
 *          Assembler specific macros
 *--------------------------------------------*/

#ifdef __IAR_SYSTEMS_ASM__

/*---------------------------------------------
 *          I/O reg attributes (ignored)
 *--------------------------------------------*/
#define __READ_WRITE
#define __READ
#define __WRITE

/*---------------------------------------------
 *          Define NAME as an I/O reg
 *--------------------------------------------*/
#define __IO_REG8(NAME, ADDRESS, ATTRIBUTE)      \
                  NAME DEFINE ADDRESS

/*---------------------------------------------
 *          Define NAME as an I/O reg with bit access
 *--------------------------------------------*/
#define __IO_REG8_BIT(NAME, ADDRESS, ATTRIBUTE, BIT_STRUCT)  \
                      NAME DEFINE ADDRESS

#endif /* __IAR_SYSTEMS_ASM__ */

#endif /* __IO_MACROS_H__ */

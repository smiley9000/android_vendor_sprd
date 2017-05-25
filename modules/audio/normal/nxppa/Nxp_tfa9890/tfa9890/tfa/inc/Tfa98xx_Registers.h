#ifndef TFA98XX_REGISTERS_H
#define TFA98XX_REGISTERS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Tfa98xx_genregs.h"

/* some shorthands for readability */
#define TFA98XX_MTP        TFA98XX_KEY2PROTECTED_SPKR_CAL_MTP
#define TFA98XX_MTP_COPY    TFA98XX_MTP_CTRL_REG3
/* MTP bits */
/* one time calibration */
#define TFA98XX_MTP_MTPOTC  TFA98XX_MTP_SPKR_CAL_MTPOTC
/* one time calibration done */
#define TFA98XX_MTP_MTPEX   TFA98XX_MTP_SPKR_CAL_MTPEX
/* sample rates */
/* I2S_CONTROL bits */
#define TFA98XX_I2SCTRL_RATE_08000 (0<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_11025 (1<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_12000 (2<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_16000 (3<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_22050 (4<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_24000 (5<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_32000 (6<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_44100 (7<<TFA98XX_I2SREG_I2SSR_POS)
#define TFA98XX_I2SCTRL_RATE_48000 (8<<TFA98XX_I2SREG_I2SSR_POS)

/* TODO the POR values are for the tfa9890n1c2 */

#ifdef __cplusplus
}
#endif
#endif                /* TFA98XX_REGISTERS_H */

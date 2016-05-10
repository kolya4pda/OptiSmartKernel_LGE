/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6582. Copyright MediaTek Inc. (C) 2013.
 * Wed Nov 12 14:52:48 2014
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINTF_TRIGGER_RISING     			1    //High Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_FALLING    			2    //Low Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_HIGH      				4    //High Polarity and Level Sensitive
#define CUST_EINTF_TRIGGER_LOW       				8    //Low Polarity and Level Sensitive
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_CHR_STAT_NUM              0
#define CUST_EINT_CHR_STAT_DEBOUNCE_CN      0
#define CUST_EINT_CHR_STAT_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_CHR_STAT_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_PROXIMITY_NUM              1
#define CUST_EINT_PROXIMITY_DEBOUNCE_CN      0
#define CUST_EINT_PROXIMITY_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_PROXIMITY_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_TOUCH_PANEL_NUM              2
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSDC1_INS_NUM              3
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      1
#define CUST_EINT_MSDC1_INS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_ACCDET_NUM              4
#define CUST_EINT_ACCDET_DEBOUNCE_CN      1
#define CUST_EINT_ACCDET_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_IRQ_NFC_NUM              5
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN      0
#define CUST_EINT_IRQ_NFC_TYPE							CUST_EINTF_TRIGGER_RISING
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSE_NUM              6
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_SWTP_NUM              7
#define CUST_EINT_SWTP_DEBOUNCE_CN      256
#define CUST_EINT_SWTP_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_SWTP_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_HALL_1_NUM              10
#define CUST_EINT_HALL_1_DEBOUNCE_CN      0
#define CUST_EINT_HALL_1_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_HALL_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_GSE_1_NUM              11
#define CUST_EINT_GSE_1_DEBOUNCE_CN      0
#define CUST_EINT_GSE_1_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_GSE_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MT6323_PMIC_NUM              25
#define CUST_EINT_MT6323_PMIC_DEBOUNCE_CN      1
#define CUST_EINT_MT6323_PMIC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_MT6323_PMIC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H



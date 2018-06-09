/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/LabProject/codlab/mipsCPU/mipsCPU/biggerThan0.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};



static void Always_27_0(char *t0)
{
    char t11[8];
    char t12[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t3, 32, t2, 32);
    memset(t12, 0, 8);
    t4 = (t15 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t4) != 0)
        goto LAB24;

LAB25:    t13 = (t12 + 4);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB26;

LAB27:    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t24 = *((unsigned int *)t13);
    t25 = (t21 || t24);
    if (t25 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t13) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) > 0)
        goto LAB32;

LAB33:    memcpy(t11, t16, 8);

LAB34:    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t11, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greatereq(t15, 32, t14, 32, t13, 32);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB12:    t23 = (t12 + 4);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t23) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t12) > 0)
        goto LAB19;

LAB20:    memcpy(t11, t32, 8);

LAB21:    t33 = (t0 + 1608);
    xsi_vlogvar_assign_value(t33, t11, 0, 0, 1);
    goto LAB8;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB13:    t27 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t32 = ((char*)((ng3)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t11, 1, t27, 1, t32, 1);
    goto LAB21;

LAB19:    memcpy(t11, t27, 8);
    goto LAB21;

LAB22:    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB24:    t5 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB25;

LAB26:    t14 = ((char*)((ng2)));
    goto LAB27;

LAB28:    t16 = ((char*)((ng3)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t11, 1, t14, 1, t16, 1);
    goto LAB34;

LAB32:    memcpy(t11, t14, 8);
    goto LAB34;

}


extern void work_m_00000000002701187149_3700452405_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000002701187149_3700452405", "isim/test1_isim_beh.exe.sim/work/m_00000000002701187149_3700452405.didat");
	xsi_register_executes(pe);
}

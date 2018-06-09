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
static const char *ng0 = "F:/LabProject/codlab/mipsCPU/mipsCPU/storebh.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char t11[8];
    char t25[8];
    char t26[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    int t47;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    t5 = (t0 + 1528U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t9) = t18;
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t25, 0, 8);
    t2 = (t25 + 4);
    t5 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t25) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 65535U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 65535U);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t26, 0, 8);
    t6 = (t26 + 4);
    t9 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 16);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 16);
    *((unsigned int *)t6) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 65535U);
    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 65535U);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t26, 16, t25, 16);
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);

LAB16:    goto LAB13;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);

LAB17:    t3 = ((char*)((ng3)));
    t47 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t47 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB13;

LAB14:    xsi_set_current_line(33, ng0);
    t27 = (t0 + 1208U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 65535U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 65535U);
    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 65535U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 65535U);
    xsi_vlogtype_concat(t25, 32, 32, 2U, t36, 16, t26, 16);
    t46 = (t0 + 2088);
    xsi_vlogvar_assign_value(t46, t25, 0, 0, 32);
    goto LAB16;

LAB18:    xsi_set_current_line(38, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t25, 0, 8);
    t6 = (t25 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t25) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 255U);
    t10 = (t0 + 1208U);
    t12 = *((char **)t10);
    memset(t26, 0, 8);
    t10 = (t26 + 4);
    t19 = (t12 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (t20 >> 8);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 8);
    *((unsigned int *)t10) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 16777215U);
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 16777215U);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t26, 24, t25, 8);
    t27 = (t0 + 2088);
    xsi_vlogvar_assign_value(t27, t11, 0, 0, 32);
    goto LAB26;

LAB20:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t7 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t25) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t26, 0, 8);
    t9 = (t26 + 4);
    t12 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 0);
    *((unsigned int *)t9) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 255U);
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 255U);
    t19 = (t0 + 1208U);
    t27 = *((char **)t19);
    memset(t36, 0, 8);
    t19 = (t36 + 4);
    t28 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 16);
    *((unsigned int *)t36) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 16);
    *((unsigned int *)t19) = t34;
    t35 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t35 & 65535U);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & 65535U);
    xsi_vlogtype_concat(t11, 32, 32, 3U, t36, 16, t26, 8, t25, 8);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 32);
    goto LAB26;

LAB22:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t7 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t25) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 65535U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 65535U);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t26, 0, 8);
    t9 = (t26 + 4);
    t12 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 0);
    *((unsigned int *)t9) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 255U);
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 255U);
    t19 = (t0 + 1208U);
    t27 = *((char **)t19);
    memset(t36, 0, 8);
    t19 = (t36 + 4);
    t28 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 24);
    *((unsigned int *)t36) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 24);
    *((unsigned int *)t19) = t34;
    t35 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t35 & 255U);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & 255U);
    xsi_vlogtype_concat(t11, 32, 32, 3U, t36, 8, t26, 8, t25, 16);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 32);
    goto LAB26;

LAB24:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t25, 0, 8);
    t3 = (t25 + 4);
    t7 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t25) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t17 & 16777215U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 16777215U);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t26, 0, 8);
    t9 = (t26 + 4);
    t12 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t12);
    t23 = (t22 >> 0);
    *((unsigned int *)t9) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 255U);
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 255U);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t26, 8, t25, 24);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t11, 0, 0, 32);
    goto LAB26;

}


extern void work_m_00000000002120686110_0142531296_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002120686110_0142531296", "isim/test1_isim_beh.exe.sim/work/m_00000000002120686110_0142531296.didat");
	xsi_register_executes(pe);
}

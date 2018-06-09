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
static const char *ng0 = "F:/LabProject/codlab/mipsCPU/mipsCPU/halfword.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {16777215U, 0U};



static void Always_40_0(char *t0)
{
    char t4[8];
    char t12[8];
    char t26[8];
    char t27[8];
    char t40[8];
    char t41[8];
    char t49[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    t5 = (t0 + 1528U);
    t7 = *((char **)t5);
    t5 = (t0 + 1368U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 3, 3, 3U, t8, 1, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    t10 = (t12 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t10) = t19;
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t5 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t5);
    t17 = (t16 >> 0);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t18 & 65535U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 65535U);
    t6 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t6, 16, t26, 16);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t12, 0, 0, 32);

LAB20:    goto LAB17;

LAB9:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t6 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    t7 = (t12 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB23:    goto LAB17;

LAB11:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);

LAB24:    t3 = ((char*)((ng2)));
    t39 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t39 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t9 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t9 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB17;

LAB13:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);

LAB34:    t3 = ((char*)((ng2)));
    t39 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 2);
    if (t39 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t9 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t9 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t9 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t30 = (t29 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (t31 >> 16);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 16);
    *((unsigned int *)t28) = t34;
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 65535U);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 65535U);
    t37 = ((char*)((ng2)));
    xsi_vlogtype_concat(t26, 32, 32, 2U, t37, 16, t27, 16);
    t38 = (t0 + 2408);
    xsi_vlogvar_assign_value(t38, t26, 0, 0, 32);
    goto LAB20;

LAB21:    xsi_set_current_line(49, ng0);
    t8 = (t0 + 2008U);
    t10 = *((char **)t8);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB23;

LAB25:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t26, 0, 8);
    t6 = (t26 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 0);
    *((unsigned int *)t6) = t17;
    t18 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t18 & 255U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 255U);
    t10 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t10, 24, t26, 8);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 8);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 8);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t18 & 255U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 255U);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t8, 24, t26, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 16);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 16);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t18 & 255U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 255U);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t8, 24, t26, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB33;

LAB31:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 24);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 24);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t18 & 255U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 255U);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 32, 32, 2U, t8, 24, t26, 8);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 32);
    goto LAB33;

LAB35:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    memset(t27, 0, 8);
    t7 = (t27 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t7) = t19;
    memset(t26, 0, 8);
    t11 = (t27 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t27);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t11) != 0)
        goto LAB46;

LAB47:    t20 = (t26 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t20);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB48;

LAB49:    t45 = *((unsigned int *)t26);
    t46 = (~(t45));
    t47 = *((unsigned int *)t20);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t20) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t26) > 0)
        goto LAB54;

LAB55:    memcpy(t12, t49, 8);

LAB56:    t60 = (t0 + 2408);
    xsi_vlogvar_assign_value(t60, t12, 0, 0, 32);
    goto LAB43;

LAB37:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t27, 0, 8);
    t3 = (t27 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    memset(t26, 0, 8);
    t10 = (t27 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (~(t21));
    t23 = *((unsigned int *)t27);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t10) != 0)
        goto LAB59;

LAB60:    t13 = (t26 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t13);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB61;

LAB62:    t45 = *((unsigned int *)t26);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t13) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t26) > 0)
        goto LAB67;

LAB68:    memcpy(t12, t49, 8);

LAB69:    t59 = (t0 + 2408);
    xsi_vlogvar_assign_value(t59, t12, 0, 0, 32);
    goto LAB43;

LAB39:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t27, 0, 8);
    t3 = (t27 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 23);
    t16 = (t15 & 1);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 23);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    memset(t26, 0, 8);
    t10 = (t27 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (~(t21));
    t23 = *((unsigned int *)t27);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t10) != 0)
        goto LAB72;

LAB73:    t13 = (t26 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t13);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB74;

LAB75:    t45 = *((unsigned int *)t26);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t13) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t26) > 0)
        goto LAB80;

LAB81:    memcpy(t12, t49, 8);

LAB82:    t59 = (t0 + 2408);
    xsi_vlogvar_assign_value(t59, t12, 0, 0, 32);
    goto LAB43;

LAB41:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t27, 0, 8);
    t3 = (t27 + 4);
    t8 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t27) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    memset(t26, 0, 8);
    t10 = (t27 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (~(t21));
    t23 = *((unsigned int *)t27);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t10) != 0)
        goto LAB85;

LAB86:    t13 = (t26 + 4);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t13);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB87;

LAB88:    t45 = *((unsigned int *)t26);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t13) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t26) > 0)
        goto LAB93;

LAB94:    memcpy(t12, t49, 8);

LAB95:    t59 = (t0 + 2408);
    xsi_vlogvar_assign_value(t59, t12, 0, 0, 32);
    goto LAB43;

LAB44:    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB46:    t13 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB48:    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t41, 0, 8);
    t28 = (t41 + 4);
    t30 = (t29 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (t34 >> 0);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t30);
    t42 = (t36 >> 0);
    *((unsigned int *)t28) = t42;
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 & 255U);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t44 & 255U);
    t37 = ((char*)((ng7)));
    xsi_vlogtype_concat(t40, 32, 32, 2U, t37, 24, t41, 8);
    goto LAB49;

LAB50:    t38 = (t0 + 1048U);
    t51 = *((char **)t38);
    memset(t50, 0, 8);
    t38 = (t50 + 4);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 0);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t38) = t56;
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 255U);
    t58 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t58 & 255U);
    t59 = ((char*)((ng2)));
    xsi_vlogtype_concat(t49, 32, 32, 2U, t59, 24, t50, 8);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t12, 32, t40, 32, t49, 32);
    goto LAB56;

LAB54:    memcpy(t12, t40, 8);
    goto LAB56;

LAB57:    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB59:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB60;

LAB61:    t20 = (t0 + 1048U);
    t28 = *((char **)t20);
    memset(t41, 0, 8);
    t20 = (t41 + 4);
    t29 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 8);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t29);
    t42 = (t36 >> 8);
    *((unsigned int *)t20) = t42;
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 & 255U);
    t44 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t44 & 255U);
    t30 = ((char*)((ng7)));
    xsi_vlogtype_concat(t40, 32, 32, 2U, t30, 24, t41, 8);
    goto LAB62;

LAB63:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t50, 0, 8);
    t37 = (t50 + 4);
    t51 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = (t53 >> 8);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 8);
    *((unsigned int *)t37) = t56;
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 255U);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & 255U);
    t52 = ((char*)((ng2)));
    xsi_vlogtype_concat(t49, 32, 32, 2U, t52, 24, t50, 8);
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t12, 32, t40, 32, t49, 32);
    goto LAB69;

LAB67:    memcpy(t12, t40, 8);
    goto LAB69;

LAB70:    *((unsigned int *)t26) = 1;
    goto LAB73;

LAB72:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB73;

LAB74:    t20 = (t0 + 1048U);
    t28 = *((char **)t20);
    memset(t41, 0, 8);
    t20 = (t41 + 4);
    t29 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 16);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t29);
    t42 = (t36 >> 16);
    *((unsigned int *)t20) = t42;
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 & 255U);
    t44 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t44 & 255U);
    t30 = ((char*)((ng7)));
    xsi_vlogtype_concat(t40, 32, 32, 2U, t30, 24, t41, 8);
    goto LAB75;

LAB76:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t50, 0, 8);
    t37 = (t50 + 4);
    t51 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = (t53 >> 16);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 16);
    *((unsigned int *)t37) = t56;
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 255U);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & 255U);
    t52 = ((char*)((ng2)));
    xsi_vlogtype_concat(t49, 32, 32, 2U, t52, 24, t50, 8);
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t12, 32, t40, 32, t49, 32);
    goto LAB82;

LAB80:    memcpy(t12, t40, 8);
    goto LAB82;

LAB83:    *((unsigned int *)t26) = 1;
    goto LAB86;

LAB85:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB86;

LAB87:    t20 = (t0 + 1048U);
    t28 = *((char **)t20);
    memset(t41, 0, 8);
    t20 = (t41 + 4);
    t29 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 24);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t29);
    t42 = (t36 >> 24);
    *((unsigned int *)t20) = t42;
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 & 255U);
    t44 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t44 & 255U);
    t30 = ((char*)((ng7)));
    xsi_vlogtype_concat(t40, 32, 32, 2U, t30, 24, t41, 8);
    goto LAB88;

LAB89:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t50, 0, 8);
    t37 = (t50 + 4);
    t51 = (t38 + 4);
    t53 = *((unsigned int *)t38);
    t54 = (t53 >> 24);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 24);
    *((unsigned int *)t37) = t56;
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 255U);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & 255U);
    t52 = ((char*)((ng2)));
    xsi_vlogtype_concat(t49, 32, 32, 2U, t52, 24, t50, 8);
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t12, 32, t40, 32, t49, 32);
    goto LAB95;

LAB93:    memcpy(t12, t40, 8);
    goto LAB95;

}


extern void work_m_00000000000636135853_1994063915_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000000636135853_1994063915", "isim/test1_isim_beh.exe.sim/work/m_00000000000636135853_1994063915.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "F:/LabProject/codlab/lab06/modulesInlab05/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {1, 0};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {16U, 0U};
static unsigned int ng20[] = {17U, 0U};



static void Cont_52_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3496U);
    t3 = *((char **)t2);
    t2 = (t0 + 7448);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7320);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_52_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3656U);
    t3 = *((char **)t2);
    t2 = (t0 + 7512);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 7336);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_64_2(char *t0)
{
    char t8[8];
    char t9[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 6752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7352);
    *((int *)t2) = 1;
    t3 = (t0 + 6784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5336);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3976U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB43;

LAB44:
LAB37:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB45;

LAB9:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB11:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB13:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_and(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB15:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_or(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB17:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_bit_xor(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB19:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t5, 32, t7, 32);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    memcpy(t8, t9, 8);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t12 | t13);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t17 = (t0 + 5176);
    xsi_vlogvar_assign_value(t17, t8, 0, 0, 32);
    goto LAB45;

LAB21:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 4296U);
    t5 = *((char **)t4);
    t4 = (t0 + 4456U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB23:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 4296U);
    t5 = *((char **)t4);
    t4 = (t0 + 4456U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB25:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t5, 32, t7, 32);
    memset(t9, 0, 8);
    t4 = (t18 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t4) != 0)
        goto LAB48;

LAB49:    t17 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB50;

LAB51:    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t17) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t9) > 0)
        goto LAB56;

LAB57:    memcpy(t8, t26, 8);

LAB58:    t27 = (t0 + 5176);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 32);
    goto LAB45;

LAB27:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 4296U);
    t5 = *((char **)t4);
    t4 = (t0 + 4456U);
    t7 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB60;

LAB59:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB61;

LAB62:    memset(t9, 0, 8);
    t21 = (t18 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t21) != 0)
        goto LAB66;

LAB67:    t27 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t27);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB68;

LAB69:    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t27);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t27) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t9) > 0)
        goto LAB74;

LAB75:    memcpy(t8, t29, 8);

LAB76:    t30 = (t0 + 5176);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 32);
    goto LAB45;

LAB29:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3496U);
    t5 = *((char **)t4);
    t4 = (t0 + 3656U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB31:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 4296U);
    t5 = *((char **)t4);
    t4 = (t0 + 4456U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB33:    xsi_set_current_line(82, ng0);

LAB77:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t5, 32, t4, 32);
    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB45;

LAB35:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3656U);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t9 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 65535U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 65535U);
    xsi_vlogtype_concat(t8, 32, 32, 2U, t9, 16, t4, 16);
    t17 = (t0 + 5176);
    xsi_vlogvar_assign_value(t17, t8, 0, 0, 32);
    goto LAB45;

LAB39:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t0 + 3816U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_lshift(t8, 32, t5, 32, t7, 5);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB41:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t0 + 3816U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_rshift(t8, 32, t5, 32, t7, 5);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB43:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t0 + 3816U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_signed_arith_rshift(t8, 32, t5, 32, t7, 5);
    t4 = (t0 + 5176);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB45;

LAB46:    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB48:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB49;

LAB50:    t21 = ((char*)((ng12)));
    goto LAB51;

LAB52:    t26 = ((char*)((ng1)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t8, 32, t21, 32, t26, 32);
    goto LAB58;

LAB56:    memcpy(t8, t21, 8);
    goto LAB58;

LAB60:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t18) = 1;
    goto LAB62;

LAB64:    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB66:    t26 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB67;

LAB68:    t28 = ((char*)((ng12)));
    goto LAB69;

LAB70:    t29 = ((char*)((ng1)));
    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t8, 32, t28, 32, t29, 32);
    goto LAB76;

LAB74:    memcpy(t8, t28, 8);
    goto LAB76;

LAB78:    xsi_set_current_line(83, ng0);
    t10 = ((char*)((ng12)));
    t17 = (t0 + 5336);
    xsi_vlogvar_assign_value(t17, t10, 0, 0, 1);
    goto LAB80;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 7000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4776U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 1, t4, 1);
    t2 = (t0 + 7576);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t8, 0, 8);
    t9 = 1U;
    t10 = t9;
    t11 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t9 = (t9 & t12);
    t13 = *((unsigned int *)t11);
    t10 = (t10 & t13);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 | t9);
    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 | t10);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t17 = (t0 + 7368);
    *((int *)t17) = 1;

LAB1:    return;
}


extern void work_m_00000000001892793090_0886308060_init()
{
	static char *pe[] = {(void *)Cont_52_0,(void *)Cont_52_1,(void *)Always_64_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001892793090_0886308060", "isim/test1_isim_beh.exe.sim/work/m_00000000001892793090_0886308060.didat");
	xsi_register_executes(pe);
}

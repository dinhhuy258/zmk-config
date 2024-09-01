#pragma once

#include "zmk-helpers/key-labels/42.h"

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS LH2 LH1 LH0 RH0 RH1

#define XXX &none
#define KP(k) &kp k
#define LGK(k) &kp LG(k)
#define LSK(k) &kp LS(k)
#define LCK(k) &kp LC(k)
#define HYPER(k) &kp LC(LS(LA(LG(k))))

#define NAV_ESC &lt NAV ESC
#define MOU_SPACE &lt MOU SPACE
#define NUM_ENTER &lt NUM ENTER
#define SYM_TAB &lt SYM TAB

#define BRI_DOWN &kp C_BRI_DN
#define BRI_UP &kp C_BRI_UP

#define VOL_UP &kp C_VOL_UP
#define VOL_DOWN &kp C_VOL_DN
#define VOL_MUTE &kp C_MUTE

#define MAC_UNDO &kp LG(Z)
#define MAC_REDO &kp LG(LS(Z))
#define MAC_PASTE &kp LG(V)
#define MAC_COPY &kp LG(C)
#define MAC_CUT &kp LG(X)

#define BT_C &bt BT_CLR
#define BT_CA &bt BT_CLR_ALL
#define BT_S(n) &bt BT_SEL(n)
#define BT_N &bt BT_NXT
#define BT_P &bt BT_PRV

#pragma once

#define XXX &none
#define KP(k) &kp k
#define LGK(k) &kp LG(k)
#define LSK(k) &kp LS(k)
#define LCK(k) &kp LC(k)
#define HYPER(k) &kp LC(LS(LA(LG(k))))

#define HRML(k1, k2, k3, k4, k5)                                               \
  &ht LGUI k1 &ht LALT k2 &ht LCTRL k3 &ht LSHFT k4 &ht LC(LS(LA(LGUI))) k5
#define HRMR(k1, k2, k3, k4, k5)                                               \
  &ht LC(LS(LA(LGUI))) k1 &ht LSHFT k2 &ht LCTRL k3 &ht LALT k4 &ht LGUI k5

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

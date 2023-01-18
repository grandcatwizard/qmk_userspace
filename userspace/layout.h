#pragma once
/* 
 * custom keycodes
 * -----------------------------------------------------------------------------------
 * Because the use of SAFE_RANGE to enumerate custom keycodes is not supported inside config.h, we manually count up from a high number
 * read more about the issue here: https://filterpaper.github.io/qmk/userspace#limitations 
 * -----------------------------------------------------------------------------------
 * keycode list in hex found at the link below
 * https://github.com/qmk/qmk_firmware/blob/master/quantum/keycodes.h
 */
#define C_TOGGLE 			0xff00

// Tap Dance declarations
#define TD_TAB 				0
#define TD_PAR 				1
#define TD_TILD 			2

// Layers
#define _BASE 				0
#define _GAME 				1
#define _COLE 				2
#define _NAV 				3
#define _NUM 				4
#define _ADJ 				5


// Layer keys
#define L_NAV           	MO(_NAV)
#define L_NUM           	MO(_NUM)

#define DL_BASE           	DF(_BASE)
#define DL_GAME           	DF(_GAME)

//custom macros
#define C_LDESK 			LGUI(LCTL(KC_LEFT))
#define C_RDESK 			LGUI(LCTL(KC_RIGHT))
#define MOD_SPC 			LCTL_T(KC_SPC)

#define C_LSFT				LSFT_T(KC_Z)
#define C_RSFT				LSFT_T(KC_SLSH)

#define HRM_A				LSFT_T(KC_A)


#define BASE \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,						   KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	HRM_A   ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,						   KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                          KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,C_RSFT  ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   KC_LGUI ,L_NAV   ,MOD_SPC ,        KC_BSPC ,L_NUM   , KC_ENT
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \

#define GAME \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	KC_ESC  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,						   XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,L_NAV   ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_LSFT ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,						   XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,L_NUM   ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_LCTL ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   XXXXXXX ,KC_TAB  ,KC_SPC  ,        XXXXXXX ,XXXXXXX ,XXXXXXX
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \

#define COLE \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	KC_Q    ,KC_W    ,KC_F    ,KC_P    ,KC_B    ,						   KC_J    ,KC_L    ,KC_U    ,KC_Y    ,KC_SCLN ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_A    ,KC_R    ,KC_S    ,KC_T    ,KC_G    ,						   KC_M    ,KC_N    ,KC_E    ,KC_I    ,KC_O    ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_Z    ,KC_X    ,KC_C    ,KC_D    ,KC_V    ,                          KC_K    ,KC_H    ,KC_COMM ,KC_DOT  ,C_RSFT  ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   KC_LGUI ,L_NAV   ,MOD_SPC ,        KC_BSPC ,L_NUM   , KC_ENT
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \

#define NAV \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	XXXXXXX ,KC_HOME ,KC_UP   ,KC_END  ,KC_PGUP ,						   KC_0    ,KC_1    ,KC_2    ,KC_3    ,XXXXXXX ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_LSFT ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_PGDN ,						   KC_EQL  ,KC_4    ,KC_5    ,KC_6    ,XXXXXXX ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	XXXXXXX ,KC_MPRV ,KC_VOLD ,KC_VOLU ,KC_MNXT ,                          KC_PLUS ,KC_7    ,KC_8    ,KC_9    ,XXXXXXX ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   KC_MPLY ,_______ ,_______ ,		  _______ ,_______ , _______
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \

//KC_CIRC KC_AMPR KC_ASTR
#define NUM \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	KC_GRV  ,KC_EXLM ,KC_LPRN ,KC_RPRN ,KC_MINS ,						   XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_AT   ,KC_HASH ,KC_LCBR ,KC_RCBR ,KC_UNDS ,						   XXXXXXX ,KC_F5   ,KC_F6   ,KC_F7   ,KC_F8   ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	KC_DLR  ,KC_PERC ,KC_LBRC ,KC_RBRC ,KC_BACKSLASH,                      XXXXXXX ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12  ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   _______ ,_______ ,KC_LSFT ,		  _______ ,_______ , _______
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \

#define ADJ \
/* ┌────────┬────────┬────────┬────────┬────────┐						  ┌────────┬────────┬────────┬────────┬────────┐ */ \
	QK_BOOT ,EE_CLR  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,						   DL_BASE ,XXXXXXX ,XXXXXXX ,XXXXXXX ,QK_BOOT ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	RGB_TOG ,RGB_HUI ,RGB_SAI ,RGB_VAI ,RGB_SPI ,						   DL_GAME ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,    \
/* ├────────┼────────┼────────┼────────┼────────┤						  ├────────┼────────┼────────┼────────┼────────┤ */ \
	RGB_MOD ,RGB_HUD ,RGB_SAD ,RGB_VAD ,RGB_SPD ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,    \
/* └────────┴────────┴────────┼────────┼────────┼────────┐		 ┌────────┼────────┴────────┼────────┴────────┴────────┘ */ \
							   XXXXXXX ,XXXXXXX ,XXXXXXX ,		  XXXXXXX ,XXXXXXX , XXXXXXX
/*							  └────────┴────────┴────────┘		 └────────┴────────┴────────┘ 							 */ \


// Layout Aliases
#define LAYOUT_mini36_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

#define LAYOUT_planck_wrapper(...) LAYOUT_planck_2x2u(__VA_ARGS__)

// Convert 3x5_3 to 4x12
#define CONV_PLANCK(k) SPLIT_36_TO_PLANCK(k)
#define SPLIT_36_TO_PLANCK( \
	/* ┌────┬────┬────┬────┬────┐				 ┌────┬────┬────┬────┬────┐ */ \
		l01 ,l02 ,l03 ,l04 ,l05 ,				  r01 ,r02 ,r03 ,r04 ,r05 ,    \
	/* ├────┼────┼────┼────┼────┤				 ├────┼────┼────┼────┼────┤ */ \
		l06 ,l07 ,l08 ,l09 ,l10 ,				  r06 ,r07 ,r08 ,r09 ,r10 ,    \
	/* ├────┼────┼────┼────┼────┤				 ├────┼────┼────┼────┼────┤ */ \
		l11 ,l12 ,l13 ,l14 ,l15,             	  r11 ,r12 ,r13 ,r14 ,r15 ,    \
	/* └────┴────┴────┼────┼────┼────┐		┌────┼────┴────┼────┴────┴────┘ */ \
					   l16 ,l17 ,l18 ,		 r16 ,r17 , r18                    \
	/*				  └────┴────┴────┘		└────┴────┴────┘ 				*/ \
	) \
/* ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐ */ \
	KC_ESC  ,  l01   ,  l02   ,  l03   ,  l04   ,  l05   ,  r01   ,  r02   ,  r03   ,  r04   ,  r05   ,KC_BSPC ,    \
/* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
	KC_TAB  ,  l06   ,  l07   ,  l08   ,  l09   ,  l10   ,  r06   ,  r07   ,  r08   ,  r09   ,  r10   ,KC_QUOT ,    \
/* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
	KC_LSFT ,  l11   ,  l12   ,  l13   ,  l14   ,  l15   ,  r11   ,  r12   ,  r13   ,  r14   ,  r15   ,KC_ENT  ,    \
/* ├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤ */ \
	KC_LCTL ,KC_LALT ,KC_LGUI ,  l17   ,       l18       ,       r16       ,   r17  ,C_LDESK ,C_RDESK ,KC_ENT       \
/* └────────┴────────┴────────┴────────┴─────────────────┴─────────────────┴────────┴────────┴────────┴────────┘ */ 



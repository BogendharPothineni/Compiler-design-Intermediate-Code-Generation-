#include <stdio.h>

int main(){
	int a, b, c, t, T_0, T_1, T_2, T_3, T_4;
	L_1: a = 1;	//[':=', '1', '_', 'a']
	L_2: T_0 = 1000 - 500;	//['-', '1000', '500', 'T_0']
	L_3: T_1 = T_0 * a;	//['*', 'T_0', 'a', 'T_1']
	L_4: T_2 = T_1 / 500;	//['/', 'T_1', '500', 'T_2']
	L_5: t = T_2;	//[':=', 'T_2', '_', 't']
	L_6: T_3 = a + t;	//['+', 'a', 't', 'T_3']
	L_7: b = T_3;	//[':=', 'T_3', '_', 'b']
	L_8: T_4 = a + b;	//['+', 'a', 'b', 'T_4']
	L_9: if(T_4 <= 1) goto L_11;	//['<=', 'T_4', '1', '11']
	L_10: goto L_15;	//['jump', '_', '_', '15']
	L_11: if(b < 5) goto L_13;	//['<', 'b', '5', '13']
	L_12: goto L_15;	//['jump', '_', '_', '15']
	L_13: if(a > 5) goto L_15;	//['>', 'a', '5', '15']
	L_14: goto L_35;	//['jump', '_', '_', '35']
	L_15: if(t = 1) goto L_17;	//['=', 't', '1', '17']
	L_16: goto L_19;	//['jump', '_', '_', '19']
	L_17: c = 2;	//[':=', '2', '_', 'c']
	L_18: goto L_19;	//['jump', '_', '_', '19']
	L_19: if(t = 2) goto L_21;	//['=', 't', '2', '21']
	L_20: goto L_23;	//['jump', '_', '_', '23']
	L_21: c = 4;	//[':=', '4', '_', 'c']
	L_22: goto L_24;	//['jump', '_', '_', '24']
	L_23: c = 0;	//[':=', '0', '_', 'c']
	L_24: if(a < 1) goto L_26;	//['<', 'a', '1', '26']
	L_25: goto L_34;	//['jump', '_', '_', '34']
	L_26: if(a = 2) goto L_28;	//['=', 'a', '2', '28']
	L_27: goto L_33;	//['jump', '_', '_', '33']
	L_28: if(b = 1) goto L_30;	//['=', 'b', '1', '30']
	L_29: goto L_32;	//['jump', '_', '_', '32']
	L_30: c = 2;	//[':=', '2', '_', 'c']
	L_31: goto L_28;	//['jump', '_', '_', '28']
	L_32: goto L_33;	//['jump', '_', '_', '33']
	L_33: goto L_24;	//['jump', '_', '_', '24']
	L_34: goto L_8;	//['jump', '_', '_', '8']
	L_35: return 0;	//['halt', '_', '_', '_']
}
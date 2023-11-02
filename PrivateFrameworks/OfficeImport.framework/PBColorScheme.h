
@interface PBColorScheme : NSObject

+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int (**x7)(); struct CsColour { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned short x_8_1_3; unsigned short x_8_1_4; } x8; struct CsColour { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; } x9; struct CsColour { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; } x10; struct CsColour { unsigned short x_11_1_1; unsigned short x_11_1_2; unsigned short x_11_1_3; unsigned short x_11_1_4; } x11; struct CsColour { unsigned short x_12_1_1; unsigned short x_12_1_2; unsigned short x_12_1_3; unsigned short x_12_1_4; } x12; struct CsColour { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned short x_13_1_3; unsigned short x_13_1_4; } x13; struct CsColour { unsigned short x_14_1_1; unsigned short x_14_1_2; unsigned short x_14_1_3; unsigned short x_14_1_4; } x14; }*)arg2 atIndex:(int)arg3 inScheme:(id)arg4;
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int (**x7)(); struct CsColour { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned short x_8_1_3; unsigned short x_8_1_4; } x8; struct CsColour { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; } x9; struct CsColour { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; } x10; struct CsColour { unsigned short x_11_1_1; unsigned short x_11_1_2; unsigned short x_11_1_3; unsigned short x_11_1_4; } x11; struct CsColour { unsigned short x_12_1_1; unsigned short x_12_1_2; unsigned short x_12_1_3; unsigned short x_12_1_4; } x12; struct CsColour { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned short x_13_1_3; unsigned short x_13_1_4; } x13; struct CsColour { unsigned short x_14_1_1; unsigned short x_14_1_2; unsigned short x_14_1_3; unsigned short x_14_1_4; } x14; }*)arg2 colorTransform:(int (*)arg3 atIndex:(int)arg4 inScheme:(id)arg5;
+ (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1;
+ (void)readFromColorScheme:(struct PptColorSchemeAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int (**x7)(); struct CsColour { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned short x_8_1_3; unsigned short x_8_1_4; } x8; struct CsColour { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; } x9; struct CsColour { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; } x10; struct CsColour { unsigned short x_11_1_1; unsigned short x_11_1_2; unsigned short x_11_1_3; unsigned short x_11_1_4; } x11; struct CsColour { unsigned short x_12_1_1; unsigned short x_12_1_2; unsigned short x_12_1_3; unsigned short x_12_1_4; } x12; struct CsColour { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned short x_13_1_3; unsigned short x_13_1_4; } x13; struct CsColour { unsigned short x_14_1_1; unsigned short x_14_1_2; unsigned short x_14_1_3; unsigned short x_14_1_4; } x14; }*)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;

@end
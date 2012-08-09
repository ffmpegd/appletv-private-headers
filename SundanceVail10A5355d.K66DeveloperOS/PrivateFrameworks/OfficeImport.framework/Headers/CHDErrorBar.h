/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDData, CHDChart;

@interface CHDErrorBar : NSObject {
	CHDChart *mChart;	// 4 = 0x4
	double mValue;	// 8 = 0x8
	int mType;	// 16 = 0x10
	int mValueType;	// 20 = 0x14
	int mDirection;	// 24 = 0x18
	bool mNoEndCap;	// 28 = 0x1c
	CHDData *mMinusValues;	// 32 = 0x20
	CHDData *mPlusValues;	// 36 = 0x24
	OADGraphicProperties *mGraphicProperties;	// 40 = 0x28
}
@property(assign) int direction;	// G=0x31d56211; S=0x31d55f11; converted property
@property(retain) id graphicProperties;	// G=0x31d76e29; S=0x31d56091; converted property
@property(retain) id minusValues;	// G=0x31d56221; S=0x31d56241; converted property
@property(assign, getter=isNoEndCap) bool noEndCap;	// G=0x31d76e15; S=0x31d55f31; converted property
@property(retain) id plusValues;	// G=0x31d56231; S=0x31d55f61; converted property
@property(assign) int type;	// G=0x31d55f51; S=0x31d55f01; converted property
@property(assign) double value;	// G=0x31d56451; S=0x31d76e01; converted property
@property(assign) int valueType;	// G=0x31d55f41; S=0x31d55f21; converted property
+ (id)errorBarWithChart:(id)chart;	// 0x31d55e15
- (id)initWithChart:(id)chart;	// 0x31d55e61
- (void)dealloc;	// 0x31d56469
// converted property getter: - (int)direction;	// 0x31d56211
// converted property getter: - (id)graphicProperties;	// 0x31d76e29
// converted property getter: - (bool)isNoEndCap;	// 0x31d76e15
// converted property getter: - (id)minusValues;	// 0x31d56221
// converted property getter: - (id)plusValues;	// 0x31d56231
// converted property setter: - (void)setDirection:(int)direction;	// 0x31d55f11
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31d56091
// converted property setter: - (void)setMinusValues:(id)values;	// 0x31d56241
// converted property setter: - (void)setNoEndCap:(bool)cap;	// 0x31d55f31
// converted property setter: - (void)setPlusValues:(id)values;	// 0x31d55f61
// converted property setter: - (void)setType:(int)type;	// 0x31d55f01
// converted property setter: - (void)setValue:(double)value;	// 0x31d76e01
// converted property setter: - (void)setValueType:(int)type;	// 0x31d55f21
// converted property getter: - (int)type;	// 0x31d55f51
// converted property getter: - (double)value;	// 0x31d56451
// converted property getter: - (int)valueType;	// 0x31d55f41
@end

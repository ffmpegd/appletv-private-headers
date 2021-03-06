/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis {
@private
	bool mAutomatic;	// 128 = 0x80
	double mMajorUnitValue;	// 132 = 0x84
	double mMinorUnitValue;	// 140 = 0x8c
	int mMinorTimeUnit;	// 148 = 0x94
	int mMajorTimeUnit;	// 152 = 0x98
	int mBaseTimeUnit;	// 156 = 0x9c
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x32a82501; S=0x32a17fed; converted property
@property(assign) int baseTimeUnit;	// G=0x32a82561; S=0x32a180c5; converted property
@property(assign) int majorTimeUnit;	// G=0x32a82541; S=0x32a180a5; converted property
@property(assign) double majorUnitValue;	// G=0x32a82511; S=0x32a267c9; converted property
@property(assign) int minorTimeUnit;	// G=0x32a82551; S=0x32a180b5; converted property
@property(assign) double minorUnitValue;	// G=0x32a82529; S=0x32a267e5; converted property
- (id)initWithResources:(id)resources;	// 0x32a17f35
// converted property getter: - (int)baseTimeUnit;	// 0x32a82561
// converted property getter: - (bool)isAutomatic;	// 0x32a82501
- (bool)isDate;	// 0x32a824fd
// converted property getter: - (int)majorTimeUnit;	// 0x32a82541
// converted property getter: - (double)majorUnitValue;	// 0x32a82511
// converted property getter: - (int)minorTimeUnit;	// 0x32a82551
// converted property getter: - (double)minorUnitValue;	// 0x32a82529
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x32a17fed
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x32a180c5
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x32a180a5
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x32a267c9
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x32a180b5
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x32a267e5
@end


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
@property(assign, getter=isAutomatic) bool automatic;	// G=0x345d9501; S=0x3456efed; converted property
@property(assign) int baseTimeUnit;	// G=0x345d9561; S=0x3456f0c5; converted property
@property(assign) int majorTimeUnit;	// G=0x345d9541; S=0x3456f0a5; converted property
@property(assign) double majorUnitValue;	// G=0x345d9511; S=0x3457d7c9; converted property
@property(assign) int minorTimeUnit;	// G=0x345d9551; S=0x3456f0b5; converted property
@property(assign) double minorUnitValue;	// G=0x345d9529; S=0x3457d7e5; converted property
- (id)initWithResources:(id)resources;	// 0x3456ef35
// converted property getter: - (int)baseTimeUnit;	// 0x345d9561
// converted property getter: - (bool)isAutomatic;	// 0x345d9501
- (bool)isDate;	// 0x345d94fd
// converted property getter: - (int)majorTimeUnit;	// 0x345d9541
// converted property getter: - (double)majorUnitValue;	// 0x345d9511
// converted property getter: - (int)minorTimeUnit;	// 0x345d9551
// converted property getter: - (double)minorUnitValue;	// 0x345d9529
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x3456efed
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x3456f0c5
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x3456f0a5
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x3457d7c9
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x3456f0b5
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x3457d7e5
@end

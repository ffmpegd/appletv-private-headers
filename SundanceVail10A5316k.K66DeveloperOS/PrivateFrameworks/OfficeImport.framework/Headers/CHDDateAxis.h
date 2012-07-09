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
@property(assign, getter=isAutomatic) bool automatic;	// G=0x311f72dd; S=0x311a3945; converted property
@property(assign) int baseTimeUnit;	// G=0x311f7341; S=0x311a3a1d; converted property
@property(assign) int majorTimeUnit;	// G=0x311f7321; S=0x311a39fd; converted property
@property(assign) double majorUnitValue;	// G=0x311f72f1; S=0x311cfdb5; converted property
@property(assign) int minorTimeUnit;	// G=0x311f7331; S=0x311a3a0d; converted property
@property(assign) double minorUnitValue;	// G=0x311f7309; S=0x311cfdc9; converted property
- (id)initWithResources:(id)resources;	// 0x311a389d
// converted property getter: - (int)baseTimeUnit;	// 0x311f7341
// converted property getter: - (bool)isAutomatic;	// 0x311f72dd
- (bool)isDate;	// 0x311f72d9
// converted property getter: - (int)majorTimeUnit;	// 0x311f7321
// converted property getter: - (double)majorUnitValue;	// 0x311f72f1
// converted property getter: - (int)minorTimeUnit;	// 0x311f7331
// converted property getter: - (double)minorUnitValue;	// 0x311f7309
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x311a3945
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x311a3a1d
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x311a39fd
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x311cfdb5
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x311a3a0d
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x311cfdc9
@end

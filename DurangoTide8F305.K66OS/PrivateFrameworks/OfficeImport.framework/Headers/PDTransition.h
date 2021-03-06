/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class PDTransitionOptions;

__attribute__((visibility("hidden")))
@interface PDTransition : OADProperties {
@private
	BOOL mHasType;	// 12 = 0xc
	int mType;	// 16 = 0x10
	BOOL mHasSpeed;	// 20 = 0x14
	int mSpeed;	// 24 = 0x18
	BOOL mHasAdvanceOnClick;	// 28 = 0x1c
	BOOL mIsAdvanceOnClick;	// 29 = 0x1d
	BOOL mHasAdvanceAfterTime;	// 30 = 0x1e
	int mAdvanceAfterTime;	// 32 = 0x20
	PDTransitionOptions *mOptions;	// 36 = 0x24
}
@property(assign) int advanceAfterTime;	// G=0x345ce6c9; S=0x3444c4a1; converted property
@property(assign) BOOL isAdvanceOnClick;	// G=0x345ce789; S=0x3444c485; converted property
@property(retain) id options;	// G=0x345ce669; S=0x3444c7a1; converted property
@property(assign) int speed;	// G=0x345ce729; S=0x3444c469; converted property
@property(assign) int type;	// G=0x34538251; S=0x3444c549; converted property
- (id)init;	// 0x3444c42d
// converted property getter: - (int)advanceAfterTime;	// 0x345ce6c9
- (void)dealloc;	// 0x3445de65
- (BOOL)hasAdvanceAfterTime;	// 0x345ce6f5
- (BOOL)hasIsAdvanceOnClick;	// 0x345ce7b5
- (BOOL)hasSpeed;	// 0x345ce755
- (BOOL)hasTransitionOptions;	// 0x345ce695
- (BOOL)hasType;	// 0x34533055
// converted property getter: - (BOOL)isAdvanceOnClick;	// 0x345ce789
// converted property getter: - (id)options;	// 0x345ce669
// converted property setter: - (void)setAdvanceAfterTime:(int)time;	// 0x3444c4a1
// converted property setter: - (void)setIsAdvanceOnClick:(BOOL)click;	// 0x3444c485
// converted property setter: - (void)setOptions:(id)options;	// 0x3444c7a1
// converted property setter: - (void)setSpeed:(int)speed;	// 0x3444c469
// converted property setter: - (void)setType:(int)type;	// 0x3444c549
// converted property getter: - (int)speed;	// 0x345ce729
// converted property getter: - (int)type;	// 0x34538251
@end


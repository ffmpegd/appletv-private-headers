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
@property(assign) int advanceAfterTime;	// G=0x34d9a031; S=0x34cc76e5; converted property
@property(assign) BOOL isAdvanceOnClick;	// G=0x34d9a101; S=0x34cc76c1; converted property
@property(retain) id options;	// G=0x34d99fc9; S=0x34cc7a69; converted property
@property(assign) int speed;	// G=0x34d9a099; S=0x34cc769d; converted property
@property(assign) int type;	// G=0x34d4f505; S=0x34cc7791; converted property
- (id)init;	// 0x34cc765d
// converted property getter: - (int)advanceAfterTime;	// 0x34d9a031
- (void)dealloc;	// 0x34ccc1f9
- (BOOL)hasAdvanceAfterTime;	// 0x34d9a061
- (BOOL)hasIsAdvanceOnClick;	// 0x34d9a131
- (BOOL)hasSpeed;	// 0x34d9a0c9
- (BOOL)hasTransitionOptions;	// 0x34d99ff9
- (BOOL)hasType;	// 0x34d39e11
// converted property getter: - (BOOL)isAdvanceOnClick;	// 0x34d9a101
// converted property getter: - (id)options;	// 0x34d99fc9
// converted property setter: - (void)setAdvanceAfterTime:(int)time;	// 0x34cc76e5
// converted property setter: - (void)setIsAdvanceOnClick:(BOOL)click;	// 0x34cc76c1
// converted property setter: - (void)setOptions:(id)options;	// 0x34cc7a69
// converted property setter: - (void)setSpeed:(int)speed;	// 0x34cc769d
// converted property setter: - (void)setType:(int)type;	// 0x34cc7791
// converted property getter: - (int)speed;	// 0x34d9a099
// converted property getter: - (int)type;	// 0x34d4f505
@end


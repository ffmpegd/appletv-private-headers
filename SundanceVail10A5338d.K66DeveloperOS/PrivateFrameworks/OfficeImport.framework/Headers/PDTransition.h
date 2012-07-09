/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class PDTransitionOptions;

@interface PDTransition : OADProperties {
	BOOL mHasType;	// 9 = 0x9
	int mType;	// 12 = 0xc
	BOOL mHasSpeed;	// 16 = 0x10
	int mSpeed;	// 20 = 0x14
	BOOL mHasAdvanceOnClick;	// 24 = 0x18
	BOOL mIsAdvanceOnClick;	// 25 = 0x19
	BOOL mHasAdvanceAfterTime;	// 26 = 0x1a
	int mAdvanceAfterTime;	// 28 = 0x1c
	PDTransitionOptions *mOptions;	// 32 = 0x20
}
@property(assign) int advanceAfterTime;	// G=0x33bdb111; S=0x33a92eb1; converted property
@property(assign) BOOL isAdvanceOnClick;	// G=0x33bdb049; S=0x33ae04b9; converted property
@property(retain) id options;	// G=0x33bdb175; S=0x33a92ed5; converted property
@property(assign) int speed;	// G=0x33bdb0ad; S=0x33ae0495; converted property
@property(assign) int type;	// G=0x33ae5029; S=0x33ae0565; converted property
- (id)init;	// 0x33a92615
// converted property getter: - (int)advanceAfterTime;	// 0x33bdb111
- (void)dealloc;	// 0x33a971c5
- (BOOL)hasAdvanceAfterTime;	// 0x33bdb0dd
- (BOOL)hasIsAdvanceOnClick;	// 0x33bdb015
- (BOOL)hasSpeed;	// 0x33bdb079
- (BOOL)hasTransitionOptions;	// 0x33bdb141
- (BOOL)hasType;	// 0x33a92e7d
// converted property getter: - (BOOL)isAdvanceOnClick;	// 0x33bdb049
// converted property getter: - (id)options;	// 0x33bdb175
// converted property setter: - (void)setAdvanceAfterTime:(int)time;	// 0x33a92eb1
// converted property setter: - (void)setIsAdvanceOnClick:(BOOL)click;	// 0x33ae04b9
// converted property setter: - (void)setOptions:(id)options;	// 0x33a92ed5
// converted property setter: - (void)setSpeed:(int)speed;	// 0x33ae0495
// converted property setter: - (void)setType:(int)type;	// 0x33ae0565
// converted property getter: - (int)speed;	// 0x33bdb0ad
// converted property getter: - (int)type;	// 0x33ae5029
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPActionSupport.h"
#import "MPAction.h"

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {
	NSMutableArray *_actions;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *actions;	// G=0x33284a8d; converted property
+ (id)actionGroup;	// 0x332847a1
- (id)init;	// 0x332847e5
- (id)initWithCoder:(id)coder;	// 0x33284849
// converted property getter: - (id)actions;	// 0x33284a8d
- (void)addAction:(id)action;	// 0x33284a9d
- (void)addActions:(id)actions;	// 0x33284b39
- (void)configureAction:(id)action atIndex:(int)index;	// 0x33284ef9
- (void)configureTarget;	// 0x33285239
- (void)copyActions:(id)actions;	// 0x33284e15
- (id)copyWithZone:(NSZone *)zone;	// 0x33284a15
- (void)dealloc;	// 0x3328496d
- (void)encodeWithCoder:(id)coder;	// 0x332849b9
- (void)insertAction:(id)action atIndex:(int)index;	// 0x33284af9
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x33284b79
- (unsigned)numberOfActions;	// 0x33284a6d
- (void)removeActionsAtIndices:(id)indices;	// 0x33284cc5
- (void)removeAllActions;	// 0x33284db5
- (void)setAction:(id)action;	// 0x33285315
@end


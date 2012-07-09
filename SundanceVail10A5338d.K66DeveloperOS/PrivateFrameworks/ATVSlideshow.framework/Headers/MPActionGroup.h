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
@property(readonly, retain) NSMutableArray *actions;	// G=0x33354585; converted property
+ (id)actionGroup;	// 0x33354299
- (id)init;	// 0x333542dd
- (id)initWithCoder:(id)coder;	// 0x33354341
// converted property getter: - (id)actions;	// 0x33354585
- (void)addAction:(id)action;	// 0x33354595
- (void)addActions:(id)actions;	// 0x33354631
- (void)configureAction:(id)action atIndex:(int)index;	// 0x333549f1
- (void)configureTarget;	// 0x33354d31
- (void)copyActions:(id)actions;	// 0x3335490d
- (id)copyWithZone:(NSZone *)zone;	// 0x3335450d
- (void)dealloc;	// 0x33354465
- (void)encodeWithCoder:(id)coder;	// 0x333544b1
- (void)insertAction:(id)action atIndex:(int)index;	// 0x333545f1
- (void)insertActions:(id)actions atIndex:(int)index;	// 0x33354671
- (unsigned)numberOfActions;	// 0x33354565
- (void)removeActionsAtIndices:(id)indices;	// 0x333547bd
- (void)removeAllActions;	// 0x333548ad
- (void)setAction:(id)action;	// 0x33354e0d
@end

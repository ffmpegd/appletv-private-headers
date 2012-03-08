/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "ATVSlideshow-Structs.h"

@class NSArray, NSSet, NSMutableDictionary, NSString;

@interface MCContainerParallelizer : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSArray *mCachedZOrderedPlugs;	// 32 = 0x20
	CGColorRef mBackgroundColor;	// 36 = 0x24
	NSString *mPageIDAtStart;	// 40 = 0x28
}
@property(assign) CGColorRef backgroundColor;	// G=0x34a57751; S=0x34a57815; 
@property(readonly, assign) unsigned countOfPlugs;	// G=0x34a57ae1; 
@property(copy) NSString *pageIDAtStart;	// G=0x34a582e5; S=0x34a582f9; @synthesize=mPageIDAtStart
@property(readonly, assign) NSSet *plugs;	// G=0x34a5799d; 
@property(readonly, assign) NSArray *zOrderedPlugs;	// G=0x34a58119; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x34a56e31
- (id)init;	// 0x34a56eb1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x34a56f15
// declared property getter: - (CGColorRef)backgroundColor;	// 0x34a57751
// declared property getter: - (unsigned)countOfPlugs;	// 0x34a57ae1
- (void)demolish;	// 0x34a571ed
- (id)imprint;	// 0x34a57449
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34a57625
// declared property getter: - (id)pageIDAtStart;	// 0x34a582e5
- (id)plugForID:(id)anId;	// 0x34a57b9d
// declared property getter: - (id)plugs;	// 0x34a5799d
- (void)removePlug:(id)plug;	// 0x34a57ee9
- (void)removePlugForID:(id)anId;	// 0x34a580e5
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x34a57815
// declared property setter: - (void)setPageIDAtStart:(id)start;	// 0x34a582f9
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x34a57c8d
// declared property getter: - (id)zOrderedPlugs;	// 0x34a58119
@end

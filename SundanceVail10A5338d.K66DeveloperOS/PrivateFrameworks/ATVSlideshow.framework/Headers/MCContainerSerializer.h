/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSArray, NSSet, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned countOfPlugs;	// G=0x334c6dd1; 
@property(readonly, assign) double duration;	// G=0x334c6a41; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x334c7d79; 
@property(readonly, assign) NSSet *plugs;	// G=0x334c6ca1; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x334c6331
- (id)init;	// 0x334c63b1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x334c6431
- (id)addPlugForContainer:(id)container;	// 0x334c70a9
- (id)addPlugsForContainers:(id)containers;	// 0x334c7139
// declared property getter: - (unsigned)countOfPlugs;	// 0x334c6dd1
- (void)demolish;	// 0x334c65ed
// declared property getter: - (double)duration;	// 0x334c6a41
- (id)imprint;	// 0x334c6851
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x334c716d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x334c71ed
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x334c7a41
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x334c699d
// declared property getter: - (id)orderedPlugs;	// 0x334c7d79
- (id)plugAtIndex:(unsigned)index;	// 0x334c6e9d
// declared property getter: - (id)plugs;	// 0x334c6ca1
- (void)removeAllPlugs;	// 0x334c7d25
- (void)removePlugsAtIndices:(id)indices;	// 0x334c76a5
- (double)timeInForPlug:(id)plug;	// 0x334c7f69
@end

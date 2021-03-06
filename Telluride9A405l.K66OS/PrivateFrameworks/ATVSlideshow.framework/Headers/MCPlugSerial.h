/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSDictionary, NSMutableDictionary, NSString, MCContainerSerializer;

@interface MCPlugSerial : MCPlug {
	unsigned mIndex;	// 60 = 0x3c
	NSString *mTransitionID;	// 64 = 0x40
	double mTransitionDuration;	// 68 = 0x44
	NSMutableDictionary *mTransitionAttributes;	// 76 = 0x4c
	MCContainerSerializer *mSupercontainer;	// 80 = 0x50
}
@property(assign, nonatomic) unsigned index;	// G=0x335d6819; S=0x335d6829; @synthesize=mIndex
@property(assign) MCContainerSerializer *supercontainer;	// G=0x335d6889; S=0x335d6899; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x335d64e1; S=0x335d65c9; 
@property(assign, nonatomic) double transitionDuration;	// G=0x335d6871; S=0x335d6231; @synthesize=mTransitionDuration
@property(copy) NSString *transitionID;	// G=0x335d6839; S=0x335d684d; @synthesize=mTransitionID
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x335d5e8d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335d5f25
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x335d66dd
- (void)demolish;	// 0x335d607d
- (id)imprint;	// 0x335d6101
// declared property getter: - (unsigned)index;	// 0x335d6819
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x335d6829
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x335d6899
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x335d636d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x335d65c9
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x335d6231
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x335d684d
// declared property getter: - (id)supercontainer;	// 0x335d6889
- (id)transitionAttributeForKey:(id)key;	// 0x335d6245
// declared property getter: - (id)transitionAttributes;	// 0x335d64e1
// declared property getter: - (double)transitionDuration;	// 0x335d6871
// declared property getter: - (id)transitionID;	// 0x335d6839
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSMutableDictionary, NSString, NSDictionary, MCContainerSerializer;

@interface MCPlugSerial : MCPlug {
	NSMutableDictionary *mTransitionAttributes;	// 68 = 0x44
	unsigned mIndex;	// 72 = 0x48
	NSString *mTransitionID;	// 76 = 0x4c
	double mTransitionDuration;	// 80 = 0x50
	MCContainerSerializer *mSupercontainer;	// 88 = 0x58
}
@property(assign, nonatomic) unsigned index;	// G=0x32529c39; S=0x32529c49; @synthesize=mIndex
@property(assign) MCContainerSerializer *supercontainer;	// G=0x32529c95; S=0x32529ca9; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x325298cd; S=0x325299c9; 
@property(assign, nonatomic) double transitionDuration;	// G=0x32529c7d; S=0x325294a1; @synthesize=mTransitionDuration
@property(copy) NSString *transitionID;	// G=0x32529c59; S=0x32529c6d; @synthesize=mTransitionID
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x325290f9
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32529191
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x32529ae1
- (void)addTransitionAttributes:(id)attributes;	// 0x32529761
- (void)demolish;	// 0x325292e9
- (id)imprint;	// 0x32529371
// declared property getter: - (unsigned)index;	// 0x32529c39
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x32529c49
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x32529ca9
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x325295ed
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x325299c9
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x325294a1
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x32529c6d
// declared property getter: - (id)supercontainer;	// 0x32529c95
- (id)transitionAttributeForKey:(id)key;	// 0x325294b5
// declared property getter: - (id)transitionAttributes;	// 0x325298cd
// declared property getter: - (double)transitionDuration;	// 0x32529c7d
// declared property getter: - (id)transitionID;	// 0x32529c59
@end

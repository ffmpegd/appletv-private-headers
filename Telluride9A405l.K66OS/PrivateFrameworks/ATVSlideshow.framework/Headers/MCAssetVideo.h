/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSSet, NSMutableSet;

@interface MCAssetVideo : MCAsset {
	NSMutableSet *mSlides;	// 20 = 0x14
}
@property(readonly, assign) NSSet *slides;	// G=0x335c2d5d; @synthesize=mSlides
- (id)init;	// 0x335c2c05
- (void)demolish;	// 0x335c2c69
- (void)forgetSlide:(id)slide;	// 0x335c2d3d
- (BOOL)isInUse;	// 0x335c2cbd
- (void)learnSlide:(id)slide;	// 0x335c2d1d
// declared property getter: - (id)slides;	// 0x335c2d5d
@end


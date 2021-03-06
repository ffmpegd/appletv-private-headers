/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRTransition.h"

@class MRImageProvider;

@interface MRTransitionRotate : MRTransition {
	MRImageProvider *mBoxShadowBig;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x32164789
- (void)_cleanup;	// 0x32164889
- (BOOL)isLoadedForTime:(double)time;	// 0x32164919
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3216493d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321649a9
- (void)setPixelSize:(CGSize)size;	// 0x321648c5
- (void)unload;	// 0x32165681
@end


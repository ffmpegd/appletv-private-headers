/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
	NSMutableDictionary *mAnimationSets;	// 8 = 0x8
}
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x31400bf5
+ (void)releaseSharedManager;	// 0x31400b2d
+ (id)sharedManager;	// 0x31400ae5
- (id)initWithPaths:(id)paths;	// 0x31400c55
- (id)animationDescriptionForAnimationID:(id)animationID;	// 0x31400bd5
- (void)dealloc;	// 0x31400b5d
@end

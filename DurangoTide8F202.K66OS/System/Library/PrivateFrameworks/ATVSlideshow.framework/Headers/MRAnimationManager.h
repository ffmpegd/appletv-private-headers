/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
}
+ (void)initialize;	// 0x31497ee9
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x31497f65
+ (id)sharedManager;	// 0x31497f59
- (id)initWithPaths:(id)paths;	// 0x31497fc5
- (void)cleanup;	// 0x3149821d
- (void)dealloc;	// 0x314981dd
@end


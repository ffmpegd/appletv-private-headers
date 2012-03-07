/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIViewAnimationContext : NSObject {
@private
	NSArray *_viewAnimations;	// 4 = 0x4
	int _animationCount;	// 8 = 0x8
}
@property(assign, nonatomic) int animationCount;	// G=0x300ec9b1; S=0x300ec9c1; @synthesize=_animationCount
@property(retain, nonatomic) NSArray *viewAnimations;	// G=0x300ecd85; S=0x300ec98d; @synthesize=_viewAnimations
// declared property getter: - (int)animationCount;	// 0x300ec9b1
- (void)dealloc;	// 0x300ecd95
// declared property setter: - (void)setAnimationCount:(int)count;	// 0x300ec9c1
// declared property setter: - (void)setViewAnimations:(id)animations;	// 0x300ec98d
// declared property getter: - (id)viewAnimations;	// 0x300ecd85
@end


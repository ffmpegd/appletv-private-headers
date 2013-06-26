/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView {
	UIImageView *_leftImageView;	// 84 = 0x54
	UIImageView *_middleImageView;	// 88 = 0x58
	UIImageView *_rightImageView;	// 92 = 0x5c
	NSArray *_activeImages;	// 96 = 0x60
	NSArray *_inactiveImages;	// 100 = 0x64
	unsigned _isActive : 1;	// 104 = 0x68
	unsigned _centerHandleEnabled : 1;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x347ee2c1; S=0x347ee1e5; 
- (id)initWithFrame:(CGRect)frame;	// 0x347ed8b1
- (float)_bounceValueForFraction:(float)fraction;	// 0x347ee721
- (void)bounce;	// 0x347ee2d9
- (void)dealloc;	// 0x347edc09
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x347edddd
// declared property getter: - (BOOL)isEditing;	// 0x347ee2c1
- (CGRect)leftHandleBounds;	// 0x347ee00d
- (CGRect)leftHandleFrame;	// 0x347ee029
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x347edd55
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x347edc91
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x347edcd9
- (CGRect)rightHandleBounds;	// 0x347ee0c1
- (CGRect)rightHandleFrame;	// 0x347ee11d
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x347edc6d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x347ee1e5
@end

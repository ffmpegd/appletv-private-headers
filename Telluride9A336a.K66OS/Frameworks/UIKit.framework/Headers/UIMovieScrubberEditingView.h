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
@private
	UIImageView *_leftImageView;	// 48 = 0x30
	UIImageView *_middleImageView;	// 52 = 0x34
	UIImageView *_rightImageView;	// 56 = 0x38
	NSArray *_activeImages;	// 60 = 0x3c
	NSArray *_inactiveImages;	// 64 = 0x40
	unsigned _isActive : 1;	// 68 = 0x44
	unsigned _centerHandleEnabled : 1;	// 68 = 0x44
}
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x35357551; S=0x35357415; 
- (id)initWithFrame:(CGRect)frame;	// 0x35356a7d
- (float)_bounceValueForFraction:(float)fraction;	// 0x35357a4d
- (void)bounce;	// 0x35357565
- (void)dealloc;	// 0x35356e8d
- (int)handleForPoint:(CGPoint)point hitOffset:(float *)offset;	// 0x35357061
// declared property getter: - (BOOL)isEditing;	// 0x35357551
- (CGRect)leftHandleBounds;	// 0x3535726d
- (CGRect)leftHandleFrame;	// 0x35357289
- (BOOL)pointInsideCenterHandle:(CGPoint)handle;	// 0x35356fd9
- (BOOL)pointInsideLeftHandle:(CGPoint)handle;	// 0x35356f15
- (BOOL)pointInsideRightHandle:(CGPoint)handle;	// 0x35356f5d
- (CGRect)rightHandleBounds;	// 0x3535730d
- (CGRect)rightHandleFrame;	// 0x35357369
- (void)setCenterHandleEnabled:(BOOL)enabled;	// 0x35356eed
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x35357415
@end

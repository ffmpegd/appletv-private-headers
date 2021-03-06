/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

@interface UIClipCornerView : UIView {
	float _cornerRadius;	// 44 = 0x2c
	int _rectCorner;	// 48 = 0x30
	CGPoint _pathOrigin;	// 52 = 0x34
	CGPathRef _clipPath;	// 60 = 0x3c
	UIImage *_backgroundImage;	// 64 = 0x40
	CGRect _backgroundImageSubrect;	// 68 = 0x44
	CGAffineTransform _backgroundTransform;	// 84 = 0x54
	BOOL _useSnapshot;	// 108 = 0x6c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3083916d; S=0x308393e1; @synthesize=_backgroundImage
@property(assign, nonatomic) CGRect backgroundImageSubrect;	// G=0x30839151; S=0x30839821; @synthesize=_backgroundImageSubrect
@property(assign, nonatomic) float cornerRadius;	// G=0x3083917d; S=0x3083942d; @synthesize=_cornerRadius
@property(assign, nonatomic) BOOL useSnapshot;	// G=0x30839141; S=0x308393a5; @synthesize=_useSnapshot
- (id)initWithCornerRadius:(float)cornerRadius forCorner:(int)corner;	// 0x30839669
- (void)_updateCornerPath;	// 0x3083918d
- (void)_updateSnapshot;	// 0x3083987d
// declared property getter: - (id)backgroundImage;	// 0x3083916d
// declared property getter: - (CGRect)backgroundImageSubrect;	// 0x30839151
// declared property getter: - (float)cornerRadius;	// 0x3083917d
- (void)dealloc;	// 0x30839619
- (void)drawRect:(CGRect)rect;	// 0x3083a08d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x308393e1
// declared property setter: - (void)setBackgroundImageSubrect:(CGRect)subrect;	// 0x30839821
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x3083942d
- (void)setFrame:(CGRect)frame;	// 0x3083972d
// declared property setter: - (void)setUseSnapshot:(BOOL)snapshot;	// 0x308393a5
// declared property getter: - (BOOL)useSnapshot;	// 0x30839141
@end


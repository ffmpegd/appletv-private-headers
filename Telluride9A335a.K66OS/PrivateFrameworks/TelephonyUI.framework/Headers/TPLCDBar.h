/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class UIImage;

@interface TPLCDBar : UIImageView {
	UIImage *_barBackground;	// 52 = 0x34
}
@property(retain, nonatomic) UIImage *barBackground;	// G=0x32a4967d; S=0x32a497bd; @synthesize=_barBackground
+ (id)backgroundImage;	// 0x32a49785
+ (float)defaultHeight;	// 0x32a496c5
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x32a496d9
+ (void)preloadImages;	// 0x32a496b5
- (id)initWithDefaultSize;	// 0x32a4968d
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x32a499a1
- (id)initWithFrame:(CGRect)frame;	// 0x32a49929
// declared property getter: - (id)barBackground;	// 0x32a4967d
- (CGRect)contentStretchRect;	// 0x32a497e5
- (void)dealloc;	// 0x32a49739
// declared property setter: - (void)setBarBackground:(id)background;	// 0x32a497bd
- (void)setOrientation:(int)orientation;	// 0x32a496a1
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x32a4986d
@end


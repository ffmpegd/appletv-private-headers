/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImageControl, BRImage, BRMarqueeTextControl, BRReflectionControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButton : BRControl {
@private
	BRImageControl *_imageControl;	// 48 = 0x30
	BRReflectionControl *_reflectionControl;	// 52 = 0x34
	BRMarqueeTextControl *_titleControl;	// 56 = 0x38
	NSDictionary *_attributeDictionary;	// 60 = 0x3c
	NSDictionary *_reflectionInfo;	// 64 = 0x40
	float _titleGap;	// 68 = 0x44
	BOOL _alwaysShowsTitle;	// 72 = 0x48
	BOOL _shadowEnabled;	// 73 = 0x49
	BOOL _reflectionEnabled;	// 74 = 0x4a
}
@property(assign, nonatomic) BOOL alwaysShowsTitle;	// G=0x303e344d; S=0x303e30dd; @synthesize=_alwaysShowsTitle
@property(assign, nonatomic) BRImage *image;	// G=0x303e2fd9; S=0x303e2ff9; 
@property(assign, nonatomic, getter=isReflectionEnabled) BOOL reflectionEnabled;	// G=0x303e347d; S=0x303e310d; @synthesize=_reflectionEnabled
@property(assign, nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;	// G=0x303e345d; S=0x303e346d; @synthesize=_shadowEnabled
@property(copy, nonatomic) NSString *title;	// G=0x303e3019; S=0x303e3051; 
@property(assign, nonatomic) float titleGap;	// G=0x303e342d; S=0x303e343d; @synthesize=_titleGap
- (id)init;	// 0x303e2745
- (id)initWithLayout:(id)layout;	// 0x303e28b9
- (CGRect)_frameForImageControl;	// 0x303e3261
- (id)accessibilityLabel;	// 0x303e33f1
- (id)accessibilityTraits;	// 0x303e3401
// declared property getter: - (BOOL)alwaysShowsTitle;	// 0x303e344d
- (void)dealloc;	// 0x303e29bd
- (CGRect)focusCursorFrame;	// 0x303e3335
// declared property getter: - (id)image;	// 0x303e2fd9
- (BOOL)isAccessibilityElement;	// 0x303e33ed
// declared property getter: - (BOOL)isReflectionEnabled;	// 0x303e347d
// declared property getter: - (BOOL)isShadowEnabled;	// 0x303e345d
- (void)layoutSubcontrols;	// 0x303e2a35
- (float)preferredCursorRadius;	// 0x303e2fd1
// declared property setter: - (void)setAlwaysShowsTitle:(BOOL)title;	// 0x303e30dd
// declared property setter: - (void)setImage:(id)image;	// 0x303e2ff9
// declared property setter: - (void)setReflectionEnabled:(BOOL)enabled;	// 0x303e310d
// declared property setter: - (void)setShadowEnabled:(BOOL)enabled;	// 0x303e346d
// declared property setter: - (void)setTitle:(id)title;	// 0x303e3051
// declared property setter: - (void)setTitleGap:(float)gap;	// 0x303e343d
// declared property getter: - (id)title;	// 0x303e3019
// declared property getter: - (float)titleGap;	// 0x303e342d
@end

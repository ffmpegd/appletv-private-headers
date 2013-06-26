/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIKBRenderConfig, UIKeyboardEmoji, UIKeyboardEmojiImageView;
@protocol UIKeyboardEmojiPressIndicationDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiView : UIControl {
	UIKeyboardEmoji *_emoji;	// 120 = 0x78
	UIView *_popup;	// 124 = 0x7c
	UIKeyboardEmojiImageView *_imageView;	// 128 = 0x80
	UIKBRenderConfig *_renderConfig;	// 132 = 0x84
	UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;	// 136 = 0x88
}
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> *delegate;	// G=0x2f6e4f39; S=0x2f6e4f4d; @synthesize=_delegate
@property(retain) UIKeyboardEmoji *emoji;	// G=0x2f6e4ecd; S=0x2f6e4ee1; @synthesize=_emoji
@property(retain) UIKeyboardEmojiImageView *imageView;	// G=0x2f6e4f15; S=0x2f6e4f29; @synthesize=_imageView
@property(retain) UIView *popup;	// G=0x2f6e4ef1; S=0x2f6e4f05; @synthesize=_popup
@property(retain, nonatomic) UIKBRenderConfig *renderConfig;	// G=0x2f6e4f5d; S=0x2f6e4f6d; @synthesize=_renderConfig
+ (id)emojiViewForEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x2f6e4de5
+ (void)recycleEmojiView:(id)view;	// 0x2f6e4d8d
- (id)initWithFrame:(CGRect)frame emoji:(id)emoji;	// 0x2f6e3ff5
- (id)createAndInstallKeyPopupView;	// 0x2f6e419d
- (void)dealloc;	// 0x2f6e4111
// declared property getter: - (id)delegate;	// 0x2f6e4f39
// declared property getter: - (id)emoji;	// 0x2f6e4ecd
// declared property getter: - (id)imageView;	// 0x2f6e4f15
// declared property getter: - (id)popup;	// 0x2f6e4ef1
// declared property getter: - (id)renderConfig;	// 0x2f6e4f5d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f6e4f4d
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x2f6e4ee1
- (void)setEmoji:(id)emoji withFrame:(CGRect)frame;	// 0x2f6e4cbd
// declared property setter: - (void)setImageView:(id)view;	// 0x2f6e4f29
// declared property setter: - (void)setPopup:(id)popup;	// 0x2f6e4f05
// declared property setter: - (void)setRenderConfig:(id)config;	// 0x2f6e4f6d
- (void)uninstallPopup;	// 0x2f6e4bf9
@end

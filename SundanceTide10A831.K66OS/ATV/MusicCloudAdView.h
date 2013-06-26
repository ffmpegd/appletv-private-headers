/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface MusicCloudAdView : BRControl {
	BRTextControl *_titleControl;	// 84 = 0x54
	BRTextControl *_descriptionControl;	// 88 = 0x58
	BRAsyncImageControl *_iTunesMatchLogo;	// 92 = 0x5c
	BRImageControl *_okButtonImageControl;	// 96 = 0x60
	BRTextControl *_okButtonTextControl;	// 100 = 0x64
	CGRect _iTunesMatchLogoFrame;	// 104 = 0x68
}
@property(retain, nonatomic) BRTextControl *descriptionControl;	// G=0x76a69; S=0x76a79; @synthesize=_descriptionControl
@property(retain, nonatomic) BRAsyncImageControl *iTunesMatchLogo;	// G=0x76aa1; S=0x76ab1; @synthesize=_iTunesMatchLogo
@property(assign, nonatomic) CGRect iTunesMatchLogoFrame;	// G=0x76b49; S=0x76b6d; @synthesize=_iTunesMatchLogoFrame
@property(retain, nonatomic) BRImageControl *okButtonImageControl;	// G=0x76ad9; S=0x76ae9; @synthesize=_okButtonImageControl
@property(retain, nonatomic) BRTextControl *okButtonTextControl;	// G=0x76b11; S=0x76b21; @synthesize=_okButtonTextControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x76a31; S=0x76a41; @synthesize=_titleControl
+ (id)viewWithDescription:(id)description prompt:(id)prompt;	// 0x7617d
- (id)initWithDescription:(id)description prompt:(id)prompt;	// 0x761dd
- (void).cxx_destruct;	// 0x76b89
- (id)accessibilityLabel;	// 0x76959
// declared property getter: - (id)descriptionControl;	// 0x76a69
// declared property getter: - (id)iTunesMatchLogo;	// 0x76aa1
// declared property getter: - (CGRect)iTunesMatchLogoFrame;	// 0x76b49
- (BOOL)isAccessibilityElement;	// 0x76955
- (void)layoutSubcontrols;	// 0x7666d
// declared property getter: - (id)okButtonImageControl;	// 0x76ad9
// declared property getter: - (id)okButtonTextControl;	// 0x76b11
// declared property setter: - (void)setDescriptionControl:(id)control;	// 0x76a79
// declared property setter: - (void)setITunesMatchLogo:(id)logo;	// 0x76ab1
// declared property setter: - (void)setITunesMatchLogoFrame:(CGRect)frame;	// 0x76b6d
// declared property setter: - (void)setOkButtonImageControl:(id)control;	// 0x76ae9
// declared property setter: - (void)setOkButtonTextControl:(id)control;	// 0x76b21
// declared property setter: - (void)setTitleControl:(id)control;	// 0x76a41
// declared property getter: - (id)titleControl;	// 0x76a31
@end

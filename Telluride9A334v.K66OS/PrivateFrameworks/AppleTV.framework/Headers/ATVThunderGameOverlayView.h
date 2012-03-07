/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRAsyncImageControl, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVThunderGameOverlayView : BRControl {
@private
	BRTextControl *_titleText;	// 48 = 0x30
	BRControl *_divider;	// 52 = 0x34
	BRTextControl *_leftText;	// 56 = 0x38
	BRTextControl *_rightText;	// 60 = 0x3c
	BRTextControl *_centerText;	// 64 = 0x40
	BRAsyncImageControl *_leftImage;	// 68 = 0x44
	BRAsyncImageControl *_rightImage;	// 72 = 0x48
	BRControl *_centerBackgroundImageContainer;	// 76 = 0x4c
	BRAsyncImageControl *_centerBackgroundImage;	// 80 = 0x50
}
@property(retain) id<BRImageProxy> centerBackgroundImageProxy;	// G=0x3316e839; S=0x3316e859; 
@property(copy) NSString *centerText;	// G=0x3316e755; S=0x3316e78d; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x3316e7f9; S=0x3316e819; 
@property(copy) NSString *leftText;	// G=0x3316e605; S=0x3316e63d; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x3316e879; S=0x3316e899; 
@property(copy) NSString *rightText;	// G=0x3316e6ad; S=0x3316e6e5; 
@property(copy) NSString *titleText;	// G=0x3316e561; S=0x3316e599; 
- (id)init;	// 0x3316daed
// declared property getter: - (id)centerBackgroundImageProxy;	// 0x3316e839
// declared property getter: - (id)centerText;	// 0x3316e755
- (void)dealloc;	// 0x3316deed
- (void)layoutSubcontrols;	// 0x3316dff1
// declared property getter: - (id)leftImageProxy;	// 0x3316e7f9
// declared property getter: - (id)leftText;	// 0x3316e605
// declared property getter: - (id)rightImageProxy;	// 0x3316e879
// declared property getter: - (id)rightText;	// 0x3316e6ad
// declared property setter: - (void)setCenterBackgroundImageProxy:(id)proxy;	// 0x3316e859
// declared property setter: - (void)setCenterText:(id)text;	// 0x3316e78d
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x3316e819
// declared property setter: - (void)setLeftText:(id)text;	// 0x3316e63d
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x3316e899
// declared property setter: - (void)setRightText:(id)text;	// 0x3316e6e5
// declared property setter: - (void)setTitleText:(id)text;	// 0x3316e599
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3316dfd9
// declared property getter: - (id)titleText;	// 0x3316e561
@end


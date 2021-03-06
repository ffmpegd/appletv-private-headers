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
@property(retain) id<BRImageProxy> centerBackgroundImageProxy;	// G=0x3414f839; S=0x3414f859; 
@property(copy) NSString *centerText;	// G=0x3414f755; S=0x3414f78d; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x3414f7f9; S=0x3414f819; 
@property(copy) NSString *leftText;	// G=0x3414f605; S=0x3414f63d; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x3414f879; S=0x3414f899; 
@property(copy) NSString *rightText;	// G=0x3414f6ad; S=0x3414f6e5; 
@property(copy) NSString *titleText;	// G=0x3414f561; S=0x3414f599; 
- (id)init;	// 0x3414eaed
// declared property getter: - (id)centerBackgroundImageProxy;	// 0x3414f839
// declared property getter: - (id)centerText;	// 0x3414f755
- (void)dealloc;	// 0x3414eeed
- (void)layoutSubcontrols;	// 0x3414eff1
// declared property getter: - (id)leftImageProxy;	// 0x3414f7f9
// declared property getter: - (id)leftText;	// 0x3414f605
// declared property getter: - (id)rightImageProxy;	// 0x3414f879
// declared property getter: - (id)rightText;	// 0x3414f6ad
// declared property setter: - (void)setCenterBackgroundImageProxy:(id)proxy;	// 0x3414f859
// declared property setter: - (void)setCenterText:(id)text;	// 0x3414f78d
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x3414f819
// declared property setter: - (void)setLeftText:(id)text;	// 0x3414f63d
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x3414f899
// declared property setter: - (void)setRightText:(id)text;	// 0x3414f6e5
// declared property setter: - (void)setTitleText:(id)text;	// 0x3414f599
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3414efd9
// declared property getter: - (id)titleText;	// 0x3414f561
@end


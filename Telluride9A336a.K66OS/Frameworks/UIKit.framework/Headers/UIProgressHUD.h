/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 48 = 0x30
	UILabel *_progressMessage;	// 52 = 0x34
	UIImageView *_doneView;	// 56 = 0x38
	UIWindow *_parentWindow;	// 60 = 0x3c
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 64 = 0x40
}
- (id)initWithFrame:(CGRect)frame;	// 0x352c8c7d
- (id)initWithWindow:(id)window;	// 0x352c9751
- (id)_progressIndicator;	// 0x352c8c6d
- (void)dealloc;	// 0x352c966d
- (void)done;	// 0x352c95a1
- (void)drawRect:(CGRect)rect;	// 0x352c900d
- (void)hide;	// 0x352c9551
- (void)layoutSubviews;	// 0x352c90c1
- (void)setFontSize:(int)size;	// 0x352c8fad
- (void)setShowsText:(BOOL)text;	// 0x352c8f51
- (void)setText:(id)text;	// 0x352c8ef5
- (void)show:(BOOL)show;	// 0x352c9791
- (void)showInView:(id)view;	// 0x352c9501
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIButton, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadConfirmView : UIView {
	UILabel *_downloadRequestLabel;	// 84 = 0x54
	NSString *_downloadRequestText;	// 88 = 0x58
	UIButton *_downloadButton;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIButton *downloadButton;	// G=0x30d10035; @synthesize=_downloadButton
@property(copy, nonatomic) NSString *downloadRequestText;	// G=0x30d10011; S=0x30d10025; @synthesize=_downloadRequestText
- (id)initWithFrame:(CGRect)frame;	// 0x30d0fbf9
- (void)dealloc;	// 0x30d0fda9
// declared property getter: - (id)downloadButton;	// 0x30d10035
// declared property getter: - (id)downloadRequestText;	// 0x30d10011
- (void)layoutSubviews;	// 0x30d0fdf5
// declared property setter: - (void)setDownloadRequestText:(id)text;	// 0x30d10025
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSearchingView : UIView {
	UILabel *_searchingLabel;	// 96 = 0x60
	UIActivityIndicatorView *_searchingIndicator;	// 100 = 0x64
}
- (id)initInView:(id)view;	// 0x2f7e941d
- (void)dealloc;	// 0x2f7e9619
- (void)layoutSubviews;	// 0x2f7e9871
- (void)searchTimeout;	// 0x2f7e967d
- (void)setSearching:(BOOL)searching;	// 0x2f7e971d
@end


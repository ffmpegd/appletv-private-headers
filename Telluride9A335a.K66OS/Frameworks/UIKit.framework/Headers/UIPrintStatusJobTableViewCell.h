/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobTableViewCell : UITableViewCell {
@private
	UIActivityIndicatorView *_activityIndicator;	// 248 = 0xf8
	UIView *_verticalSeparator;	// 252 = 0xfc
}
@property(assign, nonatomic) BOOL showActive;	// G=0x33cde0e5; S=0x33cde109; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x33cdde95
- (void)dealloc;	// 0x33cde085
- (void)layoutSubviews;	// 0x33cde1d1
// declared property setter: - (void)setShowActive:(BOOL)active;	// 0x33cde109
// declared property getter: - (BOOL)showActive;	// 0x33cde0e5
@end


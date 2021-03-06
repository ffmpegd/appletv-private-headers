/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"


__attribute__((visibility("hidden")))
@interface UIPickerTableViewWrapperCell : UITableViewCell {
	UIView *_wrappedView;	// 300 = 0x12c
	CGSize _wrappedViewSize;	// 304 = 0x130
}
@property(retain, nonatomic) UIView *wrappedView;	// G=0x31d88bed; S=0x31d8a405; 
- (id)initWithFrame:(CGRect)frame;	// 0x31f59d19
- (void)_updateWrappedView;	// 0x31d8a475
- (void)_updateWrappedViewFrame;	// 0x31d8a5a5
- (void)prepareForReuse;	// 0x31d8bd81
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x31d8a689
// declared property setter: - (void)setWrappedView:(id)view;	// 0x31d8a405
// declared property getter: - (id)wrappedView;	// 0x31d88bed
@end


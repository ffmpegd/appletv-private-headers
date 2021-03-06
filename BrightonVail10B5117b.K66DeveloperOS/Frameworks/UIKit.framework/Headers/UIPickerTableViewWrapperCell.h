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
@property(retain, nonatomic) UIView *wrappedView;	// G=0x32e3f035; S=0x32e40865; 
- (id)initWithFrame:(CGRect)frame;	// 0x33010699
- (void)_updateWrappedView;	// 0x32e408d5
- (void)_updateWrappedViewFrame;	// 0x32e40a05
- (void)prepareForReuse;	// 0x32e42229
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x32e40ae9
// declared property setter: - (void)setWrappedView:(id)view;	// 0x32e40865
// declared property getter: - (id)wrappedView;	// 0x32e3f035
@end


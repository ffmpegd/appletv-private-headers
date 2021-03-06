/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class UILabel, UIImageView;
@protocol ABStyleProvider;

@interface ABPersonCellContentView : UIView {
	CGRect _labelViewRect;	// 84 = 0x54
	CGRect _valueViewRect;	// 100 = 0x64
	UILabel *_label;	// 116 = 0x74
	UIImageView *_badge;	// 120 = 0x78
	BOOL _editing;	// 124 = 0x7c
	id<ABStyleProvider> _styleProvider;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) UILabel *label;	// G=0x37643029; @synthesize=_label
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x37628679; S=0x376249e1; @synthesize=_styleProvider
+ (void)computeLabelViewFrame:(CGRect *)frame valueViewFrame:(CGRect *)frame2 forSize:(CGSize)size styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x3762f31d
+ (CGRect)firstValueFrameForValueViewFrame:(CGRect)valueViewFrame styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x37626f99
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x3762f151
- (CGRect)backgroundRectForView:(id)view;	// 0x376822b1
- (void)dealloc;	// 0x376247c5
- (CGRect)frameForBadge;	// 0x37634185
- (CGRect)frameForLabel;	// 0x37632fc1
// declared property getter: - (id)label;	// 0x37643029
- (float)labelBaselineAdjustment;	// 0x376331ad
- (void)layoutLabel;	// 0x37634331
- (void)layoutSubviews;	// 0x3768219d
- (CGRect)rectForView:(id)view;	// 0x37682229
- (void)setBadgeIcon:(id)icon;	// 0x37628765
- (void)setFrame:(CGRect)frame;	// 0x376246cd
- (void)setLabelText:(id)text;	// 0x37632e61
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x376249e1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x37682131
// declared property getter: - (id)styleProvider;	// 0x37628679
@end


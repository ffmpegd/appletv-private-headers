/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView {
@private
	int _selectionStyle;	// 48 = 0x30
	UIColor *_multiselectBackgroundColor;	// 52 = 0x34
	UIColor *_selectionTintColor;	// 56 = 0x38
	BOOL _multiselect;	// 60 = 0x3c
}
@property(assign, nonatomic, getter=isMultiselect) BOOL multiselect;	// G=0x3311bc3d; S=0x32fe496d; 
@property(retain, nonatomic) UIColor *multiselectBackgroundColor;	// G=0x3311bc5d; S=0x32fe4a05; @synthesize=_multiselectBackgroundColor
@property(assign, nonatomic) int selectionStyle;	// G=0x3311bc4d; S=0x32f6f491; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x3311bc6d; S=0x32f6f4d5; @synthesize=_selectionTintColor
- (void)dealloc;	// 0x3300d295
- (void)drawRect:(CGRect)rect;	// 0x32fe63f1
// declared property getter: - (BOOL)isMultiselect;	// 0x3311bc3d
// declared property getter: - (id)multiselectBackgroundColor;	// 0x3311bc5d
// declared property getter: - (int)selectionStyle;	// 0x3311bc4d
// declared property getter: - (id)selectionTintColor;	// 0x3311bc6d
// declared property setter: - (void)setMultiselect:(BOOL)multiselect;	// 0x32fe496d
// declared property setter: - (void)setMultiselectBackgroundColor:(id)color;	// 0x32fe4a05
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x32f6f491
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x32f6f4d5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView {
@private
	UILabel *_titleLabel;	// 48 = 0x30
	float _titleLabelMaxX;	// 52 = 0x34
	int _alignment;	// 56 = 0x38
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _datePickerContentViewFlags;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL isAmPm;	// G=0x3322f9a1; S=0x3304e0b5; 
@property(assign, nonatomic) int titleAlignment;	// G=0x3322f9e5; S=0x3304d8fd; @synthesize=_alignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x3304ccf1; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x3322f9d5; S=0x3322f9b5; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x3304cbd5
- (void)dealloc;	// 0x33051cc9
// declared property getter: - (BOOL)isAmPm;	// 0x3322f9a1
- (void)layoutSubviews;	// 0x3304dba9
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x3304e0b5
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x3304d8fd
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x3322f9b5
// declared property getter: - (int)titleAlignment;	// 0x3322f9e5
// declared property getter: - (id)titleLabel;	// 0x3304ccf1
// declared property getter: - (float)titleLabelMaxX;	// 0x3322f9d5
@end


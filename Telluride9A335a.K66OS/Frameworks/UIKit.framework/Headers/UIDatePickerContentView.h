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
@property(assign, nonatomic) BOOL isAmPm;	// G=0x33cea121; S=0x33b0e729; 
@property(assign, nonatomic) int titleAlignment;	// G=0x33cea165; S=0x33b0df71; @synthesize=_alignment
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x33b0d325; @synthesize=_titleLabel
@property(assign, nonatomic) float titleLabelMaxX;	// G=0x33cea155; S=0x33cea135; @synthesize=_titleLabelMaxX
- (id)initWithFrame:(CGRect)frame;	// 0x33b0d209
- (void)dealloc;	// 0x33b1233d
// declared property getter: - (BOOL)isAmPm;	// 0x33cea121
- (void)layoutSubviews;	// 0x33b0e21d
// declared property setter: - (void)setIsAmPm:(BOOL)pm;	// 0x33b0e729
// declared property setter: - (void)setTitleAlignment:(int)alignment;	// 0x33b0df71
// declared property setter: - (void)setTitleLabelMaxX:(float)x;	// 0x33cea135
// declared property getter: - (int)titleAlignment;	// 0x33cea165
// declared property getter: - (id)titleLabel;	// 0x33b0d325
// declared property getter: - (float)titleLabelMaxX;	// 0x33cea155
@end


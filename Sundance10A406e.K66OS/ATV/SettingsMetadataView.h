/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface SettingsMetadataView : BRControl {
	BOOL _wrapValueText;	// 84 = 0x54
	float _horizontalPadding;	// 88 = 0x58
}
@property(assign, nonatomic) float horizontalPadding;	// G=0x936f9; S=0x93709; @synthesize=_horizontalPadding
@property(assign) BOOL wrapValueText;	// G=0x936c9; S=0x936e1; @synthesize=_wrapValueText
- (id)init;	// 0x92cd9
- (id)accessibilityLabel;	// 0x93531
// declared property getter: - (float)horizontalPadding;	// 0x936f9
- (BOOL)isAccessibilityElement;	// 0x9352d
- (void)layoutSubcontrols;	// 0x930a9
// declared property setter: - (void)setHorizontalPadding:(float)padding;	// 0x93709
- (void)setValues:(id)values forLabels:(id)labels;	// 0x92d71
// declared property setter: - (void)setWrapValueText:(BOOL)text;	// 0x936e1
// declared property getter: - (BOOL)wrapValueText;	// 0x936c9
@end


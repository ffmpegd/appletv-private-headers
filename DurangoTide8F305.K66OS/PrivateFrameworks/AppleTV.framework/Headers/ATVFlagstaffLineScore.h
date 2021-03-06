/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRTableView.h> // Unknown library

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
@private
	BRImageControl *_leftFadeImageControl;	// 68 = 0x44
	BRImageControl *_rightFadeImageControl;	// 72 = 0x48
	BOOL _leftFadeOn;	// 76 = 0x4c
	BOOL _rightFadeOn;	// 77 = 0x4d
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x307cd0bd; S=0x307cd105; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x307cd0ad; S=0x307cd0cd; @synthesize=_rightFadeOn
- (id)init;	// 0x307cd199
- (void)dealloc;	// 0x307cd13d
- (void)layoutSubcontrols;	// 0x307cd2c9
// declared property getter: - (BOOL)leftFadeOn;	// 0x307cd0bd
// declared property getter: - (BOOL)rightFadeOn;	// 0x307cd0ad
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x307cd105
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x307cd0cd
@end


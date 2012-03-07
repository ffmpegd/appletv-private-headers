/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
@private
	BOOL showsCandidateBar;	// 64 = 0x40
	BOOL showsCandidateInline;	// 65 = 0x41
}
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x30347531; S=0x30347541; @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x30347551; S=0x30347561; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x30114689
- (BOOL)_isAutomaticKeyboard;	// 0x301a8651
- (void)activate;	// 0x301220cd
- (void)dealloc;	// 0x30346b41
- (void)didSuspend:(id)suspend;	// 0x30347471
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x30346c05
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x30346f35
- (BOOL)isActive;	// 0x301217c5
- (void)maximize;	// 0x30346bd1
- (void)minimize;	// 0x30346b9d
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x30346e65
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x30347541
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x30347561
// declared property getter: - (BOOL)showsCandidateBar;	// 0x30347531
// declared property getter: - (BOOL)showsCandidateInline;	// 0x30347551
- (void)willResume:(id)resume;	// 0x3034711d
@end


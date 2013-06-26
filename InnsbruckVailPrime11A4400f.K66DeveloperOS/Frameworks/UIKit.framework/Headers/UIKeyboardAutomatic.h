/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboard.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
	BOOL showsCandidateBar;	// 116 = 0x74
	BOOL showsCandidateInline;	// 117 = 0x75
	BOOL receivedCandidatesInCurrentInputMode;	// 118 = 0x76
	BOOL caretBlinks;	// 119 = 0x77
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x2f7a3655; S=0x2f7a3665; @synthesize
@property(assign, nonatomic) BOOL receivedCandidatesInCurrentInputMode;	// G=0x2f7a3635; S=0x2f7a3645; @synthesize
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x2f7a3615; S=0x2f55c6a5; @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x2f7a3625; S=0x2f55c6cd; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x2f4bcbb9
- (BOOL)_isAutomaticKeyboard;	// 0x2f53fc21
- (void)activate;	// 0x2f4cea2d
// declared property getter: - (BOOL)caretBlinks;	// 0x2f7a3655
- (void)dealloc;	// 0x2f7a2fc9
- (void)didSuspend:(id)suspend;	// 0x2f55c4fd
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x2f7a3091
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x2f7a33e9
- (BOOL)isActive;	// 0x2f4cdcd5
- (void)maximize;	// 0x2f7a3059
- (void)minimize;	// 0x2f7a3025
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x2f7a32cd
// declared property getter: - (BOOL)receivedCandidatesInCurrentInputMode;	// 0x2f7a3635
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x2f7a3665
// declared property setter: - (void)setReceivedCandidatesInCurrentInputMode:(BOOL)currentInputMode;	// 0x2f7a3645
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x2f55c6a5
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x2f55c6cd
// declared property getter: - (BOOL)showsCandidateBar;	// 0x2f7a3615
// declared property getter: - (BOOL)showsCandidateInline;	// 0x2f7a3625
- (void)willResume:(id)resume;	// 0x2f55dc81
@end

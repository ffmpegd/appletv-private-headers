/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"

@class UIDelayedAction, NSMutableArray, _UIScreenEdgePanRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow {
	NSMutableArray *_failureMessageLabels;	// 220 = 0xdc
	UIDelayedAction *_messageFadeAction;	// 224 = 0xe0
	UIView *_backgroundView;	// 228 = 0xe4
	_UIScreenEdgePanRecognizer *_recognizer;	// 232 = 0xe8
	long _maximumVisibleOverlayItems;	// 236 = 0xec
}
@property(assign, nonatomic) long maximumVisibleOverlayItems;	// G=0x2f6e72f9; S=0x2f6e7309; @synthesize=_maximumVisibleOverlayItems
@property(assign, nonatomic) _UIScreenEdgePanRecognizer *recognizer;	// G=0x2f6e72d9; S=0x2f6e72e9; @synthesize=_recognizer
- (id)initWithFrame:(CGRect)frame;	// 0x2f6e6485
- (BOOL)_isWindowServerHostingManaged;	// 0x2f6e6481
- (void)dealloc;	// 0x2f6e6675
- (void)dismissMessages;	// 0x2f6e6c31
- (void)fadeOldestMessage;	// 0x2f6e69bd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2f6e72a1
- (void)layoutSubviews;	// 0x2f6e7065
// declared property getter: - (long)maximumVisibleOverlayItems;	// 0x2f6e72f9
- (void)pushFailureMessage:(id)message toVisualOverlay:(BOOL)visualOverlay;	// 0x2f6e699d
- (void)pushMessage:(id)message toVisualOverlay:(BOOL)visualOverlay;	// 0x2f6e6701
- (void)pushStatusMessage:(id)message toVisualOverlay:(BOOL)visualOverlay;	// 0x2f6e69ad
// declared property getter: - (id)recognizer;	// 0x2f6e72d9
// declared property setter: - (void)setMaximumVisibleOverlayItems:(long)items;	// 0x2f6e7309
// declared property setter: - (void)setRecognizer:(id)recognizer;	// 0x2f6e72e9
@end


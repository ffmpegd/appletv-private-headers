/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, NSTimer, UITextSelection, UITextInteractionAssistant, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView {
	UITextInteractionAssistant *m_interactionAssistant;	// 84 = 0x54
	UITextSelection *m_selection;	// 88 = 0x58
	NSTimer *m_caretTimer;	// 92 = 0x5c
	UIView *m_caretView;	// 96 = 0x60
	UITextRangeView *m_rangeView;	// 100 = 0x64
	BOOL m_caretBlinks;	// 104 = 0x68
	BOOL m_caretShowingNow;	// 105 = 0x69
	BOOL m_visible;	// 106 = 0x6a
	BOOL m_activated;	// 107 = 0x6b
	BOOL m_wasShowingCommands;	// 108 = 0x6c
	BOOL m_delayShowingCommands;	// 109 = 0x6d
	BOOL m_dictationReplacementsMode;	// 110 = 0x6e
	int m_showingCommandsCounter;	// 112 = 0x70
	NSArray *m_replacements;	// 116 = 0x74
	BOOL m_deferSelectionCommands;	// 120 = 0x78
	CFRunLoopObserverRef m_observer;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL caretBlinks;	// G=0x31eaeac5; S=0x31cc330d; @synthesize=m_caretBlinks
@property(readonly, assign, nonatomic) UIView *caretView;	// G=0x31cc57f1; @synthesize=m_caretView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x31cc32ed; @synthesize=m_interactionAssistant
@property(readonly, assign, nonatomic) UITextRangeView *rangeView;	// G=0x31cf27b9; 
@property(retain, nonatomic) NSArray *replacements;	// G=0x31cf27a5; S=0x31cf26bd; @synthesize=m_replacements
@property(readonly, assign, nonatomic) UITextSelection *selection;	// G=0x31cc3649; 
@property(readonly, assign, nonatomic) BOOL selectionCommandsShowing;	// G=0x31cdb9a5; 
@property(assign, nonatomic) BOOL visible;	// G=0x31cc32fd; S=0x31cc30ad; @synthesize=m_visible
- (id)initWithInteractionAssistant:(id)interactionAssistant;	// 0x31cc2d29
- (void)activate;	// 0x31cc44d1
- (BOOL)affectedByScrollerNotification:(id)notification;	// 0x31d3f261
- (void)appearOrFadeIfNecessary;	// 0x31cc30d1
- (void)calculateAndShowReplacements:(id)replacements;	// 0x31d984fd
- (void)cancelDelayedCommandRequests;	// 0x31cc3619
- (void)caretBlinkTimerFired:(id)fired;	// 0x31ce8031
// declared property getter: - (BOOL)caretBlinks;	// 0x31eaeac5
// declared property getter: - (id)caretView;	// 0x31cc57f1
- (void)clearCaret;	// 0x31d04331
- (void)clearCaretBlinkTimer;	// 0x31d04371
- (void)clearRange;	// 0x31cc4ea5
- (CGRect)clippedTargetRect:(CGRect)rect;	// 0x31cf73ed
- (void)configureForHighlightMode;	// 0x31eaec09
- (void)configureForReplacementMode;	// 0x31eaec35
- (void)configureForSelectionMode;	// 0x31eaebdd
- (void)deactivate;	// 0x31d041fd
- (void)dealloc;	// 0x31d32d01
- (void)deferredUpdateSelectionCommands;	// 0x31eaea25
- (void)deferredUpdateSelectionRects;	// 0x31cc39b1
- (void)detach;	// 0x31d04321
- (void)didRotate:(id)rotate;	// 0x31eaef49
- (void)doneMagnifying;	// 0x31eaed71
- (void)hideCaret:(int)caret;	// 0x31ce8121
- (void)hideSelectionCommands;	// 0x31cc35d1
- (void)hideSelectionCommandsAfterDelay:(double)delay;	// 0x31cdb9d9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31ceb5c9
- (void)inputViewDidAnimate;	// 0x31ce946d
- (void)inputViewDidChange;	// 0x31ce9349
- (void)inputViewDidMove;	// 0x31ce9325
- (void)inputViewWillAnimate;	// 0x31cdba49
- (void)inputViewWillChange;	// 0x31cdb8b1
- (void)inputViewWillMove;	// 0x31cdb861
- (void)installIfNecessary;	// 0x31cc4ec5
// declared property getter: - (id)interactionAssistant;	// 0x31cc32ed
- (void)invalidate;	// 0x31eae92d
- (void)layoutChangedByScrolling:(BOOL)scrolling;	// 0x31eaeca5
- (void)prepareForMagnification;	// 0x31eaecd5
// declared property getter: - (id)rangeView;	// 0x31cf27b9
- (void)removeFromSuperview;	// 0x31d04221
// declared property getter: - (id)replacements;	// 0x31cf27a5
- (void)scaleDidChange:(id)scale;	// 0x31eaee15
- (void)scaleWillChange:(id)scale;	// 0x31eaedbd
- (id)scrollView;	// 0x31cf78b9
// declared property getter: - (id)selection;	// 0x31cc3649
- (CGRect)selectionBoundingBox;	// 0x31d9896d
- (void)selectionChanged;	// 0x31cc34d5
// declared property getter: - (BOOL)selectionCommandsShowing;	// 0x31cdb9a5
- (void)selectionDidScroll:(id)selection;	// 0x31d3aa91
- (void)selectionWillScroll:(id)selection;	// 0x31d393c1
// declared property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x31cc330d
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x31cf26bd
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x31cc30ad
- (BOOL)shouldBeVisible;	// 0x31cc3221
- (void)showCalloutBarAfterDelay:(double)delay;	// 0x31cf26d1
- (void)showCaret:(int)caret;	// 0x31cc5931
- (void)showCommandsWithReplacements:(id)replacements;	// 0x31cf5d91
- (void)showReplacementsWithGenerator:(id)generator forDictation:(BOOL)dictation afterDelay:(double)delay;	// 0x31d9834d
- (void)showSelectionCommands;	// 0x31eaeb4d
- (void)showSelectionCommandsAfterDelay:(double)delay;	// 0x31cf2685
- (void)startCaretBlinkIfNeeded;	// 0x31eaec79
- (void)textSelectionViewActivated:(id)activated;	// 0x31cc4615
- (void)touchCaretBlinkTimer;	// 0x31cc33ad
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x31eaefd9
- (BOOL)updateCalloutBarRects:(id)rects effectsWindow:(id)window;	// 0x31cf6c85
- (void)updateSelectionCommands;	// 0x31eaead5
- (void)updateSelectionDots;	// 0x31eaea45
- (void)updateSelectionRects;	// 0x31cc47c9
- (void)updateSelectionRectsIfNeeded;	// 0x31d09765
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x31eaeffd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x31eaed21
- (void)viewAnimate:(id)animate;	// 0x31cdc1b9
// declared property getter: - (BOOL)visible;	// 0x31cc32fd
- (void)willRotate:(id)rotate;	// 0x31eaee6d
- (void)windowDidResignOrBecomeKey;	// 0x31d04dc5
@end

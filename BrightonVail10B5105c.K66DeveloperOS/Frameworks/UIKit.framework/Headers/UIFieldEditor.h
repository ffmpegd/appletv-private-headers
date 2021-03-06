/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"
#import "UIAutoscrollContainer.h"

@class NSString, UIView, DOMDocument, DOMHTMLElement;
@protocol UITextInput;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument *_document;	// 612 = 0x264
	DOMHTMLElement *_textElement;	// 616 = 0x268
	DOMHTMLElement *_sizeElement;	// 620 = 0x26c
	NSString *_currentStyle;	// 624 = 0x270
	UIView<UITextInput> *_proxiedView;	// 628 = 0x274
	unsigned _baseWritingDirectionIsRTL : 1;	// 632 = 0x278
	unsigned _changingView : 1;	// 632 = 0x278
	unsigned _disableNotifications : 1;	// 632 = 0x278
	unsigned _delegateRespondsToFieldEditorDidChange : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldInsertText : 1;	// 632 = 0x278
	unsigned _delegateRespondsToShouldReplaceWithText : 1;	// 632 = 0x278
	unsigned _fieldEditorReentrancyGuard : 1;	// 632 = 0x278
	unsigned _clearOnDelete : 1;	// 632 = 0x278
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x34746199; S=0x347461e5; 
@property(assign) BOOL notificationsDisabled;	// G=0x34745b75; S=0x346ffadd; converted property
@property(retain) id style;	// G=0x3462eb4d; S=0x3462b765; converted property
+ (id)activeFieldEditor;	// 0x3466cd61
+ (id)excludedElementsForHTML;	// 0x34746245
+ (void)releaseSharedInstance;	// 0x345c8ee1
+ (id)sharedFieldEditor;	// 0x3462adad
- (id)initWithFrame:(CGRect)frame;	// 0x3462ae01
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x3484862d
- (id)_responderForBecomeFirstResponder;	// 0x3474506d
- (void)_selectNSRange:(NSRange)range;	// 0x3462cc99
- (void)_setTextElementAttributedText:(id)text;	// 0x34745499
- (void)_setTextElementString:(id)string;	// 0x3462b8cd
- (void)_setTextElementStyle:(id)style;	// 0x3462b7ed
- (id)_textSelectingContainer;	// 0x34638a9d
- (id)attributedText;	// 0x34745275
- (id)automaticallySelectedOverlay;	// 0x346ad3d1
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x34746199
- (void)autoscrollWillNotStart;	// 0x34746195
- (void)becomeFieldEditorForView:(id)view;	// 0x3462b245
- (void)beginSelectionChange;	// 0x3462cb35
- (CGRect)caretRect;	// 0x3474636d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x3462f75d
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x3474507d
- (CGRect)contentFrameForView:(id)view;	// 0x34746221
- (CGSize)contentSize;	// 0x34745819
- (id)customOverlayContainer;	// 0x346ad505
- (void)dealloc;	// 0x346ffaf5
- (void)deleteBackward;	// 0x347451a5
- (void)disableClearsOnInsertion;	// 0x3469f8a9
- (BOOL)hasMarkedText;	// 0x34745979
- (id)interactionAssistant;	// 0x3462b73d
- (BOOL)isEditing;	// 0x3469fb95
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x34663411
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x3466cb21
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x347450ed
- (BOOL)keyboardInputChanged:(id)changed;	// 0x34664cc9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x34639135
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x34745151
- (void)mouseDown:(GSEventRef)down;	// 0x347459ad
- (void)mouseDragged:(GSEventRef)dragged;	// 0x34745a0d
- (BOOL)mouseEventsChangeSelection;	// 0x34745b89
- (void)mouseUp:(GSEventRef)up;	// 0x34745a6d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x34745b75
- (id)proxiedView;	// 0x346371ed
- (BOOL)resignFirstResponder;	// 0x3466eaa5
- (void)resumeWithNotification:(id)notification;	// 0x34745aed
- (void)revealSelection;	// 0x3462e1dd
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x3462e219
- (void)scrollToMakeInlineHoleVisible;	// 0x346648ad
- (int)scrollXOffset;	// 0x3466ea4d
- (int)scrollYOffset;	// 0x3466ea79
- (void)selectAll;	// 0x34745025
- (void)selectionChanged;	// 0x3462cec5
- (NSRange)selectionRange;	// 0x3469f239
- (id)selectionView;	// 0x34745b8d
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x347456d1
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x347461e5
- (void)setBaseWritingDirection:(int)direction;	// 0x3462ead1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x3469b0f5
- (void)setFrame:(CGRect)frame;	// 0x3462b0b5
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x346ffadd
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x3462c4f9
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x3462c51d
- (void)setSelection:(NSRange)selection;	// 0x3462cad5
// converted property setter: - (void)setStyle:(id)style;	// 0x3462b765
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x3462bcf5
- (void)setTextSelectionBehavior:(int)behavior;	// 0x3462c5b1
- (id)sizeStyleForRect:(CGRect)rect;	// 0x3462c8ed
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x34745bb5
// converted property getter: - (id)style;	// 0x3462eb4d
- (id)text;	// 0x3462c9a5
- (id)textColorForCaretSelection;	// 0x34745211
- (id)textInputTraits;	// 0x3462b1cd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34745add
- (void)updateAutoscroll:(id)autoscroll;	// 0x34745db5
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x3469f731
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x34745899
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x3469f481
- (void)webViewDidChange:(id)webView;	// 0x34663e0d
@end


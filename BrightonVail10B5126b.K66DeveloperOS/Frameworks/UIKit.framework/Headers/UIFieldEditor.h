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
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x32cebe59; S=0x32cebea5; 
@property(assign) BOOL notificationsDisabled;	// G=0x32ceb835; S=0x32ca579d; converted property
@property(retain) id style;	// G=0x32bd480d; S=0x32bd1425; converted property
+ (id)activeFieldEditor;	// 0x32c12a21
+ (id)excludedElementsForHTML;	// 0x32cebf05
+ (void)releaseSharedInstance;	// 0x32b6eba1
+ (id)sharedFieldEditor;	// 0x32bd0a6d
- (id)initWithFrame:(CGRect)frame;	// 0x32bd0ac1
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x32dee365
- (id)_responderForBecomeFirstResponder;	// 0x32cead2d
- (void)_selectNSRange:(NSRange)range;	// 0x32bd2959
- (void)_setTextElementAttributedText:(id)text;	// 0x32ceb159
- (void)_setTextElementString:(id)string;	// 0x32bd158d
- (void)_setTextElementStyle:(id)style;	// 0x32bd14ad
- (id)_textSelectingContainer;	// 0x32bde75d
- (id)attributedText;	// 0x32ceaf35
- (id)automaticallySelectedOverlay;	// 0x32c53091
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x32cebe59
- (void)autoscrollWillNotStart;	// 0x32cebe55
- (void)becomeFieldEditorForView:(id)view;	// 0x32bd0f05
- (void)beginSelectionChange;	// 0x32bd27f5
- (CGRect)caretRect;	// 0x32cec02d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x32bd541d
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x32cead3d
- (CGRect)contentFrameForView:(id)view;	// 0x32cebee1
- (CGSize)contentSize;	// 0x32ceb4d9
- (id)customOverlayContainer;	// 0x32c531c5
- (void)dealloc;	// 0x32ca57b5
- (void)deleteBackward;	// 0x32ceae65
- (void)disableClearsOnInsertion;	// 0x32c45569
- (BOOL)hasMarkedText;	// 0x32ceb639
- (id)interactionAssistant;	// 0x32bd13fd
- (BOOL)isEditing;	// 0x32c45855
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x32c090d1
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x32c127e1
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x32ceadad
- (BOOL)keyboardInputChanged:(id)changed;	// 0x32c0a989
- (void)keyboardInputChangedSelection:(id)selection;	// 0x32bdedf5
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x32ceae11
- (void)mouseDown:(GSEventRef)down;	// 0x32ceb66d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32ceb6cd
- (BOOL)mouseEventsChangeSelection;	// 0x32ceb849
- (void)mouseUp:(GSEventRef)up;	// 0x32ceb72d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x32ceb835
- (id)proxiedView;	// 0x32bdcead
- (BOOL)resignFirstResponder;	// 0x32c14765
- (void)resumeWithNotification:(id)notification;	// 0x32ceb7ad
- (void)revealSelection;	// 0x32bd3e9d
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x32bd3ed9
- (void)scrollToMakeInlineHoleVisible;	// 0x32c0a56d
- (int)scrollXOffset;	// 0x32c1470d
- (int)scrollYOffset;	// 0x32c14739
- (void)selectAll;	// 0x32ceace5
- (void)selectionChanged;	// 0x32bd2b85
- (NSRange)selectionRange;	// 0x32c44ef9
- (id)selectionView;	// 0x32ceb84d
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x32ceb391
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x32cebea5
- (void)setBaseWritingDirection:(int)direction;	// 0x32bd4791
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32c40db5
- (void)setFrame:(CGRect)frame;	// 0x32bd0d75
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x32ca579d
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x32bd21b9
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x32bd21dd
- (void)setSelection:(NSRange)selection;	// 0x32bd2795
// converted property setter: - (void)setStyle:(id)style;	// 0x32bd1425
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x32bd19b5
- (void)setTextSelectionBehavior:(int)behavior;	// 0x32bd2271
- (id)sizeStyleForRect:(CGRect)rect;	// 0x32bd25ad
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x32ceb875
// converted property getter: - (id)style;	// 0x32bd480d
- (id)text;	// 0x32bd2665
- (id)textColorForCaretSelection;	// 0x32ceaed1
- (id)textInputTraits;	// 0x32bd0e8d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32ceb79d
- (void)updateAutoscroll:(id)autoscroll;	// 0x32ceba75
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x32c453f1
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x32ceb559
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x32c45141
- (void)webViewDidChange:(id)webView;	// 0x32c09acd
@end

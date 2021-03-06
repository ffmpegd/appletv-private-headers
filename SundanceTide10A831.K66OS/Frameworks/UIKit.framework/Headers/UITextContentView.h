/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextInput.h"
#import "UITextLinkInteraction.h"

@class UIDelayedAction, UIWebDocumentView, UITextRange, NSDictionary, UITextPosition, NSAttributedString, WebFrame, UIFont, UIColor, UITextInteractionAssistant, DOMHTMLElement, NSString;
@protocol UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <UITextInput, UITextLinkInteraction, UITextInputTraits> {
	id m_delegate;	// 84 = 0x54
	WebFrame *m_frame;	// 88 = 0x58
	DOMHTMLElement *m_body;	// 92 = 0x5c
	int m_marginTop;	// 96 = 0x60
	UIDelayedAction *m_scrollToVisibleTimer;	// 100 = 0x64
	UIEdgeInsets m_selectionInset;	// 104 = 0x68
	float m_bottomBufferHeight;	// 120 = 0x78
	BOOL m_editable;	// 124 = 0x7c
	BOOL m_editing;	// 125 = 0x7d
	BOOL m_becomesEditableWithGestures;	// 126 = 0x7e
	BOOL m_becomingFirstResponder;	// 127 = 0x7f
	BOOL m_reentrancyGuard;	// 128 = 0x80
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 129 = 0x81
	BOOL m_hasExplicitTextAlignment;	// 130 = 0x82
	BOOL m_allowsEditingTextAttributes;	// 131 = 0x83
	BOOL m_usesAttributedText;	// 132 = 0x84
	UITextInteractionAssistant *m_interactionAssistant;	// 136 = 0x88
	UIWebDocumentView *m_webView;	// 140 = 0x8c
	UIFont *m_font;	// 144 = 0x90
	UIColor *m_textColor;	// 148 = 0x94
	int m_textAlignment;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x31eb9af1; S=0x31d31549; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x31eb9b01; S=0x31eb9ea1; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x31eba549; S=0x31c5be99; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x31ebaf81; 
@property(assign) float bottomBufferHeight;	// G=0x31ebacf1; S=0x31ebacdd; converted property
@property(assign) unsigned dataDetectorTypes;	// G=0x31cbb69d; S=0x31c5a175; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x31c5bd91; S=0x31c5bfd1; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x31c5a9e9; S=0x31d05809; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x31cbb6c1; S=0x31d05629; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x31d062f9; 
@property(retain, nonatomic) UIFont *font;	// G=0x31eba0e9; S=0x31c5b8d9; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x31ebb009; S=0x31ebb031; 
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x31d02ff9; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x31eba559; S=0x31eba569; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x31c5acb5; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x31ebaef5; S=0x31ebaf1d; 
@property(assign) CGPoint offset;	// G=0x31ebad15; S=0x31ebad11; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x31ebad35; S=0x31ebad31; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x31c5c351; S=0x31c59e99; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x31d02f71; S=0x31eba489; 
@property(copy) UITextRange *selectedTextRange;	// G=0x31d03011; S=0x31d3e821; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x31ebb299; S=0x31ebb2c1; 
@property(assign) int selectionGranularity;	// G=0x31ebb335; S=0x31d063d5; converted property
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x31d072b1; S=0x31d3152d; @synthesize=m_selectionInset
@property(assign) BOOL showScrollerIndicators;	// G=0x31ebad09; S=0x31ebad05; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x31eba1e9; S=0x31cbb451; 
@property(assign, nonatomic) int textAlignment;	// G=0x31eba449; S=0x31eba459; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x31eba121; S=0x31eba159; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x31c5ac75; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x31c5ac9d; converted property
- (id)initWithCoder:(id)coder;	// 0x31eb87d1
- (id)initWithFrame:(CGRect)frame;	// 0x31c56db9
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x31d314d9
- (void)_addShortcut:(id)shortcut;	// 0x31eb9285
- (unsigned)_allowedLinkTypes;	// 0x31eba9c5
- (id)_automationValue;	// 0x31ebb361
- (void)_define:(id)define;	// 0x31eb9265
- (void)_didScroll;	// 0x31d3f6f5
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x31ebb2ed
- (void)_hideSelectionCommands;	// 0x31eb9095
- (id)_keyboardResponder;	// 0x31d04e89
- (void)_populateArchivedSubviews:(id)subviews;	// 0x31eb8a09
- (void)_promptForReplace:(id)replace;	// 0x31eb922d
- (id)_proxyTextInput;	// 0x31c5ac21
- (void)_removeAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x31eb9cf1
- (void)_removeTextViewPropertiesFromText:(id)text;	// 0x31eb9d79
- (void)_scrollViewDidEndDecelerating;	// 0x31eb8d49
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x31eb8d45
- (void)_scrollViewWillBeginDragging;	// 0x31eb8d41
- (void)_showTextStyleOptions:(id)options;	// 0x31eb9305
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x31eb9af1
// declared property getter: - (id)attributedText;	// 0x31eb9b01
- (id)automaticallySelectedOverlay;	// 0x31d468d5
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x31ebb0bd
- (BOOL)becomeFirstResponder;	// 0x31d030c9
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x31eba549
- (void)beginSelectionChange;	// 0x31d059bd
// declared property getter: - (id)beginningOfDocument;	// 0x31ebaf81
// converted property getter: - (float)bottomBufferHeight;	// 0x31ebacf1
- (BOOL)canBecomeFirstResponder;	// 0x31d03345
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x31eb9325
- (BOOL)canResignFirstResponder;	// 0x31d40255
- (void)cancelAutoscroll;	// 0x31eb8dc9
- (void)cancelDataDetectorsWithWebLock;	// 0x31d32c69
- (void)cancelInteractionWithLink;	// 0x31ebaa6d
- (CGRect)caretRectForPosition:(id)position;	// 0x31d06321
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x31eb8e11
- (unsigned short)characterBeforeCaretSelection;	// 0x31eb8fed
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x31ebb225
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x31ebb08d
- (void)clearScrollToVisibleTimer;	// 0x31d072d9
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x31eb8ec9
- (id)closestPositionToPoint:(CGPoint)point;	// 0x31d06225
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x31ebb1a9
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x31c56fe9
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x31d062c9
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x31eb8c1d
- (id)contentAsAttributedString;	// 0x31eb9a2d
- (id)contentAsHTMLString;	// 0x31c5dec5
- (void)copy:(id)copy;	// 0x31eb9179
- (void)cut:(id)cut;	// 0x31eb9159
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x31cbb69d
- (void)dealloc;	// 0x31d32a85
// declared property getter: - (id)delegate;	// 0x31c5bd91
- (void)deleteBackward;	// 0x31ebad41
- (void)didMoveToSuperview;	// 0x31c5c2dd
- (void)displayScrollerIndicators;	// 0x31ebad0d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x31eb94e9
- (void)encodeWithCoder:(id)coder;	// 0x31eb8a5d
// declared property getter: - (id)endOfDocument;	// 0x31d062f9
- (void)endSelectionChange;	// 0x31d05cdd
- (void)ensureSelection;	// 0x31d056bd
- (CGRect)firstRectForRange:(id)range;	// 0x31ebb11d
// declared property getter: - (id)font;	// 0x31eba0e9
- (id)fontForCaretSelection;	// 0x31eb9075
- (void)forwardInvocation:(id)invocation;	// 0x31c5bf19
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x31ebae51
- (BOOL)hasMarkedText;	// 0x31eb8f61
- (BOOL)hasSelection;	// 0x31eb8d85
- (BOOL)hasText;	// 0x31c5c385
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31d02fad
// declared property getter: - (id)inputDelegate;	// 0x31ebb009
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x31ebad95
- (id)insertDictationResultPlaceholder;	// 0x31ebadf9
- (void)insertText:(id)text;	// 0x31ebad69
// converted property getter: - (id)interactionAssistant;	// 0x31d02ff9
// declared property getter: - (BOOL)isEditable;	// 0x31c5a9e9
// declared property getter: - (BOOL)isEditing;	// 0x31cbb6c1
- (BOOL)isFirstResponder;	// 0x31c5def5
- (BOOL)isInteractingWithLink;	// 0x31ebaaad
- (BOOL)isSMSTextView;	// 0x31d05bad
- (void)keyboardDidShow:(id)keyboard;	// 0x31ce9401
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x31d3e931
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x31ebaaf9
- (BOOL)keyboardInputChanged:(id)changed;	// 0x31d09855
- (void)keyboardInputChangedSelection:(id)selection;	// 0x31d053e9
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x31ebab61
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x31eb9139
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x31eb9119
// converted property getter: - (int)marginTop;	// 0x31eba559
- (id)markedText;	// 0x31eb8f8d
// declared property getter: - (id)markedTextRange;	// 0x31c5acb5
// declared property getter: - (id)markedTextStyle;	// 0x31ebaef5
- (id)metadataDictionariesForDictationResults;	// 0x31ebae95
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31c5bec9
- (BOOL)mightHaveLinks;	// 0x31eba9a9
// converted property getter: - (CGPoint)offset;	// 0x31ebad15
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x31ebafd9
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x31eb8f41
- (void)paste:(id)paste;	// 0x31eb9199
- (void)performBecomeEditableTasks;	// 0x31d05639
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x31d0706d
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x31ebafa9
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x31d05f79
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x31ebb05d
- (void)recalculateStyle;	// 0x31c5b989
- (CGRect)rectContainingCaretSelection;	// 0x31eb9041
- (CGRect)rectForScrollToVisible;	// 0x31eb9711
- (CGRect)rectForSelection:(NSRange)selection;	// 0x31eb9675
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x31c5a081
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x31ebae21
- (void)removeFromSuperview;	// 0x31d32a01
- (void)replace:(id)replace;	// 0x31eb920d
- (void)replaceRange:(id)range withText:(id)text;	// 0x31ebaec1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x31eba95d
- (BOOL)resignFirstResponder;	// 0x31cbb821
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x31eba835
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x31d07185
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x31d05b5d
- (void)scrollToVisibleTimerAction;	// 0x31d07039
- (id)scrollView;	// 0x31c5bdc5
// converted property getter: - (BOOL)scrollingEnabled;	// 0x31ebad35
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x31c5c351
- (void)select:(id)select;	// 0x31eb91b9
- (void)selectAll;	// 0x31eb93b1
- (void)selectAll:(id)all;	// 0x31eb91e1
// declared property getter: - (NSRange)selectedRange;	// 0x31d02f71
- (id)selectedText;	// 0x31eb8e8d
// declared property getter: - (id)selectedTextRange;	// 0x31d03011
// declared property getter: - (int)selectionAffinity;	// 0x31ebb299
// converted property getter: - (int)selectionGranularity;	// 0x31ebb335
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x31d072b1
- (NSRange)selectionRange;	// 0x31eb9011
- (id)selectionRectsForRange:(id)range;	// 0x31d07319
- (id)selectionView;	// 0x31eb8de9
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x31d31549
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x31ebad39
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x31ebad2d
// declared property setter: - (void)setAttributedText:(id)text;	// 0x31eb9ea1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x31ebb0ed
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x31c5be99
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x31ebacdd
- (void)setContentToAttributedString:(id)attributedString;	// 0x31eb9981
- (void)setContentToHTMLString:(id)htmlstring;	// 0x31eb97e1
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x31c5a175
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c5bfd1
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x31d05809
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x31d05629
// declared property setter: - (void)setFont:(id)font;	// 0x31c5b8d9
- (void)setFrame:(CGRect)frame;	// 0x31c56e0d
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x31ebb031
// converted property setter: - (void)setMarginTop:(int)top;	// 0x31eba569
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x31ebaf49
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x31ebaf1d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x31ebad11
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x31ebad3d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x31ebad31
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x31c59e99
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x31eba489
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x31d3e821
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x31ebb2c1
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x31c59e31
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x31d063d5
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x31d3152d
- (void)setSelectionToEnd;	// 0x31d05731
- (void)setSelectionToStart;	// 0x31eb9599
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x31eb9545
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x31ebad05
// declared property setter: - (void)setText:(id)text;	// 0x31cbb451
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x31eba459
// declared property setter: - (void)setTextColor:(id)color;	// 0x31eba159
- (BOOL)shouldStartDataDetectors;	// 0x31cbb6e5
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x31ebad09
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x31eb8da9
- (void)startDataDetectorsWithWebLock;	// 0x31eba8f1
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31ebaa0d
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31ebaa8d
- (id)styleString;	// 0x31c5749d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x31eb93d9
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x31eba9ed
// declared property getter: - (id)text;	// 0x31eba1e9
// declared property getter: - (int)textAlignment;	// 0x31eba449
// declared property getter: - (id)textColor;	// 0x31eba121
- (id)textInRange:(id)range;	// 0x31d06c7d
- (id)textInputTraits;	// 0x31c5bfa1
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x31d06299
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x31c59c0d
- (void)toggleBoldface:(id)boldface;	// 0x31eb92a5
- (void)toggleItalics:(id)italics;	// 0x31eb92c5
- (void)toggleUnderline:(id)underline;	// 0x31eb92e5
// declared property getter: - (id)tokenizer;	// 0x31c5ac75
- (void)touchScrollToVisibleTimer;	// 0x31d05c01
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x31d05c21
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31eb8d11
- (id)undoManager;	// 0x31eb90dd
- (id)undoManagerForWebView:(id)webView;	// 0x31eb90cd
- (void)unmarkText;	// 0x31d402c9
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x31c5a0f1
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31ebaa2d
- (void)updateSelection;	// 0x31eb8d4d
- (void)updateWebViewObjects;	// 0x31c59cf1
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x31ebaa4d
- (CGRect)visibleRect;	// 0x31eba591
- (CGRect)visibleTextRect;	// 0x31eba755
// converted property getter: - (id)webView;	// 0x31c5ac9d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x31ebabe9
- (void)webViewDidChange:(id)webView;	// 0x31c5b9f9
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x31ebaad1
- (id)wordContainingCaretSelection;	// 0x31eb8fad
- (id)wordRangeContainingCaretSelection;	// 0x31eb8fcd
@end


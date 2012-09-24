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
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x30b93af1; S=0x30a0b551; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x30b93b01; S=0x30b93ea1; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x30b94549; S=0x30935ea1; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x30b94f81; 
@property(assign) float bottomBufferHeight;	// G=0x30b94cf1; S=0x30b94cdd; converted property
@property(assign) unsigned dataDetectorTypes;	// G=0x309956a5; S=0x3093417d; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x30935d99; S=0x30935fd9; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x309349f1; S=0x309df811; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x309956c9; S=0x309df631; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x309e0301; 
@property(retain, nonatomic) UIFont *font;	// G=0x30b940e9; S=0x309358e1; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x30b95009; S=0x30b95031; 
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x309dd001; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x30b94559; S=0x30b94569; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x30934cbd; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x30b94ef5; S=0x30b94f1d; 
@property(assign) CGPoint offset;	// G=0x30b94d15; S=0x30b94d11; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x30b94d35; S=0x30b94d31; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x30936359; S=0x30933ea1; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x309dcf79; S=0x30b94489; 
@property(copy) UITextRange *selectedTextRange;	// G=0x309dd019; S=0x30a18829; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x30b95299; S=0x30b952c1; 
@property(assign) int selectionGranularity;	// G=0x30b95335; S=0x309e03dd; converted property
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x309e12b9; S=0x30a0b535; @synthesize=m_selectionInset
@property(assign) BOOL showScrollerIndicators;	// G=0x30b94d09; S=0x30b94d05; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x30b941e9; S=0x30995459; 
@property(assign, nonatomic) int textAlignment;	// G=0x30b94449; S=0x30b94459; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30b94121; S=0x30b94159; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x30934c7d; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x30934ca5; converted property
- (id)initWithCoder:(id)coder;	// 0x30b927d1
- (id)initWithFrame:(CGRect)frame;	// 0x30930dc1
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x30a0b4e1
- (void)_addShortcut:(id)shortcut;	// 0x30b93285
- (unsigned)_allowedLinkTypes;	// 0x30b949c5
- (id)_automationValue;	// 0x30b95361
- (void)_define:(id)define;	// 0x30b93265
- (void)_didScroll;	// 0x30a196fd
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x30b952ed
- (void)_hideSelectionCommands;	// 0x30b93095
- (id)_keyboardResponder;	// 0x309dee91
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30b92a09
- (void)_promptForReplace:(id)replace;	// 0x30b9322d
- (id)_proxyTextInput;	// 0x30934c29
- (void)_removeAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x30b93cf1
- (void)_removeTextViewPropertiesFromText:(id)text;	// 0x30b93d79
- (void)_scrollViewDidEndDecelerating;	// 0x30b92d49
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x30b92d45
- (void)_scrollViewWillBeginDragging;	// 0x30b92d41
- (void)_showTextStyleOptions:(id)options;	// 0x30b93305
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x30b93af1
// declared property getter: - (id)attributedText;	// 0x30b93b01
- (id)automaticallySelectedOverlay;	// 0x30a208dd
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x30b950bd
- (BOOL)becomeFirstResponder;	// 0x309dd0d1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x30b94549
- (void)beginSelectionChange;	// 0x309df9c5
// declared property getter: - (id)beginningOfDocument;	// 0x30b94f81
// converted property getter: - (float)bottomBufferHeight;	// 0x30b94cf1
- (BOOL)canBecomeFirstResponder;	// 0x309dd34d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30b93325
- (BOOL)canResignFirstResponder;	// 0x30a1a25d
- (void)cancelAutoscroll;	// 0x30b92dc9
- (void)cancelDataDetectorsWithWebLock;	// 0x30a0cc71
- (void)cancelInteractionWithLink;	// 0x30b94a6d
- (CGRect)caretRectForPosition:(id)position;	// 0x309e0329
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x30b92e11
- (unsigned short)characterBeforeCaretSelection;	// 0x30b92fed
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x30b95225
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x30b9508d
- (void)clearScrollToVisibleTimer;	// 0x309e12e1
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x30b92ec9
- (id)closestPositionToPoint:(CGPoint)point;	// 0x309e022d
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x30b951a9
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x30930ff1
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x309e02d1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x30b92c1d
- (id)contentAsAttributedString;	// 0x30b93a2d
- (id)contentAsHTMLString;	// 0x30937ecd
- (void)copy:(id)copy;	// 0x30b93179
- (void)cut:(id)cut;	// 0x30b93159
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x309956a5
- (void)dealloc;	// 0x30a0ca8d
// declared property getter: - (id)delegate;	// 0x30935d99
- (void)deleteBackward;	// 0x30b94d41
- (void)didMoveToSuperview;	// 0x309362e5
- (void)displayScrollerIndicators;	// 0x30b94d0d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x30b934e9
- (void)encodeWithCoder:(id)coder;	// 0x30b92a5d
// declared property getter: - (id)endOfDocument;	// 0x309e0301
- (void)endSelectionChange;	// 0x309dfce5
- (void)ensureSelection;	// 0x309df6c5
- (CGRect)firstRectForRange:(id)range;	// 0x30b9511d
// declared property getter: - (id)font;	// 0x30b940e9
- (id)fontForCaretSelection;	// 0x30b93075
- (void)forwardInvocation:(id)invocation;	// 0x30935f21
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x30b94e51
- (BOOL)hasMarkedText;	// 0x30b92f61
- (BOOL)hasSelection;	// 0x30b92d85
- (BOOL)hasText;	// 0x3093638d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x309dcfb5
// declared property getter: - (id)inputDelegate;	// 0x30b95009
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x30b94d95
- (id)insertDictationResultPlaceholder;	// 0x30b94df9
- (void)insertText:(id)text;	// 0x30b94d69
// converted property getter: - (id)interactionAssistant;	// 0x309dd001
// declared property getter: - (BOOL)isEditable;	// 0x309349f1
// declared property getter: - (BOOL)isEditing;	// 0x309956c9
- (BOOL)isFirstResponder;	// 0x30937efd
- (BOOL)isInteractingWithLink;	// 0x30b94aad
- (BOOL)isSMSTextView;	// 0x309dfbb5
- (void)keyboardDidShow:(id)keyboard;	// 0x309c3409
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x30a18939
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x30b94af9
- (BOOL)keyboardInputChanged:(id)changed;	// 0x309e385d
- (void)keyboardInputChangedSelection:(id)selection;	// 0x309df3f1
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30b94b61
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x30b93139
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x30b93119
// converted property getter: - (int)marginTop;	// 0x30b94559
- (id)markedText;	// 0x30b92f8d
// declared property getter: - (id)markedTextRange;	// 0x30934cbd
// declared property getter: - (id)markedTextStyle;	// 0x30b94ef5
- (id)metadataDictionariesForDictationResults;	// 0x30b94e95
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30935ed1
- (BOOL)mightHaveLinks;	// 0x30b949a9
// converted property getter: - (CGPoint)offset;	// 0x30b94d15
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x30b94fd9
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x30b92f41
- (void)paste:(id)paste;	// 0x30b93199
- (void)performBecomeEditableTasks;	// 0x309df641
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x309e1075
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x30b94fa9
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x309dff81
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x30b9505d
- (void)recalculateStyle;	// 0x30935991
- (CGRect)rectContainingCaretSelection;	// 0x30b93041
- (CGRect)rectForScrollToVisible;	// 0x30b93711
- (CGRect)rectForSelection:(NSRange)selection;	// 0x30b93675
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x30934089
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x30b94e21
- (void)removeFromSuperview;	// 0x30a0ca09
- (void)replace:(id)replace;	// 0x30b9320d
- (void)replaceRange:(id)range withText:(id)text;	// 0x30b94ec1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x30b9495d
- (BOOL)resignFirstResponder;	// 0x30995829
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x30b94835
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x309e118d
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x309dfb65
- (void)scrollToVisibleTimerAction;	// 0x309e1041
- (id)scrollView;	// 0x30935dcd
// converted property getter: - (BOOL)scrollingEnabled;	// 0x30b94d35
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x30936359
- (void)select:(id)select;	// 0x30b931b9
- (void)selectAll;	// 0x30b933b1
- (void)selectAll:(id)all;	// 0x30b931e1
// declared property getter: - (NSRange)selectedRange;	// 0x309dcf79
- (id)selectedText;	// 0x30b92e8d
// declared property getter: - (id)selectedTextRange;	// 0x309dd019
// declared property getter: - (int)selectionAffinity;	// 0x30b95299
// converted property getter: - (int)selectionGranularity;	// 0x30b95335
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x309e12b9
- (NSRange)selectionRange;	// 0x30b93011
- (id)selectionRectsForRange:(id)range;	// 0x309e1321
- (id)selectionView;	// 0x30b92de9
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x30a0b551
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30b94d39
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x30b94d2d
// declared property setter: - (void)setAttributedText:(id)text;	// 0x30b93ea1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x30b950ed
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x30935ea1
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30b94cdd
- (void)setContentToAttributedString:(id)attributedString;	// 0x30b93981
- (void)setContentToHTMLString:(id)htmlstring;	// 0x30b937e1
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3093417d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30935fd9
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x309df811
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x309df631
// declared property setter: - (void)setFont:(id)font;	// 0x309358e1
- (void)setFrame:(CGRect)frame;	// 0x30930e15
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x30b95031
// converted property setter: - (void)setMarginTop:(int)top;	// 0x30b94569
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x30b94f49
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x30b94f1d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x30b94d11
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x30b94d3d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x30b94d31
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x30933ea1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x30b94489
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x30a18829
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x30b952c1
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x30933e39
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x309e03dd
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x30a0b535
- (void)setSelectionToEnd;	// 0x309df739
- (void)setSelectionToStart;	// 0x30b93599
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30b93545
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x30b94d05
// declared property setter: - (void)setText:(id)text;	// 0x30995459
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30b94459
// declared property setter: - (void)setTextColor:(id)color;	// 0x30b94159
- (BOOL)shouldStartDataDetectors;	// 0x309956ed
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x30b94d09
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x30b92da9
- (void)startDataDetectorsWithWebLock;	// 0x30b948f1
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30b94a0d
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30b94a8d
- (id)styleString;	// 0x309314a5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x30b933d9
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x30b949ed
// declared property getter: - (id)text;	// 0x30b941e9
// declared property getter: - (int)textAlignment;	// 0x30b94449
// declared property getter: - (id)textColor;	// 0x30b94121
- (id)textInRange:(id)range;	// 0x309e0c85
- (id)textInputTraits;	// 0x30935fa9
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x309e02a1
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x30933c15
- (void)toggleBoldface:(id)boldface;	// 0x30b932a5
- (void)toggleItalics:(id)italics;	// 0x30b932c5
- (void)toggleUnderline:(id)underline;	// 0x30b932e5
// declared property getter: - (id)tokenizer;	// 0x30934c7d
- (void)touchScrollToVisibleTimer;	// 0x309dfc09
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x309dfc29
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30b92d11
- (id)undoManager;	// 0x30b930dd
- (id)undoManagerForWebView:(id)webView;	// 0x30b930cd
- (void)unmarkText;	// 0x30a1a2d1
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x309340f9
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30b94a2d
- (void)updateSelection;	// 0x30b92d4d
- (void)updateWebViewObjects;	// 0x30933cf9
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30b94a4d
- (CGRect)visibleRect;	// 0x30b94591
- (CGRect)visibleTextRect;	// 0x30b94755
// converted property getter: - (id)webView;	// 0x30934ca5
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30b94be9
- (void)webViewDidChange:(id)webView;	// 0x30935a01
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x30b94ad1
- (id)wordContainingCaretSelection;	// 0x30b92fad
- (id)wordRangeContainingCaretSelection;	// 0x30b92fcd
@end

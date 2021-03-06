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

@class DOMHTMLElement, UITextRange, NSDictionary, UITextPosition, UIFont, UIColor, UITextInteractionAssistant, NSString, WebFrame, UIDelayedAction, NSAttributedString, UIWebDocumentView;
@protocol UITextInputDelegate, UITextContentViewDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <UITextInput, UITextLinkInteraction, UITextInputTraits> {
@private
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
@property(assign, nonatomic) BOOL allowsEditingTextAttributes;	// G=0x30345ed9; S=0x30345eb1; 
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x30345ee9; S=0x303462a1; 
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x30346791; S=0x30110b61; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x303471cd; 
@property(assign) float bottomBufferHeight;	// G=0x30346ed1; S=0x30346ebd; converted property
@property(assign) unsigned dataDetectorTypes;	// G=0x30159dcd; S=0x30110245; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x301109bd; S=0x30110cb5; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x30110311; S=0x30162969; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x30159df1; S=0x30198501; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x303471f5; 
@property(retain, nonatomic) UIFont *font;	// G=0x30346591; S=0x30110371; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x303472dd; S=0x30347305; 
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x301986d9; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x303467a1; S=0x303467b1; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x303470f1; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x30347119; S=0x30347141; 
@property(assign) CGPoint offset;	// G=0x30346ef5; S=0x30346ef1; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x30346f15; S=0x30346f11; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x30111155; S=0x3010f4fd; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x30196141; S=0x303466d1; 
@property(copy) UITextRange *selectedTextRange;	// G=0x3019657d; S=0x301d9d95; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x3034756d; S=0x30347595; 
@property(assign) int selectionGranularity;	// G=0x30347609; S=0x301986e9; converted property
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x30176f5d; S=0x301d70f1; @synthesize=m_selectionInset
@property(assign) BOOL showScrollerIndicators;	// G=0x30346ee9; S=0x30346ee5; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x30111909; S=0x30159b21; 
@property(assign, nonatomic) int textAlignment;	// G=0x30346691; S=0x303466a1; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x303465c9; S=0x30346601; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x301986b1; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x30110b75; converted property
- (id)initWithCoder:(id)coder;	// 0x30344d01
- (id)initWithFrame:(CGRect)frame;	// 0x3010cc69
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x301d70a1
- (void)_addShortcut:(id)shortcut;	// 0x30345979
- (unsigned)_allowedLinkTypes;	// 0x30346c0d
- (id)_automationValue;	// 0x30347635
- (void)_define:(id)define;	// 0x30345959
- (void)_didScroll;	// 0x301d8665
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x303475c1
- (void)_hideSelectionCommands;	// 0x3034578d
- (id)_keyboardResponder;	// 0x30197cd1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30344ef5
- (void)_promptForReplace:(id)replace;	// 0x30345921
- (id)_proxyTextInput;	// 0x30346f21
- (void)_removeAttribute:(id)attribute fromString:(id)string andSetPropertyWith:(SEL)with usingValueClass:(Class)aClass;	// 0x303460d9
- (void)_removeTextViewPropertiesFromText:(id)text;	// 0x30346161
- (void)_scrollViewDidEndDecelerating;	// 0x301d8689
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x301d8685
- (void)_scrollViewWillBeginDragging;	// 0x301d8661
- (void)_showTextStyleOptions:(id)options;	// 0x303459f9
// declared property getter: - (BOOL)allowsEditingTextAttributes;	// 0x30345ed9
// declared property getter: - (id)attributedText;	// 0x30345ee9
- (id)automaticallySelectedOverlay;	// 0x303451b5
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x30347391
- (BOOL)becomeFirstResponder;	// 0x30196719
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x30346791
- (void)beginSelectionChange;	// 0x30162b1d
// declared property getter: - (id)beginningOfDocument;	// 0x303471cd
// converted property getter: - (float)bottomBufferHeight;	// 0x30346ed1
- (BOOL)canBecomeFirstResponder;	// 0x30196995
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x301db091
- (BOOL)canResignFirstResponder;	// 0x301dd68d
- (void)cancelAutoscroll;	// 0x30345289
- (void)cancelDataDetectorsWithWebLock;	// 0x301d8919
- (void)cancelInteractionWithLink;	// 0x30346cb5
- (CGRect)caretRectForPosition:(id)position;	// 0x301965a5
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x303452a9
- (unsigned short)characterBeforeCaretSelection;	// 0x303456e5
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x303474f9
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x30347361
- (void)clearScrollToVisibleTimer;	// 0x301773e9
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x303455c1
- (id)closestPositionToPoint:(CGPoint)point;	// 0x30198609
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x3034747d
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3010ce95
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x3034727d
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x303450c5
- (id)contentAsAttributedString;	// 0x30345ded
- (id)contentAsHTMLString;	// 0x301118dd
- (void)copy:(id)copy;	// 0x30345871
- (void)cut:(id)cut;	// 0x30345851
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x30159dcd
- (void)dealloc;	// 0x301d8731
// declared property getter: - (id)delegate;	// 0x301109bd
- (void)deleteBackward;	// 0x30346f71
- (void)didMoveToSuperview;	// 0x301110dd
- (void)displayScrollerIndicators;	// 0x30346eed
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x30345a45
- (void)encodeWithCoder:(id)coder;	// 0x30344f49
// declared property getter: - (id)endOfDocument;	// 0x303471f5
- (void)endSelectionChange;	// 0x301634a5
- (void)ensureSelection;	// 0x30198595
- (CGRect)firstRectForRange:(id)range;	// 0x303473f1
// declared property getter: - (id)font;	// 0x30346591
- (id)fontForCaretSelection;	// 0x3034576d
- (void)forwardInvocation:(id)invocation;	// 0x30110bf9
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x3034704d
- (BOOL)hasMarkedText;	// 0x30345659
- (BOOL)hasSelection;	// 0x30345245
- (BOOL)hasText;	// 0x300b4ded
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3019652d
// declared property getter: - (id)inputDelegate;	// 0x303472dd
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x30346fc5
- (id)insertDictationResultPlaceholder;	// 0x30346ff5
- (void)insertText:(id)text;	// 0x30346f99
// converted property getter: - (id)interactionAssistant;	// 0x301986d9
// declared property getter: - (BOOL)isEditable;	// 0x30110311
// declared property getter: - (BOOL)isEditing;	// 0x30159df1
- (BOOL)isFirstResponder;	// 0x301966bd
- (BOOL)isInteractingWithLink;	// 0x30346cf5
- (BOOL)isSMSTextView;	// 0x30163105
- (void)keyboardDidShow:(id)keyboard;	// 0x30177b55
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x301d9e51
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x301da519
- (BOOL)keyboardInputChanged:(id)changed;	// 0x3019ac85
- (void)keyboardInputChangedSelection:(id)selection;	// 0x301982c9
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x30346d41
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x30345831
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x30345811
// converted property getter: - (int)marginTop;	// 0x303467a1
- (id)markedText;	// 0x30345685
// declared property getter: - (id)markedTextRange;	// 0x303470f1
// declared property getter: - (id)markedTextStyle;	// 0x30347119
- (id)metadataDictionariesForDictationResults;	// 0x30347091
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30110ba9
- (BOOL)mightHaveLinks;	// 0x30346bf1
// converted property getter: - (CGPoint)offset;	// 0x30346ef5
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x303472ad
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x30345639
- (void)paste:(id)paste;	// 0x30345891
- (void)performBecomeEditableTasks;	// 0x30198511
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x30176d35
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x3034724d
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x3034721d
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x30347331
- (void)recalculateStyle;	// 0x30110421
- (CGRect)rectContainingCaretSelection;	// 0x30345739
- (CGRect)rectForScrollToVisible;	// 0x30345c71
- (CGRect)rectForSelection:(NSRange)selection;	// 0x30345bd5
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3010f6e5
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x3034701d
- (void)removeFromSuperview;	// 0x301d86bd
- (void)replace:(id)replace;	// 0x30345901
- (void)replaceRange:(id)range withText:(id)text;	// 0x303470bd
- (void)resetDataDetectorsResultsWithWebLock;	// 0x30346ba5
- (BOOL)resignFirstResponder;	// 0x3015d1b1
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x30346a7d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x30176e31
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x301630b5
- (void)scrollToVisibleTimerAction;	// 0x30176d01
- (id)scrollView;	// 0x30110a89
// converted property getter: - (BOOL)scrollingEnabled;	// 0x30346f15
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x30111155
- (void)select:(id)select;	// 0x303458b1
- (void)selectAll;	// 0x30345a1d
- (void)selectAll:(id)all;	// 0x303458d9
// declared property getter: - (NSRange)selectedRange;	// 0x30196141
- (id)selectedText;	// 0x30345585
// declared property getter: - (id)selectedTextRange;	// 0x3019657d
// declared property getter: - (int)selectionAffinity;	// 0x3034756d
// converted property getter: - (int)selectionGranularity;	// 0x30347609
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x30176f5d
- (NSRange)selectionRange;	// 0x30345709
- (id)selectionRectsForRange:(id)range;	// 0x30345321
- (id)selectionView;	// 0x3010f959
// declared property setter: - (void)setAllowsEditingTextAttributes:(BOOL)attributes;	// 0x30345eb1
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x30346f19
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x30346f0d
// declared property setter: - (void)setAttributedText:(id)text;	// 0x303462a1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x303473c1
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x30110b61
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x30346ebd
- (void)setContentToAttributedString:(id)attributedString;	// 0x30345d41
- (void)setContentToHTMLString:(id)htmlstring;	// 0x301626f1
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x30110245
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30110cb5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x30162969
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x30198501
// declared property setter: - (void)setFont:(id)font;	// 0x30110371
- (void)setFrame:(CGRect)frame;	// 0x3010ccbd
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x30347305
// converted property setter: - (void)setMarginTop:(int)top;	// 0x303467b1
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x3034716d
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x30347141
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x30346ef1
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x30346f1d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x30346f11
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x3010f4fd
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x303466d1
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x301d9d95
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x30347595
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x3010f491
// converted property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x301986e9
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x301d70f1
- (void)setSelectionToEnd;	// 0x30162891
- (void)setSelectionToStart;	// 0x30345af9
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x30345aa5
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x30346ee5
// declared property setter: - (void)setText:(id)text;	// 0x30159b21
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x303466a1
// declared property setter: - (void)setTextColor:(id)color;	// 0x30346601
- (BOOL)shouldStartDataDetectors;	// 0x30159e15
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x30346ee9
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x30345269
- (void)startDataDetectorsWithWebLock;	// 0x30346b39
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30346c55
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30346cd5
- (id)styleString;	// 0x3010d349
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x301db11d
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x30346c35
// declared property getter: - (id)text;	// 0x30111909
// declared property getter: - (int)textAlignment;	// 0x30346691
// declared property getter: - (id)textColor;	// 0x303465c9
- (id)textInRange:(id)range;	// 0x301db039
- (id)textInputTraits;	// 0x30110c81
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x3019867d
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3010f299
- (void)toggleBoldface:(id)boldface;	// 0x30345999
- (void)toggleItalics:(id)italics;	// 0x303459b9
- (void)toggleUnderline:(id)underline;	// 0x303459d9
// declared property getter: - (id)tokenizer;	// 0x301986b1
- (void)touchScrollToVisibleTimer;	// 0x30163159
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x30163179
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303451d9
- (id)undoManager;	// 0x303457d5
- (id)undoManagerForWebView:(id)webView;	// 0x303457c5
- (void)unmarkText;	// 0x303471a5
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x3010f755
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30346c75
- (void)updateSelection;	// 0x3034520d
- (void)updateWebViewObjects;	// 0x3010f381
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x30346c95
- (CGRect)visibleRect;	// 0x303467d9
- (CGRect)visibleTextRect;	// 0x3034699d
// converted property getter: - (id)webView;	// 0x30110b75
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30346dc9
- (void)webViewDidChange:(id)webView;	// 0x30110621
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x30346d19
- (id)wordContainingCaretSelection;	// 0x303456a5
- (id)wordRangeContainingCaretSelection;	// 0x303456c5
@end


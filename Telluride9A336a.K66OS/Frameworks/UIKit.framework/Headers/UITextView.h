/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInput.h"
#import "UIKit-Structs.h"
#import "UITextSelectingContainer.h"
#import "UIScrollView.h"

@class DOMHTMLElement, UIWebDocumentView, UIDelayedAction, UITextRange, NSDictionary, UITextPosition, WebFrame, UITextSelectionView, UITextInteractionAssistant, UIFont, UIColor, NSString;
@protocol UITextInputDelegate, UITextViewDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame *m_frame;	// 404 = 0x194
	DOMHTMLElement *m_body;	// 408 = 0x198
	int m_marginTop;	// 412 = 0x19c
	UIDelayedAction *m_selectionTimer;	// 416 = 0x1a0
	UIDelayedAction *m_longPressAction;	// 420 = 0x1a4
	BOOL m_editable;	// 424 = 0x1a8
	BOOL m_editing;	// 425 = 0x1a9
	BOOL m_becomesEditableWithGestures;	// 426 = 0x1aa
	BOOL m_reentrancyGuard;	// 427 = 0x1ab
	BOOL m_readyForScroll;	// 428 = 0x1ac
	BOOL m_hasExplicitTextAlignment;	// 429 = 0x1ad
	BOOL m_hasExplicitLineHeight;	// 430 = 0x1ae
	UITextInteractionAssistant *m_interactionAssistant;	// 432 = 0x1b0
	UITextSelectionView *m_selectionView;	// 436 = 0x1b4
	UIWebDocumentView *m_webView;	// 440 = 0x1b8
	UIFont *m_font;	// 444 = 0x1bc
	UIColor *m_textColor;	// 448 = 0x1c0
	int m_textAlignment;	// 452 = 0x1c4
	UIView *m_inputView;	// 456 = 0x1c8
	UIView *m_inputAccessoryView;	// 460 = 0x1cc
	float m_lineHeight;	// 464 = 0x1d0
	BOOL m_skipScrollContainingView;	// 468 = 0x1d4
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x35251e59; S=0x35251e69; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x352b44c1; 
@property(assign) float bottomBufferHeight;	// G=0x352b405d; S=0x352b3f6d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3524d181; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x3524dc81; S=0x3524d0b5; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3524d171; S=0x35251c59; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3524d611; S=0x35252fc1; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x352537cd; 
@property(retain, nonatomic) UIFont *font;	// G=0x352b38f9; S=0x3524d191; 
@property(retain) UIView *inputAccessoryView;	// G=0x352528c9; S=0x3524e5cd; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x352b45a9; S=0x352b45d1; 
@property(retain) UIView *inputView;	// G=0x352528b5; S=0x3524e5a9; @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x35252d8d; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x352b3aa5; S=0x352b3ab5; converted property
@property(assign) int marginTop;	// G=0x352b3a95; S=0x352524a5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x352b43e5; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x352b440d; S=0x352b4435; 
@property(assign) CGPoint offset;	// G=0x352b412d; S=0x352b411d; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x352b416d; S=0x352b415d; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x352530dd; S=0x352b39cd; 
@property(copy) UITextRange *selectedTextRange;	// G=0x35252949; S=0x352b43b9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x352b482d; S=0x352b4855; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x352b48c9; S=0x352537f5; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3524d04d; 
@property(assign) BOOL showScrollerIndicators;	// G=0x352b40cd; S=0x352b4099; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x3524d7ed; S=0x3524da49; 
@property(assign, nonatomic) int textAlignment;	// G=0x352b398d; S=0x352b399d; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x352b3931; S=0x3524d6bd; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x35252945; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x352537a5; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x3525220d; converted property
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x352b3011
+ (id)bestInterpretationForMarsVoltas:(id)marsVoltas;	// 0x352b305d
- (id)initWithCoder:(id)coder;	// 0x352b25e1
- (id)initWithFrame:(CGRect)frame;	// 0x3524c389
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x35251be5
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x352b2591
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x352b2db9
- (id)_automationValue;	// 0x35253979
- (void)_bold:(id)bold;	// 0x352b3311
- (void)_dealloc;	// 0x3524e449
- (void)_define:(id)define;	// 0x352b32f1
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x352b4881
- (void)_italicize:(id)italicize;	// 0x352b3331
- (id)_keyboardResponder;	// 0x35252935
- (void)_populateArchivedSubviews:(id)subviews;	// 0x352b29b5
- (Class)_printFormatterClass;	// 0x3541c7d1
- (void)_promptForReplace:(id)replace;	// 0x352b32b9
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x35252909
- (void)_showTextStyleOptions:(id)options;	// 0x352b3371
- (void)_underline:(id)underline;	// 0x352b3351
- (id)automaticallySelectedOverlay;	// 0x3525646d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x352b465d
- (BOOL)becomeFirstResponder;	// 0x352524d1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x35251e59
- (void)beginSelectionChange;	// 0x352536e5
// declared property getter: - (id)beginningOfDocument;	// 0x352b44c1
// converted property getter: - (float)bottomBufferHeight;	// 0x352b405d
- (BOOL)canBecomeFirstResponder;	// 0x35252849
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x35253841
- (BOOL)canResignFirstResponder;	// 0x352538cd
- (void)cancelDataDetectorsWithWebLock;	// 0x3524e561
- (void)cancelInteractionWithLink;	// 0x352b3d19
- (CGRect)caretRectForPosition:(id)position;	// 0x3525319d
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x352b47bd
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x352b462d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x35253705
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x352b4749
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3524c645
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x352b4549
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x352b2df9
// declared property getter: - (id)content;	// 0x3524d181
- (id)contentAsHTMLString;	// 0x3525aaa9
- (void)copy:(id)copy;	// 0x352b3239
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x352b3079
- (void)cut:(id)cut;	// 0x352b3219
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x3524dc81
- (void)dealloc;	// 0x3524e301
- (void)delayedUpdateForKeyboardDidShow;	// 0x35253145
- (void)deleteBackward;	// 0x352b4251
- (void)detachInteractionAssistant;	// 0x3524e2e1
- (void)detachSelectionView;	// 0x3524e2c1
- (void)didMoveToSuperview;	// 0x3524d739
- (void)displayScrollerIndicators;	// 0x352b410d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x352b33cd
- (void)encodeWithCoder:(id)coder;	// 0x352b2a09
// declared property getter: - (id)endOfDocument;	// 0x352537cd
- (void)endSelectionChange;	// 0x35253821
- (void)ensureSelection;	// 0x3525304d
- (CGRect)firstRectForRange:(id)range;	// 0x352b46bd
// declared property getter: - (id)font;	// 0x352b38f9
- (void)forwardInvocation:(id)invocation;	// 0x35252e71
- (BOOL)hasText;	// 0x352b3969
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x352536a9
// declared property getter: - (id)inputAccessoryView;	// 0x352528c9
// declared property getter: - (id)inputDelegate;	// 0x352b45a9
// declared property getter: - (id)inputView;	// 0x352528b5
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x352b42a5
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x352b42d5
- (void)insertText:(id)text;	// 0x352b4279
// declared property getter: - (id)interactionAssistant;	// 0x35252d8d
- (BOOL)isAccessibilityElementByDefault;	// 0x35340649
// declared property getter: - (BOOL)isEditable;	// 0x3524d171
// declared property getter: - (BOOL)isEditing;	// 0x3524d611
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3534064d
- (BOOL)isFirstResponder;	// 0x352527f1
- (BOOL)isInteractingWithLink;	// 0x352b3d59
- (void)keyboardDidShow:(id)keyboard;	// 0x35253115
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x35255c71
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x35259afd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x35255ee9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x35252f41
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x352b3da5
// converted property getter: - (float)lineHeight;	// 0x352b3aa5
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x352b31d9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x352b31b9
// converted property getter: - (int)marginTop;	// 0x352b3a95
// declared property getter: - (id)markedTextRange;	// 0x352b43e5
// declared property getter: - (id)markedTextStyle;	// 0x352b440d
- (id)metadataDictionariesForDictationResults;	// 0x352b4335
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35252e25
- (BOOL)mightHaveLinks;	// 0x35251e39
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x352b309d
// converted property getter: - (CGPoint)offset;	// 0x352b412d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x352b4579
- (void)paste:(id)paste;	// 0x352b3259
- (void)performBecomeEditableTasks;	// 0x35252fd1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x352b4519
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x352b44e9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x352b45fd
- (void)recalculateStyle;	// 0x3524d239
- (CGRect)rectForSelection:(NSRange)selection;	// 0x352b3835
- (id)rectsForRange:(id)range;	// 0x352b48f1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3524cf5d
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x352b4305
- (void)removeFromSuperview;	// 0x3524e251
- (void)replace:(id)replace;	// 0x352b31f9
- (void)replaceRange:(id)range withText:(id)text;	// 0x352b4389
- (void)resetDataDetectorsResultsWithWebLock;	// 0x35252ef9
- (BOOL)resignFirstResponder;	// 0x3524e065
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3524c3d9
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x352b3b3d
- (void)scrollRectToVisibleInContainingScrollView;	// 0x35253329
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x3525324d
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x352b4241
// converted property getter: - (BOOL)scrollingEnabled;	// 0x352b416d
- (void)select:(id)select;	// 0x352b3279
- (void)selectAll;	// 0x352b3191
- (void)selectAll:(id)all;	// 0x352b3299
// declared property getter: - (NSRange)selectedRange;	// 0x352530dd
- (id)selectedText;	// 0x352b3155
// declared property getter: - (id)selectedTextRange;	// 0x35252949
// declared property getter: - (int)selectionAffinity;	// 0x352b482d
- (CGRect)selectionClipRect;	// 0x35253229
// declared property getter: - (int)selectionGranularity;	// 0x352b48c9
// declared property getter: - (id)selectionView;	// 0x3524d04d
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x352b4185
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x352b414d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x352b468d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x35251e69
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x352b3f6d
- (void)setContentToHTMLString:(id)htmlstring;	// 0x35252375
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3524d0b5
- (void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x352b2ed5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x35251c59
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x35252fc1
// declared property setter: - (void)setFont:(id)font;	// 0x3524d191
- (void)setFrame:(CGRect)frame;	// 0x3524c45d
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x3524e5cd
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x352b45d1
// declared property setter: - (void)setInputView:(id)view;	// 0x3524e5a9
// converted property setter: - (void)setLineHeight:(float)height;	// 0x352b3ab5
// converted property setter: - (void)setMarginTop:(int)top;	// 0x352524a5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x352b4461
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x352b4435
- (void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;	// 0x352b304d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x352b411d
- (void)setRichText:(BOOL)text;	// 0x352b38cd
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x352b4195
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x352b415d
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x352b39cd
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x352b43b9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x352b4855
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x352537f5
- (void)setSelectionToEnd;	// 0x352b3701
- (void)setSelectionToStart;	// 0x352b3601
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x352b4099
// declared property setter: - (void)setText:(id)text;	// 0x3524da49
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x352b399d
// declared property setter: - (void)setTextColor:(id)color;	// 0x3524d6bd
- (BOOL)shouldScrollEnclosingScrollView;	// 0x3524d621
- (BOOL)shouldStartDataDetectors;	// 0x3524dca1
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x352b40cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x352b3429
- (void)startDataDetectorsWithWebLock;	// 0x35251ec5
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x352b3cb9
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x352b3d39
- (id)styleString;	// 0x3524cc11
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x35253621
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x352b3c99
// declared property getter: - (id)text;	// 0x3524d7ed
// declared property getter: - (int)textAlignment;	// 0x352b398d
// declared property getter: - (id)textColor;	// 0x352b3931
// declared property getter: - (id)textDocument;	// 0x35252945
- (id)textInRange:(id)range;	// 0x352b435d
- (id)textInputTraits;	// 0x3524c43d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x35253775
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3524cdc5
// declared property getter: - (id)tokenizer;	// 0x352537a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x352b30fd
- (id)undoManager;	// 0x352b3391
- (id)undoManagerForWebView:(id)webView;	// 0x35255ec9
- (void)unmarkText;	// 0x352b4499
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x3524cfcd
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x352b3cd9
- (void)updateSelection;	// 0x352b312d
- (void)updateWebViewObjects;	// 0x3524ce45
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x352b3cf9
- (CGRect)visibleRect;	// 0x35253511
- (CGRect)visibleTextRect;	// 0x35253431
// converted property getter: - (id)webView;	// 0x3525220d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x352b3e7d
- (void)webViewDidChange:(id)webView;	// 0x3524d2a5
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x352b3d7d
@end


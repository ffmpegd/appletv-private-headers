/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebDocumentView.h"
#import <WAKView.h> // Unknown library
#import "WebDocumentOptionsSearching.h"
#import "WebMultipleTextMatches.h"
#import "WebDocumentElement.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentSearching.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
@private
	WebHTMLViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// G=0x3456a1b5; S=0x3456be79; converted property
+ (void)initialize;	// 0x3450ae71
+ (id)supportedImageMIMETypes;	// 0x345307f5
+ (id)supportedMIMETypes;	// 0x34567615
+ (id)supportedNonImageMIMETypes;	// 0x34520cdd
+ (id)unsupportedTextMIMETypes;	// 0x34521379
- (id)initWithFrame:(CGRect)frame;	// 0x3451177d
- (id)_accessibilityParentForSubview:(id)subview;	// 0x34567a69
- (float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;	// 0x3456afe5
- (void)_applyParagraphStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x3456796d
- (void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x345679a5
- (void)_autoscroll;	// 0x3456747d
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;	// 0x3456a061
- (BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;	// 0x3456add9
- (BOOL)_beginScreenPaginationModeWithPageSize:(CGSize)pageSize shrinkToFit:(BOOL)fit;	// 0x3456aedd
- (BOOL)_canAlterCurrentSelection;	// 0x3456748d
- (BOOL)_canDecreaseSelectionListLevel;	// 0x3456aa59
- (BOOL)_canEdit;	// 0x3456a701
- (BOOL)_canEditRichly;	// 0x3456a735
- (BOOL)_canIncreaseSelectionListLevel;	// 0x3456aa25
- (BOOL)_canSmartCopyOrDelete;	// 0x3456a111
- (void)_changeWordCaseWithSelector:(SEL)selector;	// 0x345678b9
- (void)_clearLastHitViewIfSelf;	// 0x3452f735
- (id)_compositingLayersHostingView;	// 0x3456709d
- (id)_dataSource;	// 0x34567009
- (void)_decreaseSelectionListLevel;	// 0x3456adb1
- (void)_destroyAllWebPlugins;	// 0x34569db1
- (id)_documentRange;	// 0x34567121
- (id)_emptyStyle;	// 0x345679dd
- (void)_endPrintMode;	// 0x34567595
- (void)_endScreenPaginationMode;	// 0x345675d5
- (void)_executeSavedKeypressCommands;	// 0x3456b065
- (BOOL)_findString:(id)string options:(unsigned)options;	// 0x3456c0d5
- (id)_frame;	// 0x34515949
- (void)_frameOrBoundsChanged;	// 0x3456a575
- (id)_frameView;	// 0x34567159
- (BOOL)_handleEditingKeyEvent:(KeyboardEvent *)event;	// 0x34569ad1
- (BOOL)_hasHTMLDocument;	// 0x3456a029
- (BOOL)_hasInsertionPoint;	// 0x34569ffd
- (BOOL)_hasSelection;	// 0x34569fa5
- (BOOL)_hasSelectionOrInsertionPoint;	// 0x34569fd1
- (id)_highlighterForType:(id)type;	// 0x34569aa1
- (id)_increaseSelectionListLevel;	// 0x3456aa8d
- (id)_increaseSelectionListLevelOrdered;	// 0x3456ab99
- (id)_increaseSelectionListLevelUnordered;	// 0x3456aca5
- (id)_insertOrderedList;	// 0x3456a80d
- (id)_insertUnorderedList;	// 0x3456a919
- (BOOL)_insideAnotherHTMLView;	// 0x34567391
- (BOOL)_isEditable;	// 0x3456a769
- (BOOL)_isInPrintMode;	// 0x345670bd
- (BOOL)_isInScreenPaginationMode;	// 0x345670dd
- (BOOL)_isSelectionEvent:(id)event;	// 0x34568429
- (BOOL)_isTopHTMLView;	// 0x3451e75d
- (BOOL)_isUsingAcceleratedCompositing;	// 0x34567075
- (void)_layoutIfNeeded;	// 0x34569d7d
- (BOOL)_needsLayout;	// 0x34516199
- (id)_pluginController;	// 0x34514b7d
- (void)_removeHighlighterOfType:(id)type;	// 0x34567565
- (void)_restoreSubviews;	// 0x3456702d
- (id)_selectedRange;	// 0x3456a1e1
- (void)_selectionChanged;	// 0x34535751
- (CGRect)_selectionRect;	// 0x3456a369
- (void)_setAsideSubviews;	// 0x34567029
- (void)_setHighlighter:(id)highlighter ofType:(id)type;	// 0x345674d1
- (void)_setMouseDownEvent:(id)event;	// 0x34567329
- (void)_setPrinting:(BOOL)printing minimumPageLogicalWidth:(float)width logicalHeight:(float)height maximumPageLogicalWidth:(float)width4 adjustViewSize:(BOOL)size paginateScreenContent:(BOOL)content;	// 0x34567e19
- (void)_setToolTip:(id)tip;	// 0x34567031
- (void)_setTransparentBackground:(BOOL)background;	// 0x34567055
- (BOOL)_shouldDeleteRange:(id)range;	// 0x3456a2fd
- (BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;	// 0x3456719d
- (BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x34567299
- (BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;	// 0x345672e5
- (void)_startAutoscrollTimer:(id)timer;	// 0x345673c5
- (void)_stopAutoscrollTimer;	// 0x34514afd
- (id)_topHTMLView;	// 0x3451e781
- (BOOL)_transparentBackground;	// 0x34567035
- (void)_updateControlTints;	// 0x3456772d
- (void)_updateSelectionForInputManager;	// 0x34535789
- (BOOL)_wantsKeyDownForEvent:(id)event;	// 0x34567759
- (id)_webView;	// 0x34515975
- (BOOL)_web_isDrawingIntoLayer;	// 0x34538ad9
- (void)_web_makePluginSubviewsPerformSelector:(SEL)selector withObject:(id)object;	// 0x345670fd
- (void)_web_updateLayoutAndStyleIfNeededRecursive;	// 0x3451e7e5
- (void)_windowChangedKeyState;	// 0x345676ed
- (BOOL)acceptsFirstResponder;	// 0x3452eaf9
- (id)accessibilityFocusedUIElement;	// 0x34567afd
- (id)accessibilityHitTest:(CGPoint)test;	// 0x34567ab5
- (id)accessibilityRootElement;	// 0x34536129
- (void)addSubview:(id)subview;	// 0x34529c01
- (void)alignCenter:(id)center;	// 0x34568ead
- (void)alignJustified:(id)justified;	// 0x34568e99
- (void)alignLeft:(id)left;	// 0x34568e85
- (void)alignRight:(id)right;	// 0x34568e71
- (void)attachRootLayer:(id)layer;	// 0x3456710d
- (BOOL)becomeFirstResponder;	// 0x3452ebb1
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;	// 0x345699c1
- (void)capitalizeWord:(id)word;	// 0x345677f9
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x34567a15
- (unsigned)characterIndexForPoint:(CGPoint)point;	// 0x3456a381
- (void)clearFocus;	// 0x34568549
- (void)clearText:(id)text;	// 0x34568769
- (void)close;	// 0x3452f6a1
- (void)closeIfNotCurrentView;	// 0x34532dfd
- (int)conversationIdentifier;	// 0x34567115
- (void)copy:(id)copy;	// 0x34568e5d
- (Command)coreCommandByName:(const char *)name;	// 0x345691d9
- (Command)coreCommandBySelector:(SEL)selector;	// 0x345692f9
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x3453a8c9
- (void)cut:(id)cut;	// 0x34568e49
- (void)dataSourceUpdated:(id)updated;	// 0x345249d5
- (void)dealloc;	// 0x3452f5dd
- (void)delete:(id)aDelete;	// 0x34568e21
- (void)deleteBackward:(id)backward;	// 0x34568e0d
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x34568df9
- (void)deleteForward:(id)forward;	// 0x34568de5
- (void)deleteToBeginningOfLine:(id)line;	// 0x34568dd1
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x34568dbd
- (void)deleteToEndOfLine:(id)line;	// 0x34568da9
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x34568d95
- (void)deleteToMark:(id)mark;	// 0x34568d81
- (void)deleteWordBackward:(id)backward;	// 0x34568d6d
- (void)deleteWordForward:(id)forward;	// 0x34568d59
- (void)deselectAll;	// 0x3453a5a9
- (void)detachRootLayer;	// 0x34567111
- (void)doCommandBySelector:(SEL)selector;	// 0x3456b551
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x34569f39
- (void)drawRect:(CGRect)rect;	// 0x3451e985
- (void)drawSingleRect:(CGRect)rect;	// 0x3451e9fd
- (id)elementAtPoint:(CGPoint)point;	// 0x34569ee9
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x3456bd1d
- (void)executeCoreCommandByName:(const char *)name;	// 0x34568ec1
- (void)executeCoreCommandBySelector:(SEL)selector;	// 0x34569039
- (void)finalize;	// 0x34569a35
- (CGRect)firstRectForCharacterRange:(NSRange)characterRange;	// 0x3456a451
- (BOOL)hasMarkedText;	// 0x3456a16d
- (id)hitTest:(CGPoint)test;	// 0x345338f1
- (void)ignoreSpelling:(id)spelling;	// 0x34568d45
- (void)indent:(id)indent;	// 0x34568d31
- (void)insertBacktab:(id)backtab;	// 0x34568d1d
- (void)insertLineBreak:(id)aBreak;	// 0x34568d09
- (void)insertNewline:(id)newline;	// 0x34568cf5
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x34568ce1
- (void)insertParagraphSeparator:(id)separator;	// 0x34568ccd
- (void)insertTab:(id)tab;	// 0x34568cb9
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x34568ca5
- (void)insertText:(id)text;	// 0x34539761
- (BOOL)isOpaque;	// 0x34568521
- (void)jumpToSelection:(id)selection;	// 0x345686d9
- (void)keyDown:(id)down;	// 0x34567c95
- (void)keyUp:(id)up;	// 0x34567b3d
- (void)layout;	// 0x34516085
- (void)layoutIfNeeded;	// 0x345673b5
- (void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width adjustingViewSize:(BOOL)size;	// 0x345160a9
- (void)lowercaseWord:(id)word;	// 0x34567839
- (BOOL)maintainsInactiveSelection;	// 0x3453ab81
- (void)makeBaseWritingDirectionNatural:(id)natural;	// 0x34567109
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x34568c91
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x34568c7d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x34568c69
- (NSRange)markedRange;	// 0x3456b169
// converted property getter: - (BOOL)markedTextMatchesAreHighlighted;	// 0x3456a1b5
- (void)markedTextUpdate:(id)update;	// 0x34569dd9
- (void)mouseDown:(id)down;	// 0x345682cd
- (void)mouseMoved:(id)moved;	// 0x3456a33d
- (void)mouseUp:(id)up;	// 0x3456824d
- (void)moveBackward:(id)backward;	// 0x34568c55
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x34568c41
- (void)moveDown:(id)down;	// 0x34568c2d
- (void)moveDownAndModifySelection:(id)selection;	// 0x34568c19
- (void)moveForward:(id)forward;	// 0x34568c05
- (void)moveForwardAndModifySelection:(id)selection;	// 0x34568bf1
- (void)moveLeft:(id)left;	// 0x34568bdd
- (void)moveLeftAndModifySelection:(id)selection;	// 0x34568bc9
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x34568bb5
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x34568ba1
- (void)moveRight:(id)right;	// 0x34568b8d
- (void)moveRightAndModifySelection:(id)selection;	// 0x34568b79
- (void)moveToBeginningOfDocument:(id)document;	// 0x34568b65
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x34568b51
- (void)moveToBeginningOfLine:(id)line;	// 0x34568b3d
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x34568b29
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x34568b15
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x34568b01
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x34568aed
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x34568ad9
- (void)moveToEndOfDocument:(id)document;	// 0x34568ac5
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x34568ab1
- (void)moveToEndOfLine:(id)line;	// 0x34568a9d
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x34568a89
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x34568a75
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x34568a61
- (void)moveToEndOfSentence:(id)sentence;	// 0x34568a4d
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x34568a39
- (void)moveToLeftEndOfLine:(id)line;	// 0x34568a25
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x34568a11
- (void)moveToRightEndOfLine:(id)line;	// 0x345689fd
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x345689e9
- (void)moveUp:(id)up;	// 0x345689d5
- (void)moveUpAndModifySelection:(id)selection;	// 0x345689c1
- (void)moveWordBackward:(id)backward;	// 0x345689ad
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x34568999
- (void)moveWordForward:(id)forward;	// 0x34568985
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x34568971
- (void)moveWordLeft:(id)left;	// 0x3456895d
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x34568949
- (void)moveWordRight:(id)right;	// 0x34568935
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x34568921
- (void)outdent:(id)outdent;	// 0x3456890d
- (void)pageDown:(id)down;	// 0x345688f9
- (void)pageDownAndModifySelection:(id)selection;	// 0x345688e5
- (void)pageUp:(id)up;	// 0x345688d1
- (void)pageUpAndModifySelection:(id)selection;	// 0x345688bd
- (void)paste:(id)paste;	// 0x34568e35
- (void)pasteAsPlainText:(id)text;	// 0x345688a9
- (void)reapplyStyles;	// 0x34568671
- (id)rectsForTextMatches;	// 0x3456bead
- (BOOL)resignFirstResponder;	// 0x34530a5d
- (void)scrollWheel:(id)wheel;	// 0x345684bd
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x34568645
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x34569e8d
- (void)selectAll;	// 0x3456bcf5
- (void)selectAll:(id)all;	// 0x34568895
- (void)selectLine:(id)line;	// 0x34568881
- (void)selectParagraph:(id)paragraph;	// 0x3456886d
- (void)selectSentence:(id)sentence;	// 0x34568859
- (void)selectToMark:(id)mark;	// 0x34568845
- (void)selectWord:(id)word;	// 0x34568831
- (NSRange)selectedRange;	// 0x3456a79d
- (id)selectedString;	// 0x34569e65
- (CGImageRef)selectionImageForcingBlackText:(BOOL)text;	// 0x3456bca9
- (CGRect)selectionImageRect;	// 0x3456ba09
- (CGRect)selectionRect;	// 0x3456b9a1
- (id)selectionTextRects;	// 0x3456ba71
- (id)selectionView;	// 0x34567119
- (void)setDataSource:(id)source;	// 0x34511d81
- (void)setMark:(id)mark;	// 0x3456881d
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x3456b325
// converted property setter: - (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;	// 0x3456be79
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3450a245
- (void)setNeedsLayout:(BOOL)layout;	// 0x34516041
- (void)setNeedsToApplyStyles:(BOOL)applyStyles;	// 0x345684e9
- (void)setScale:(float)scale;	// 0x345158dd
- (id)string;	// 0x34569e21
- (void)subscript:(id)subscript;	// 0x34568809
- (void)superscript:(id)superscript;	// 0x345687f5
- (BOOL)supportsTextEncoding;	// 0x3456711d
- (void)swapWithMark:(id)mark;	// 0x345687e1
- (void)toggleBaseWritingDirection:(id)direction;	// 0x3456777d
- (void)toggleBold:(id)bold;	// 0x34568755
- (void)toggleItalic:(id)italic;	// 0x34568741
- (void)toggleUnderline:(id)underline;	// 0x3456872d
- (void)touch:(id)touch;	// 0x34533a5d
- (void)transpose:(id)transpose;	// 0x345687cd
- (void)underline:(id)underline;	// 0x345687b9
- (void)unmarkAllTextMatches;	// 0x3456b035
- (void)unmarkText;	// 0x3456b2c1
- (void)unscript:(id)unscript;	// 0x345687a5
- (void)uppercaseWord:(id)word;	// 0x34567879
- (void)viewDidMoveToHostWindow;	// 0x34567105
- (void)viewDidMoveToWindow;	// 0x34514a15
- (void)viewWillDraw;	// 0x3451e6c1
- (void)viewWillMoveToHostWindow:(id)view;	// 0x34567101
- (void)viewWillMoveToWindow:(id)view;	// 0x3456869d
- (void)willRemoveSubview:(id)subview;	// 0x3452c16d
- (void)yank:(id)yank;	// 0x34568791
- (void)yankAndSelect:(id)select;	// 0x3456877d
@end


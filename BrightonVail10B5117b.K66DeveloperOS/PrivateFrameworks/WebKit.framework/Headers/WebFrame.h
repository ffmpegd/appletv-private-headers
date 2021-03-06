/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebFramePrivate;

@interface WebFrame : NSObject {
	WebFramePrivate *_private;	// 4 = 0x4
}
@property(assign) BOOL isSingleLine;	// G=0x367a94a9; S=0x367a94cd; converted property
@property(assign) BOOL mediaDataLoadsAutomatically;	// G=0x367a2cdd; S=0x367a2d15; converted property
+ (PassRefPtr<WebCore::Frame>)_createFrameWithPage:(Page *)page frameName:(const String *)name frameView:(id)view ownerElement:(HTMLFrameOwnerElement *)element;	// 0x3676f7b1
+ (void)_createMainFrameWithPage:(Page *)page frameName:(const String *)name frameView:(id)view;	// 0x3676f6b5
+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(Page *)page frameView:(id)view style:(id)style;	// 0x3679e3d9
+ (PassRefPtr<WebCore::Frame>)_createSubframeWithOwnerElement:(HTMLFrameOwnerElement *)ownerElement frameName:(const String *)name frameView:(id)view;	// 0x3677e4ed
+ (id)stringWithData:(id)data textEncodingName:(id)name;	// 0x367a4791
- (id)init;	// 0x367a6cbd
- (id)initWithName:(id)name webFrameView:(id)view webView:(id)view3;	// 0x367a6cc1
- (id)DOMDocument;	// 0x3677cfdd
- (BOOL)_allowsFollowingLink:(id)link;	// 0x367a575d
- (void)_attachScriptDebugger;	// 0x3679e7a9
- (CGColorRef)_bodyBackgroundColor;	// 0x36764841
- (id)_cacheabilityDictionary;	// 0x367a5535
- (BOOL)_canProvideDocumentSource;	// 0x367a12dd
- (BOOL)_canSaveAsWebArchive;	// 0x367a148d
- (CGRect)_caretRectAtPosition:(const Position *)position affinity:(int)affinity;	// 0x3679f705
- (id)_characterRangeAtPoint:(CGPoint)point;	// 0x367a0e91
- (void)_clearCoreFrame;	// 0x36786fd1
- (void)_clearOpener;	// 0x367a6149
- (void)_clearSelection;	// 0x3679e991
- (void)_clearSelectionInOtherFrames;	// 0x3679ea01
- (void)_commitData:(id)data;	// 0x3677bdc9
- (id)_computePageRectsWithPrintScaleFactor:(float)printScaleFactor pageSize:(CGSize)size;	// 0x367a6175
- (NSRange)_convertDOMRangeToNSRange:(id)nsrange;	// 0x3679fc39
- (id)_convertNSRangeToDOMRange:(NSRange)domrange;	// 0x3679fad9
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x3679fa75
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x3679fa21
- (id)_dataSource;	// 0x367641f5
- (void)_detachScriptDebugger;	// 0x3679e8c9
- (void)_dispatchDidReceiveTitle:(id)_dispatch;	// 0x367a6aad
- (id)_documentFragmentForImageData:(id)imageData withRelativeURLPart:(id)relativeURLPart andMIMEType:(id)type;	// 0x367a6679
- (id)_documentFragmentForText:(id)text;	// 0x367a63f5
- (id)_documentFragmentForWebArchive:(id)webArchive;	// 0x367a664d
- (id)_documentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x367a05d9
- (id)_documentFragmentWithNodesAsParagraphs:(id)nodesAsParagraphs;	// 0x367a084d
- (void)_drawRect:(CGRect)rect contentsOnly:(BOOL)only;	// 0x36766389
- (id)_findFrameWithSelection;	// 0x36763f6d
- (BOOL)_firstLayoutDone;	// 0x367a1541
- (CGRect)_firstRectForDOMRange:(id)domrange;	// 0x3679f7fd
- (BOOL)_getVisibleRect:(CGRect *)rect;	// 0x3679f251
- (OpaqueJSContext *)_globalContextForScriptWorld:(id)scriptWorld;	// 0x36784861
- (void)_handleKeyEvent:(id)event;	// 0x367a26b1
- (BOOL)_hasSelection;	// 0x36763fcd
- (id)_initWithWebFrameView:(id)webFrameView webView:(id)view;	// 0x3676fb69
- (void)_insertParagraphSeparatorInQuotedContent;	// 0x367a0d01
- (id)_internalLoadDelegate;	// 0x3679e921
- (BOOL)_isCommitting;	// 0x367661fd
- (BOOL)_isDescendantOfFrame:(id)frame;	// 0x367a14a5
- (BOOL)_isDisplayingStandaloneImage;	// 0x367a1f05
- (BOOL)_isFrameSet;	// 0x367a1509
- (BOOL)_isIncludedInWebKitStatistics;	// 0x3676fd71
- (BOOL)_isVisuallyNonEmpty;	// 0x3677c079
- (id)_layerTreeAsText;	// 0x367a5f3d
- (void)_loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url unreachableURL:(id)url5;	// 0x367a6d8d
- (void)_loadHTMLString:(id)string baseURL:(id)url unreachableURL:(id)url3;	// 0x367a75fd
- (int)_loadType;	// 0x3677c0a9
- (BOOL)_loadsSynchronously;	// 0x36778169
- (id)_markDOMRange;	// 0x3679fc69
- (id)_markupStringFromRange:(id)range nodes:(id *)nodes;	// 0x3679edb5
- (BOOL)_needsLayout;	// 0x36775145
- (id)_nodesFromList:(Vector<WebCore::Node *, 0> *)list;	// 0x3679ed4d
- (unsigned)_numberOfActiveAnimations;	// 0x367a22f1
- (BOOL)_pauseAnimation:(id)animation onNode:(id)node atTime:(double)time;	// 0x367a1fb1
- (BOOL)_pauseTransitionOfProperty:(id)property onNode:(id)node atTime:(double)time;	// 0x367a2151
- (unsigned)_pendingFrameUnloadEventCount;	// 0x367a1f3d
- (id)_rectsForRange:(id)range;	// 0x367a15d5
- (void)_replaceSelectionWithFragment:(id)fragment selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x367a50d1
- (void)_replaceSelectionWithMarkupString:(id)markupString baseURLString:(id)string selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x367a54f9
- (void)_replaceSelectionWithNode:(id)node selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x367a0bb1
- (void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x367a5279
- (void)_replaceSelectionWithText:(id)text selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace matchStyle:(BOOL)style;	// 0x367a4c91
- (void)_replaceSelectionWithWebArchive:(id)webArchive selectReplacement:(BOOL)replacement smartReplace:(BOOL)replace;	// 0x367a4f11
- (void)_restoreViewState;	// 0x367a272d
- (void)_resumeAnimations;	// 0x367a50a1
- (void)_saveViewState;	// 0x367a2755
- (void)_scrollDOMRangeToVisible:(id)visible;	// 0x3679f845
- (void)_scrollDOMRangeToVisible:(id)visible withInset:(float)inset;	// 0x3679f909
- (void)_selectAll;	// 0x367a26dd
- (void)_selectNSRange:(NSRange)range;	// 0x367a1d59
- (NSRange)_selectedNSRange;	// 0x367a1be1
- (id)_selectedString;	// 0x3679efd9
- (int)_selectionGranularity;	// 0x3679f9fd
- (id)_selectionRangeForFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x367a1799
- (id)_selectionRangeForPoint:(CGPoint)point;	// 0x367a19f5
- (void)_setExcludeFromTextSearch:(bool)textSearch;	// 0x367a1f8d
- (void)_setInternalLoadDelegate:(id)delegate;	// 0x3679e901
- (void)_setIsCommitting:(BOOL)committing;	// 0x3679ea79
- (void)_setIsDisconnected:(bool)disconnected;	// 0x367a1f69
- (void)_setLoadsSynchronously:(BOOL)synchronously;	// 0x367a15a9
- (void)_setProhibitsScrolling:(BOOL)scrolling;	// 0x367a2975
- (void)_setSelectionFromNone;	// 0x367a2705
- (void)_setShouldCreateRenderers:(BOOL)_set;	// 0x367a14e9
- (void)_setTextAutosizingWidth:(float)width;	// 0x367760e1
- (void)_setTypingStyle:(id)style withUndoAction:(int)undoAction;	// 0x367a1165
- (void)_setVisibleSize:(CGSize)size;	// 0x367a2965
- (BOOL)_shouldFlattenCompositingLayers:(CGContextRef)layers;	// 0x3676658d
- (id)_smartDeleteRangeForProposedRange:(id)proposedRange;	// 0x3679fdc9
- (id)_stringByEvaluatingJavaScriptFromString:(id)string;	// 0x3679f2b1
- (id)_stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;	// 0x3679f2c5
- (id)_stringByEvaluatingJavaScriptFromString:(id)string withGlobalObject:(OpaqueJSValue *)globalObject inScriptWorld:(id)scriptWorld;	// 0x367a58c9
- (id)_stringForRange:(id)range;	// 0x3679f1e1
- (id)_stringWithDocumentTypeStringAndMarkupString:(id)documentTypeStringAndMarkupString;	// 0x3679ea99
- (void)_suspendAnimations;	// 0x367a5071
- (id)_typingStyle;	// 0x367a0ffd
- (void)_unmarkAllBadGrammar;	// 0x3679e941
- (void)_unmarkAllMisspellings;	// 0x3679e98d
- (void)_updateBackgroundAndUpdatesWhileOffscreen;	// 0x36770c49
- (void)_userScrolled;	// 0x367a4c45
- (VisiblePosition)_visiblePositionForPoint:(CGPoint)point;	// 0x367a0d35
- (id)accessibilityRoot;	// 0x367a60c1
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x367accb1
- (id)approximateNodeAtViewportLocation:(CGPoint *)viewportLocation;	// 0x367a28d1
- (CGRect)caretRect;	// 0x367a2b25
- (CGRect)caretRectAtNode:(id)node offset:(int)offset affinity:(int)affinity;	// 0x367a49d5
- (CGRect)caretRectForPosition:(id)position;	// 0x367a9519
- (unsigned short)characterAfterCaretSelection;	// 0x367a3191
- (unsigned short)characterBeforeCaretSelection;	// 0x367a3161
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x367a3131
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x367a4b5d
- (id)childFrames;	// 0x36785f85
- (void)clearPPTStats;	// 0x36787ac5
- (void)clearRangedSelectionInitialExtent;	// 0x367aada9
- (void)clearSelection;	// 0x367a94f1
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x367a9649
- (VisiblePosition)closestWordBoundary:(VisiblePosition)boundary;	// 0x367a90a1
- (void)collapseSelection;	// 0x367a9e55
- (void)confirmMarkedText:(id)text;	// 0x367a3d39
- (NSRange)convertDOMRangeToNSRange:(id)nsrange;	// 0x367a4b6d
- (id)convertNSRangeToDOMRange:(NSRange)domrange;	// 0x367a4b8d
- (Frame *)coreFrame;	// 0x36763df9
- (id)counterValueForElement:(id)element;	// 0x367907e5
- (void)createDefaultFieldEditorDocumentStructure;	// 0x367a2b7d
- (id)dataSource;	// 0x36764c89
- (void)dealloc;	// 0x367870d9
- (id)deepestNodeAtViewportLocation:(CGPoint)viewportLocation;	// 0x367a2861
- (id)dictationResultMetadataForRange:(id)range;	// 0x367a46f5
- (id)documentView;	// 0x367a2bf5
- (id)elementRangeContainingCaretSelection;	// 0x367a2f81
- (id)endPosition;	// 0x367af7a5
- (void)ensureRangedSelectionContainsInitialStartPoint:(CGPoint)point initialEndPoint:(CGPoint)point2;	// 0x367ac5fd
- (void)expandSelectionToElementContainingCaretSelection;	// 0x367a2f59
- (void)expandSelectionToSentence;	// 0x367ad605
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x367a3109
- (void)expandSelectionToWordContainingCaretSelection;	// 0x367a30e1
- (void)extendSelection:(BOOL)selection;	// 0x367aa00d
- (void)finalize;	// 0x367a6cc5
- (id)findFrameNamed:(id)named;	// 0x367a7875
- (CGRect)firstRectForDOMRange:(id)domrange;	// 0x367a4b9d
- (BOOL)focusedNodeHasContent;	// 0x367a6729
- (GSFontRef)fontForSelection:(BOOL *)selection;	// 0x367a4bc1
- (void)forceLayoutAdjustingViewSize:(BOOL)size;	// 0x367a2659
- (unsigned)formElementsCharacterCount;	// 0x367a2329
- (id)frameElement;	// 0x367a6d61
- (id)frameView;	// 0x36760c1d
- (void)getDictationResultRanges:(id *)ranges andMetadatas:(id *)metadatas;	// 0x367a41e1
- (void)getPPTStatsWithParseCount:(unsigned *)parseCount withLayoutCount:(unsigned *)layoutCount withForcedLayoutCount:(unsigned *)forcedLayoutCount withParseDuration:(double *)parseDuration withLayoutDuration:(double *)layoutDuration;	// 0x36787af9
- (OpaqueJSContext *)globalContext;	// 0x367a7a11
- (BOOL)hasEditableSelection;	// 0x367a2a21
- (BOOL)hasRichlyEditableSelection;	// 0x367a524d
- (BOOL)hasSelection;	// 0x36786ab9
- (CGImageRef)imageForNode:(id)node allowDownsampling:(BOOL)downsampling drawContentBehindTransparentNodes:(BOOL)nodes;	// 0x367af8c1
- (int)innerLineHeight:(id)height;	// 0x367a2a79
- (id)interpretationsForCurrentRoot;	// 0x367a41b9
- (bool)isPageBoxVisible:(int)visible;	// 0x36790b11
// converted property getter: - (BOOL)isSingleLine;	// 0x367a94a9
- (BOOL)isTelephoneNumberParsingAllowed;	// 0x367a2c85
- (BOOL)isTelephoneNumberParsingEnabled;	// 0x367a2cb1
- (int)layoutCount;	// 0x367a2c49
- (void)loadAlternateHTMLString:(id)string baseURL:(id)url forUnreachableURL:(id)unreachableURL;	// 0x367a7691
- (void)loadArchive:(id)archive;	// 0x367a76dd
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x367a75a9
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x367a7655
- (void)loadRequest:(id)request;	// 0x3677d109
- (id)markedTextDOMRange;	// 0x367a37bd
// converted property getter: - (BOOL)mediaDataLoadsAutomatically;	// 0x367a2cdd
- (void)moveSelectionToEnd;	// 0x367adb15
- (void)moveSelectionToPoint:(CGPoint)point;	// 0x367add01
- (void)moveSelectionToStart;	// 0x367ad929
- (id)name;	// 0x367a6d25
- (BOOL)needsLayout;	// 0x367a156d
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x367b0219
- (int)numberOfPages:(float)pages :(float)arg2;	// 0x36790965
- (int)pageNumberForElement:(id)element :(float)arg2 :(float)arg3;	// 0x3679093d
- (id)pageProperty:(const char *)property :(int)arg2;	// 0x367909a1
- (id)pageSizeAndMarginsInPixels:(int)pixels :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x36790b3d
- (id)parentFrame;	// 0x367831f1
- (int)preferredHeight;	// 0x367a2a51
- (void)prepareForPause;	// 0x367a2351
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x367af909
- (void)printToCGContext:(CGContextRef)cgcontext :(float)arg2 :(float)arg3;	// 0x36790cc9
- (id)provisionalDataSource;	// 0x36764ded
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x367a3605
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x367a34a1
- (CGRect)rectForScrollToVisible;	// 0x367a2b51
- (void)recursiveSetUpdateAppearanceEnabled:(BOOL)enabled;	// 0x367a475d
- (void)reload;	// 0x367a782d
- (void)reloadFromOrigin;	// 0x367a7851
- (void)removeUnchangeableStyles;	// 0x367a5229
- (CGRect)renderRectForPoint:(CGPoint)point isReplaced:(BOOL *)replaced fontSize:(float *)size;	// 0x367a2905
- (id)renderTreeAsExternalRepresentationForPrinting:(BOOL)printing;	// 0x3679066d
- (BOOL)renderedCharactersExceed:(unsigned)exceed;	// 0x36763dd5
- (CGSize)renderedSizeOfNode:(id)node constrainedToWidth:(float)width;	// 0x367a27f1
- (void)resetSelection;	// 0x367a29e1
- (void)resetTextAutosizingBeforeLayout;	// 0x36774ee1
- (void)resumeFromPause;	// 0x367a23d9
- (void)revealSelectionAtExtent:(BOOL)extent;	// 0x367a29a5
- (id)scrollableNodeAtViewportLocation:(CGPoint)viewportLocation;	// 0x367a2899
- (void)selectNSRange:(NSRange)range;	// 0x367a2461
- (void)selectNSRange:(NSRange)range onElement:(id)element;	// 0x367a3769
- (void)selectWithoutClosingTypingNSRange:(NSRange)range;	// 0x367a2471
- (id)selectedDOMRange;	// 0x367a2d59
- (NSRange)selectedNSRange;	// 0x367a2639
- (int)selectionAffinity;	// 0x367a2f35
- (BOOL)selectionAtDocumentStart;	// 0x367a33d5
- (BOOL)selectionAtSentenceStart;	// 0x367a3419
- (BOOL)selectionAtWordStart;	// 0x367a345d
- (int)selectionBaseWritingDirection;	// 0x367ad84d
- (id)selectionRects;	// 0x367aa88d
- (id)selectionRectsForCoreRange:(Range *)coreRange;	// 0x367aa52d
- (id)selectionRectsForRange:(id)range;	// 0x367aa869
- (int)selectionState;	// 0x36786ae1
- (void)sendOrientationChangeEvent:(int)event;	// 0x3677e195
- (void)sendScrollEvent;	// 0x367a4c21
- (void)setAccessibleName:(id)name;	// 0x367a5cd1
- (void)setBaseWritingDirection:(int)direction;	// 0x367ad8a5
- (void)setCaretColor:(CGColorRef)color;	// 0x367a2ba5
- (void)setDictationPhrases:(id)phrases metadata:(id)metadata asChildOfElement:(id)element;	// 0x367a4071
- (void)setIsActive:(BOOL)active;	// 0x367a2ac9
// converted property setter: - (void)setIsSingleLine:(BOOL)line;	// 0x367a94cd
- (void)setMarkedText:(id)text forCandidates:(BOOL)candidates;	// 0x367a3b41
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x367a3935
// converted property setter: - (void)setMediaDataLoadsAutomatically:(BOOL)automatically;	// 0x367a2d15
- (void)setNeedsLayout;	// 0x367a27c5
- (void)setPluginsPaused:(BOOL)paused;	// 0x36788199
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x367aad55
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x367aad8d
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x367aad71
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x367ab18d
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x367aade1
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x367aadc5
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x367aadfd
- (void)setSelectedDOMRange:(id)range affinity:(int)affinity closeTyping:(BOOL)typing;	// 0x367a2eb9
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x367a2af5
- (void)setSelectionGranularity:(int)granularity;	// 0x367ade2d
- (BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x367ac425
- (BOOL)setSelectionWithBasePoint:(CGPoint)basePoint extentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x367abe7d
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x367ac45d
- (void)setText:(id)text asChildOfElement:(id)element;	// 0x367a3eed
- (void)setTimeoutsPaused:(BOOL)paused;	// 0x367880f9
- (void)smartExtendRangedSelection:(int)selection;	// 0x367ade81
- (BOOL)spaceFollowsWordInRange:(id)range;	// 0x367a3375
- (id)startPosition;	// 0x367af689
- (void)stopLoading;	// 0x367a7801
- (id)stringByEvaluatingJavaScriptFromString:(id)string forceUserGesture:(BOOL)gesture;	// 0x367a4c71
- (id)stringForRange:(id)range;	// 0x367a4c81
- (void)toggleBaseWritingDirection;	// 0x367ad86d
- (void)updateLayout;	// 0x367a2aa1
- (VisiblePosition)visiblePositionForPoint:(CGPoint)point;	// 0x367a906d
- (id)webView;	// 0x367611f9
- (id)webVisiblePositionForPoint:(CGPoint)point;	// 0x367aac29
- (id)windowObject;	// 0x367a79e5
- (id)wordAtPoint:(CGPoint)point;	// 0x367aa9b9
- (id)wordInRange:(id)range;	// 0x367a3321
- (int)wordOffsetInRange:(id)range;	// 0x367a3339
- (id)wordRangeContainingCaretSelection;	// 0x367a31c1
- (id)wordsInCurrentParagraph;	// 0x367a33ad
@end


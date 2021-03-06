/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>


@interface WebDefaultEditingDelegate : NSObject {
}
+ (id)sharedEditingDelegate;	// 0x33957e41
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x33957eb5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x33957eb1
- (id)undoManagerForWebView:(id)webView;	// 0x33957ecd
- (BOOL)webView:(id)view doCommandBySelector:(SEL)selector;	// 0x33957ead
- (BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;	// 0x33957ea1
- (BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;	// 0x33957e89
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x33957e9d
- (BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;	// 0x33957ea9
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x33957e99
- (BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;	// 0x33957e8d
- (BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;	// 0x33957e91
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x33957e95
- (BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;	// 0x33957ea5
- (void)webViewDidBeginEditing:(id)webView;	// 0x33957eb9
- (void)webViewDidChange:(id)webView;	// 0x33957ebd
- (void)webViewDidChangeSelection:(id)webView;	// 0x33957ec9
- (void)webViewDidChangeTypingStyle:(id)webView;	// 0x33957ec5
- (void)webViewDidEndEditing:(id)webView;	// 0x33957ec1
@end


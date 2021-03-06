/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDefaultFrameLoadDelegate : NSObject {
}
+ (id)sharedFrameLoadDelegate;	// 0x307e7535
- (void)webView:(id)view didCancelClientRedirectForFrame:(id)frame;	// 0x30804d61
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x30804d59
- (void)webView:(id)view didClearInspectorWindowObject:(id)object forFrame:(id)frame;	// 0x30804d9d
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x30804d69
- (void)webView:(id)view didClearWindowObjectForFrame:(id)frame inScriptWorld:(id)scriptWorld;	// 0x30804d7d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x30804d49
- (void)webView:(id)view didDetectXSS:(id)xss;	// 0x30804d79
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x30804d55
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x30804d45
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x30804d91
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30804d51
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x30804d8d
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x30804d99
- (void)webView:(id)view didHandleOnloadEventsForFrame:(id)frame;	// 0x30804d95
- (void)webView:(id)view didPopStateWithinPageForFrame:(id)frame;	// 0x30804d89
- (void)webView:(id)view didPushStateWithinPageForFrame:(id)frame;	// 0x30804d81
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x30804d41
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x30804d4d
- (void)webView:(id)view didReplaceStateWithinPageForFrame:(id)frame;	// 0x30804d85
- (void)webView:(id)view didRunInsecureContent:(id)content;	// 0x30804d75
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x30804d3d
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x30804d65
- (void)webView:(id)view willPerformClientRedirectToURL:(id)url delay:(double)delay fireDate:(id)date forFrame:(id)frame;	// 0x30804d5d
- (void)webView:(id)view windowScriptObjectAvailable:(id)available;	// 0x30804d6d
- (void)webViewDidDisplayInsecureContent:(id)webView;	// 0x30804d71
@end


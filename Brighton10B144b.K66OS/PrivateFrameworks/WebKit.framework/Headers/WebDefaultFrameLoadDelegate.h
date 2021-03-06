/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDefaultFrameLoadDelegate : NSObject {
}
+ (id)sharedFrameLoadDelegate;	// 0x3659c2ed
- (void)webView:(id)view didCancelClientRedirectForFrame:(id)frame;	// 0x365b9355
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x365b934d
- (void)webView:(id)view didClearInspectorWindowObject:(id)object forFrame:(id)frame;	// 0x365b9391
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x365b935d
- (void)webView:(id)view didClearWindowObjectForFrame:(id)frame inScriptWorld:(id)scriptWorld;	// 0x365b9371
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x365b933d
- (void)webView:(id)view didDetectXSS:(id)xss;	// 0x365b936d
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x365b9349
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x365b9339
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x365b9385
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x365b9345
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x365b9381
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x365b938d
- (void)webView:(id)view didHandleOnloadEventsForFrame:(id)frame;	// 0x365b9389
- (void)webView:(id)view didPopStateWithinPageForFrame:(id)frame;	// 0x365b937d
- (void)webView:(id)view didPushStateWithinPageForFrame:(id)frame;	// 0x365b9375
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x365b9335
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x365b9341
- (void)webView:(id)view didReplaceStateWithinPageForFrame:(id)frame;	// 0x365b9379
- (void)webView:(id)view didRunInsecureContent:(id)content;	// 0x365b9369
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x365b9331
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x365b9359
- (void)webView:(id)view willPerformClientRedirectToURL:(id)url delay:(double)delay fireDate:(id)date forFrame:(id)frame;	// 0x365b9351
- (void)webView:(id)view windowScriptObjectAvailable:(id)available;	// 0x365b9361
- (void)webViewDidDisplayInsecureContent:(id)webView;	// 0x365b9365
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x30d965bd
- (void)_clearUIWebView;	// 0x30d98a15
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x30e4a0b9
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x30e49fa1
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x30e4a1ed
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30e4a119
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30d96eb1
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x30e49fd9
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x30e4a29d
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x30d978bd
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x30d97421
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x30e4a139
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x30e4a0f9
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30d97551
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x30d96c19
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x30e4a0d9
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x30e4a079
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x30d97115
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x30e4a039
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x30e4a019
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x30d97295
- (void)webView:(id)view printFrameView:(id)view2;	// 0x30e4a059
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x30e4a26d
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x30e4a24d
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x30e4a20d
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x30d9794d
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x30e4a22d
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x30d97365
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x30e4a179
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x30e4a199
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x30e4a1cd
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x30e49ff9
- (void)webViewClose:(id)close;	// 0x30e4a159
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x30e4a099
@end


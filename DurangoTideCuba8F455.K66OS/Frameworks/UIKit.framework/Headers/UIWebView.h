/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"
#import "UIScrollViewDelegate.h"

@class NSURLRequest, UIWebViewInternal;
@protocol UIWebViewDelegate;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
@private
	UIWebViewInternal *_internal;	// 44 = 0x2c
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x30259dc9; S=0x30259df9; 
@property(readonly, assign, nonatomic, getter=canGoBack) BOOL canGoBack;	// G=0x3025a0e9; 
@property(readonly, assign, nonatomic, getter=canGoForward) BOOL canGoForward;	// G=0x3025a0a5; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x30259e29; S=0x30259e55; 
@property(assign, nonatomic) id<UIWebViewDelegate> delegate;	// G=0x30258075; S=0x30258059; 
@property(assign, nonatomic) BOOL detectsPhoneNumbers;	// G=0x30259e81; S=0x30259eb1; 
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x30258039; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x30259d69; S=0x30259d99; 
@property(readonly, retain, nonatomic) NSURLRequest *request;	// G=0x30259c45; 
@property(assign) float scale;	// G=0x30259ae5; S=0x30259b11; converted property
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x30258019; S=0x30259d1d; 
- (id)initWithCoder:(id)coder;	// 0x3025af2d
- (id)initWithFrame:(CGRect)frame;	// 0x3025b011
- (id)_browserView;	// 0x302580c9
- (id)_documentView;	// 0x302580e5
- (void)_frameOrBoundsChanged;	// 0x30259991
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3025aed1
- (Class)_printFormatterClass;	// 0x3034b8ad
- (void)_reportError:(id)error;	// 0x30259789
- (id)_scrollView;	// 0x30258101
- (void)_setDrawInWebThread:(BOOL)webThread;	// 0x302587bd
- (void)_setDrawsCheckeredPattern:(BOOL)pattern;	// 0x3025881d
- (void)_setRichTextReaderViewportSettings;	// 0x3025b951
- (void)_setScalesPageToFitViewportSettings;	// 0x3025b815
- (void)_setWebSelectionEnabled:(BOOL)enabled;	// 0x3025811d
- (void)_updateCheckeredPattern;	// 0x30259a7d
- (void)_updateOpaqueAndBackgroundColor;	// 0x30259ee1
- (void)_updateRequest;	// 0x3025a001
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x30259949
- (void)_updateViewSettings;	// 0x3025b499
- (void)_webViewCommonInit:(BOOL)init;	// 0x3025a199
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x30259dc9
// declared property getter: - (BOOL)canGoBack;	// 0x3025a0e9
// declared property getter: - (BOOL)canGoForward;	// 0x3025a0a5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3025878d
- (void)copy:(id)copy;	// 0x30258761
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x302588ad
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x30259e29
- (void)dealloc;	// 0x3025ac09
// declared property getter: - (id)delegate;	// 0x30258075
// declared property getter: - (BOOL)detectsPhoneNumbers;	// 0x30259e81
- (void)encodeWithCoder:(id)coder;	// 0x3025ae01
- (void)goBack;	// 0x30259b9d
- (void)goForward;	// 0x30259b61
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f429
// declared property getter: - (BOOL)isLoading;	// 0x30258039
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x30259c81
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x30259cc5
- (void)loadRequest:(id)request;	// 0x30259cf1
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x30259d69
- (void)modalView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x302580ad
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x3025a9e1
- (void)reload;	// 0x30259c09
// declared property getter: - (id)request;	// 0x30259c45
- (void)saveGeolocation:(id)geolocation;	// 0x3025887d
// converted property getter: - (float)scale;	// 0x30259ae5
// declared property getter: - (BOOL)scalesPageToFit;	// 0x30258019
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x302597e9
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x3025984d
- (void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;	// 0x302598ad
- (void)scrollViewDidZoom:(id)scrollView;	// 0x302598f1
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x30259881
- (void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;	// 0x3025991d
- (void)select:(id)select;	// 0x30258735
- (void)selectAll:(id)all;	// 0x30258709
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x30259df9
- (void)setBackgroundColor:(id)color;	// 0x3025aa59
- (void)setBounds:(CGRect)bounds;	// 0x3025ab61
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x30259e55
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30258059
// declared property setter: - (void)setDetectsPhoneNumbers:(BOOL)numbers;	// 0x30259eb1
- (void)setFrame:(CGRect)frame;	// 0x3025b3f1
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x30259d99
- (void)setOpaque:(BOOL)opaque;	// 0x3025aae5
// converted property setter: - (void)setScale:(float)scale;	// 0x30259b11
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x30259d1d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30258155
- (void)stopLoading;	// 0x30259bd9
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x3025a12d
- (void)view:(id)view didSetFrame:(CGRect)frame oldFrame:(CGRect)frame3;	// 0x30259971
- (id)viewForZoomingInScrollView:(id)scrollView;	// 0x30258091
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x302591e5
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x30258cdd
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x302594c9
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30259585
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x30259719
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x30259105
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x302592b9
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x30258f25
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x302590a9
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30258f6d
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x30258ec5
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x302590f1
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x30259251
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x30259319
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin;	// 0x302593b9
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x30259419
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x30258c3d
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x302588ed
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x30258a09
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x30258b61
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x30258bd1
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x30258a79
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x3025916d
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3025b315
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3025b1ed
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x3025b071
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x302594b1
- (void)webViewClose:(id)close;	// 0x30258d85
@end

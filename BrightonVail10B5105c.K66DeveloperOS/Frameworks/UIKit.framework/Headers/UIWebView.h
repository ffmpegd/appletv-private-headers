/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSURLRequest, UIScrollView, UIWebViewInternal;
@protocol UIWebViewDelegate;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
	UIWebViewInternal *_internal;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x347a92fd; S=0x347a92d1; 
@property(readonly, assign, nonatomic, getter=canGoBack) BOOL canGoBack;	// G=0x347a9745; 
@property(readonly, assign, nonatomic, getter=canGoForward) BOOL canGoForward;	// G=0x347a978d; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x347a92a5; S=0x347a9279; 
@property(assign, nonatomic) id<UIWebViewDelegate> delegate;	// G=0x347a94c9; S=0x347a94a9; 
@property(assign, nonatomic) BOOL detectsPhoneNumbers;	// G=0x347a9245; S=0x347a9219; 
@property(assign, nonatomic) BOOL keyboardDisplayRequiresUserAction;	// G=0x347a77f9; S=0x347a7839; 
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x347a9485; 
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x347a93bd; S=0x347a9391; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x347a935d; S=0x347a9331; 
@property(readonly, assign, nonatomic) NSURLRequest *request;	// G=0x347a959d; 
@property(assign, nonatomic) BOOL scalesPageToFit;	// G=0x347a9461; S=0x347a93f1; 
@property(readonly, assign, nonatomic) UIScrollView *scrollView;	// G=0x347a94e9; 
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x347a97d5; S=0x347a9809; 
+ (void)_fixPathsForSandboxDirectoryChange;	// 0x347a7ef1
+ (id)_relativePathFromAbsolutePath:(id)absolutePath removingPathComponents:(unsigned)components;	// 0x347a7e5d
+ (void)_updatePersistentStoragePaths;	// 0x347a8091
- (id)initWithCoder:(id)coder;	// 0x347a8d61
- (id)initWithFrame:(CGRect)frame;	// 0x347a8d09
- (void)_addShortcut:(id)shortcut;	// 0x347ac3c1
- (BOOL)_alwaysDispatchesScrollEvents;	// 0x347ac129
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x347aa001
- (unsigned)_audioSessionCategoryOverride;	// 0x347ac189
- (void)_beginRotation;	// 0x347a9911
- (id)_browserView;	// 0x347abc59
- (void)_define:(id)define;	// 0x347ac395
- (void)_didCompleteScrolling;	// 0x347aa371
- (void)_didRotate:(id)rotate;	// 0x347a7875
- (id)_documentView;	// 0x347abc79
- (void)_finishRotation;	// 0x347a9975
- (void)_frameOrBoundsChanged;	// 0x347a9a65
- (float)_gapBetweenPages;	// 0x347ac015
- (id)_initWithFrame:(CGRect)frame enableReachability:(BOOL)reachability;	// 0x347a8cb1
- (id)_initWithWebView:(id)webView;	// 0x347abbd9
- (id)_makeAlertView;	// 0x347ab101
- (unsigned)_pageCount;	// 0x347ac0b1
- (float)_pageLength;	// 0x347abf79
- (BOOL)_paginationBehavesLikeColumns;	// 0x347abee1
- (int)_paginationMode;	// 0x347abdd5
- (id)_pdfViewHandler;	// 0x347abcb9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x347a8e55
- (Class)_printFormatterClass;	// 0x348aa9f9
- (void)_reportError:(id)error;	// 0x347aa469
- (void)_rescaleDocument;	// 0x347a99fd
- (id)_scrollView;	// 0x347abc99
- (void)_setAlwaysDispatchesScrollEvents:(BOOL)events;	// 0x347ac0fd
- (void)_setAudioSessionCategoryOverride:(unsigned)override;	// 0x347ac15d
- (void)_setDrawInWebThread:(BOOL)webThread;	// 0x347abd7d
- (void)_setDrawsCheckeredPattern:(BOOL)pattern;	// 0x347abcfd
- (void)_setGapBetweenPages:(float)pages;	// 0x347ac061
- (void)_setOverridesOrientationChangeEventHandling:(BOOL)handling;	// 0x347abcd9
- (void)_setPageLength:(float)length;	// 0x347abfc5
- (void)_setPaginationBehavesLikeColumns:(BOOL)columns;	// 0x347abf29
- (void)_setPaginationMode:(int)mode;	// 0x347abe39
- (void)_setRichTextReaderViewportSettings;	// 0x347a7a2d
- (void)_setScalesPageToFitViewportSettings;	// 0x347a78f1
- (void)_setWebSelectionEnabled:(BOOL)enabled;	// 0x347abd59
- (void)_updateCheckeredPattern;	// 0x347a9835
- (void)_updateOpaqueAndBackgroundColor;	// 0x347a9da1
- (void)_updateRequest;	// 0x347aaa55
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x347aa015
- (void)_updateViewSettings;	// 0x347a7b11
- (void)_webViewCommonInitWithWebView:(id)webView scalesPageToFit:(BOOL)fit shouldEnableReachability:(BOOL)reachability;	// 0x347a8439
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x347ab075
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x347a92fd
// declared property getter: - (BOOL)canGoBack;	// 0x347a9745
// declared property getter: - (BOOL)canGoForward;	// 0x347a978d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x347ac2d9
- (void)configureWithSettings:(id)settings;	// 0x347ac1b5
- (void)copy:(id)copy;	// 0x347ac311
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x347abb45
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x347a92a5
- (void)dealloc;	// 0x347a8fa1
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x347ac945
// declared property getter: - (id)delegate;	// 0x347a94c9
// declared property getter: - (BOOL)detectsPhoneNumbers;	// 0x347a9245
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x347ac87d
- (void)encodeWithCoder:(id)coder;	// 0x347a8eb9
- (void)goBack;	// 0x347a96b5
- (void)goForward;	// 0x347a96fd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x347db27d
// declared property getter: - (BOOL)isLoading;	// 0x347a9485
// declared property getter: - (BOOL)keyboardDisplayRequiresUserAction;	// 0x347a77f9
- (void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;	// 0x347a9569
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x347a9535
- (void)loadRequest:(id)request;	// 0x347a9509
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x347a93bd
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x347a935d
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x347abb69
- (void)reload;	// 0x347a95e1
// declared property getter: - (id)request;	// 0x347a959d
- (void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x347aa16d
- (void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;	// 0x347aa139
// declared property getter: - (BOOL)scalesPageToFit;	// 0x347a9461
// declared property getter: - (id)scrollView;	// 0x347a94e9
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x347aa3e9
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x347aa3d1
- (void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;	// 0x347aa2a5
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x347aa3f9
- (void)scrollViewDidZoom:(id)scrollView;	// 0x347aa249
- (void)scrollViewWasRemoved:(id)removed;	// 0x347aa409
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x347aa315
- (void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;	// 0x347aa1ed
- (void)select:(id)select;	// 0x347ac33d
- (void)selectAll:(id)all;	// 0x347ac369
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x347a92d1
- (void)setBackgroundColor:(id)color;	// 0x347a9f6d
- (void)setBounds:(CGRect)bounds;	// 0x347a9cf5
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x347a9279
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x347a94a9
// declared property setter: - (void)setDetectsPhoneNumbers:(BOOL)numbers;	// 0x347a9219
- (void)setFrame:(CGRect)frame;	// 0x347a9c49
// declared property setter: - (void)setKeyboardDisplayRequiresUserAction:(BOOL)action;	// 0x347a7839
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x347a9391
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x347a9331
- (void)setOpaque:(BOOL)opaque;	// 0x347a9ee9
// declared property setter: - (void)setScalesPageToFit:(BOOL)fit;	// 0x347a93f1
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x347a9809
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x347a98d5
- (void)stopLoading;	// 0x347a9685
- (id)stringByEvaluatingJavaScriptFromString:(id)string;	// 0x347a91a9
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x347a97d5
- (void)view:(id)view didSetFrame:(CGRect)frame oldFrame:(CGRect)frame3;	// 0x347aa005
- (id)viewForZoomingInScrollView:(id)scrollView;	// 0x347aa1a1
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x347aac95
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x347ab5ed
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x347aa789
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x347aa545
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x347aa4d9
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x347abab1
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x347aad75
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x347aabb5
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x347aafb1
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x347aadf5
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x347aae49
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x347ab005
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x347aade5
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x347aac25
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x347aab01
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x347aa8e9
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x347aa859
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x347ab689
- (void)webView:(id)view printFrameView:(id)view2;	// 0x347aa979
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x347ab979
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x347ab909
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x347ab7a9
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x347ab739
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x347ab819
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x347aad05
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x347ab145
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x347ab315
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x347ab449
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x347aa845
- (void)webViewClose:(id)close;	// 0x347ab095
- (void)webViewMainFrameDidCommitLoad:(id)webViewMainFrame;	// 0x347aa06d
- (void)webViewMainFrameDidFailLoad:(id)webViewMainFrame withError:(id)error;	// 0x347aa10d
- (void)webViewMainFrameDidFinishLoad:(id)webViewMainFrame;	// 0x347aa099
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)webViewMainFrame;	// 0x347aa041
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x347aa9e9
@end


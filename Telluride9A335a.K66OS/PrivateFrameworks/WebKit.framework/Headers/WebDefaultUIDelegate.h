/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x34786425
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x347adc25
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x347adc85
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x347adc71
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x347adc75
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x347adc79
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x347adc81
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x347add59
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x34797601
- (void)webView:(id)view printFrameView:(id)view2;	// 0x347adc6d
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x347adc5d
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x347adc61
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x347adc65
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x347adc69
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x347adc59
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x347adc55
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x347adc4d
- (void)webView:(id)view setStatusText:(id)text;	// 0x347adc39
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x347adc45
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x347adc7d
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x347adc41
- (void)webViewClose:(id)close;	// 0x347adc2d
- (id)webViewFirstResponder:(id)responder;	// 0x347adda1
- (void)webViewFocus:(id)focus;	// 0x347adc31
- (CGRect)webViewFrame:(id)frame;	// 0x347add0d
- (BOOL)webViewIsResizable:(id)resizable;	// 0x347adc51
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x347adc49
- (void)webViewShow:(id)show;	// 0x347adc29
- (id)webViewStatusText:(id)text;	// 0x347adc3d
- (void)webViewUnfocus:(id)unfocus;	// 0x347adc35
@end


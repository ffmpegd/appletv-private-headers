/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebView, NSString;

__attribute__((visibility("hidden")))
@interface WebInspectorWindowController : NSObject {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebInspectorFrontendClient *_frontendClient;	// 8 = 0x8
	WebInspectorClient *_inspectorClient;	// 12 = 0xc
	BOOL _destroyingInspectorView;	// 16 = 0x10
	WebView *_webView;	// 20 = 0x14
	NSString *_title;	// 24 = 0x18
}
@property(assign) WebInspectorClient *inspectorClient;	// G=0x339f77e9; S=0x339f77d9; converted property
@property(retain, nonatomic) NSString *title;	// G=0x339f77fd; S=0x339f80a1; @synthesize=_title
@property(readonly, assign, nonatomic) WebView *webView;	// G=0x339f780d; @synthesize=_webView
- (id)init;	// 0x339f7e29
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x339f8191
- (void)dealloc;	// 0x339f8131
- (void)destroyInspectorView:(bool)view;	// 0x339f80c9
// converted property getter: - (WebInspectorClient *)inspectorClient;	// 0x339f77e9
- (void)setFrontendClient:(WebInspectorFrontendClient *)client;	// 0x339f77c9
// converted property setter: - (void)setInspectorClient:(WebInspectorClient *)client;	// 0x339f77d9
// declared property setter: - (void)setTitle:(id)title;	// 0x339f80a1
- (void)showWindow:(id)window;	// 0x339f77f9
// declared property getter: - (id)title;	// 0x339f77fd
// declared property getter: - (id)webView;	// 0x339f780d
@end


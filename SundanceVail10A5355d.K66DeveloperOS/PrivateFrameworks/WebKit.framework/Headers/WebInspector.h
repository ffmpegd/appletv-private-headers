/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {
	WebView *_webView;	// 4 = 0x4
	WebInspectorFrontend *_frontend;	// 8 = 0x8
}
@property(assign, getter=isJavaScriptProfilingEnabled) BOOL javaScriptProfilingEnabled;	// G=0x316d9b49; S=0x316d9b71; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x316d9ba9; S=0x316d9be1; converted property
+ (id)webInspector;	// 0x316d9e19
- (id)initWithWebView:(id)webView;	// 0x316d9865
- (void)attach:(id)attach;	// 0x316d9c2d
- (void)close:(id)close;	// 0x316d9c05
- (void)dealloc;	// 0x316d98a9
- (void)detach:(id)detach;	// 0x316d9c4d
- (void)evaluateInFrontend:(id)frontend callId:(long)anId script:(id)script;	// 0x316d9c6d
- (BOOL)isDebuggingJavaScript;	// 0x316d9981
// converted property getter: - (BOOL)isJavaScriptProfilingEnabled;	// 0x316d9b49
- (BOOL)isProfilingJavaScript;	// 0x316d9a69
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x316d9ba9
- (void)releaseFrontend;	// 0x316d9ded
- (void)setFrontend:(id)frontend;	// 0x316d9dc5
// converted property setter: - (void)setJavaScriptProfilingEnabled:(BOOL)enabled;	// 0x316d9b71
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x316d9be1
- (void)setWebFrame:(id)frame;	// 0x316d9e7d
- (void)show:(id)show;	// 0x316d9931
- (void)showConsole:(id)console;	// 0x316d9941
- (void)showTimeline:(id)timeline;	// 0x316d997d
- (void)showWindow;	// 0x316d9909
- (void)showWindow:(id)window;	// 0x316d9ec9
- (void)startDebuggingJavaScript:(id)script;	// 0x316d9a19
- (void)startProfilingJavaScript:(id)script;	// 0x316d9b01
- (void)stopDebuggingJavaScript:(id)script;	// 0x316d9a41
- (void)stopProfilingJavaScript:(id)script;	// 0x316d9b25
- (void)toggleDebuggingJavaScript:(id)script;	// 0x316d99b9
- (void)toggleProfilingJavaScript:(id)script;	// 0x316d9aa1
- (void)webViewClosed;	// 0x316d98f5
@end

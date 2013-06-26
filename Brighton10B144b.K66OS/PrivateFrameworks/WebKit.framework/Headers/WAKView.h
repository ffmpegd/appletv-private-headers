/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library


@interface WAKView (WebHTMLViewFileInternal)
- (void)_web_addDescendantWebHTMLViewsToArray:(id)array;	// 0x365e59cd
@end

@interface WAKView (WebExtras)
- (CGRect)_web_convertRect:(CGRect)rect toView:(id)view;	// 0x365f3489
- (BOOL)_web_firstResponderIsSelfOrDescendantView;	// 0x365f33f9
- (id)_web_parentWebFrameView;	// 0x365f33bd
- (id)_web_superviewOfClass:(Class)aClass;	// 0x365f336d
@end

@interface WAKView (WebDocumentViewExtras)
- (id)_frame;	// 0x365f3611
- (id)_webView;	// 0x365f3639
@end

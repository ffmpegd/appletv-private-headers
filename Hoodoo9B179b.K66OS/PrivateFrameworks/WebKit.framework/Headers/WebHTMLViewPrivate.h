/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSArray, NSMutableDictionary, WAKView, WebPluginController, WebEvent, NSString, NSTimer, WebDataSource;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject {
@private
	BOOL closed;	// 4 = 0x4
	BOOL ignoringMouseDraggedEvents;	// 5 = 0x5
	BOOL printing;	// 6 = 0x6
	BOOL paginateScreenContent;	// 7 = 0x7
	WAKView *layerHostingView;	// 8 = 0x8
	BOOL drawingIntoLayer;	// 12 = 0xc
	WebEvent *mouseDownEvent;	// 16 = 0x10
	BOOL handlingMouseDownEvent;	// 20 = 0x14
	WebEvent *keyDownEvent;	// 24 = 0x18
	BOOL exposeInputContext;	// 28 = 0x1c
	CGPoint lastScrollPosition;	// 32 = 0x20
	BOOL inScrollPositionChanged;	// 40 = 0x28
	WebPluginController *pluginController;	// 44 = 0x2c
	NSString *toolTip;	// 48 = 0x30
	id trackingRectOwner;	// 52 = 0x34
	void *trackingRectUserData;	// 56 = 0x38
	NSTimer *autoscrollTimer;	// 60 = 0x3c
	WebEvent *autoscrollTriggerEvent;	// 64 = 0x40
	NSArray *pageRects;	// 68 = 0x44
	NSMutableDictionary *highlighters;	// 72 = 0x48
	BOOL transparentBackground;	// 76 = 0x4c
	WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;	// 80 = 0x50
	WebDataSource *dataSource;	// 84 = 0x54
	SEL selectorForDoCommandBySelector;	// 88 = 0x58
}
+ (void)initialize;	// 0x3451189d
- (void)clear;	// 0x3452fa0d
- (void)dealloc;	// 0x3452fbdd
- (void)finalize;	// 0x34569f0d
@end

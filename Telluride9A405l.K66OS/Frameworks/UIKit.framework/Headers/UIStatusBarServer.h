/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject {
	id<UIStatusBarServerClient> _statusBar;	// 4 = 0x4
	CFRunLoopSourceRef _source;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIStatusBarServerClient> statusBar;	// G=0x32f8159d; S=0x32ca8b95; @synthesize=_statusBar
+ (unsigned)_publisherPort;	// 0x32de1ab9
+ (unsigned)_serverPort;	// 0x32c7bc65
+ (void)addStatusBarItem:(int)item;	// 0x32de21d9
+ (void)addStyleOverrides:(int)overrides;	// 0x32f812c5
+ (id)getDoubleHeightStatusStringForStyle:(int)style;	// 0x32cacfd1
+ (double)getGlowAnimationEndTimeForStyle:(int)style;	// 0x32f81511
+ (BOOL)getGlowAnimationStateForStyle:(int)style;	// 0x32cad685
+ (XXStruct_rXel2A *)getStatusBarData;	// 0x32ca8f95
+ (XXStruct_04ef8B *)getStatusBarOverrideData;	// 0x32f814d1
+ (int)getStyleOverrides;	// 0x32ca8ead
+ (void)permanentizeStatusBarOverrideData;	// 0x32f81459
+ (void)postDoubleHeightStatusString:(id)string forStyle:(int)style;	// 0x32f813a9
+ (void)postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x32f8136d
+ (void)postStatusBarData:(XXStruct_rXel2A *)data withActions:(int)actions;	// 0x32c7bc25
+ (void)postStatusBarOverrideData:(XXStruct_04ef8B *)data;	// 0x32f8141d
+ (void)removeStatusBarItem:(int)item;	// 0x32de1a65
+ (void)removeStyleOverrides:(int)overrides;	// 0x32f81319
+ (void)runServer;	// 0x32f81269
- (id)initWithStatusBar:(id)statusBar;	// 0x32ca8b4d
- (void)_receivedDoubleHeightStatus:(const char *)status forStyle:(int)style;	// 0x32db805d
- (void)_receivedGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x32f81549
- (void)_receivedStatusBarData:(XXStruct_rXel2A *)data actions:(int)actions;	// 0x32c86ad5
- (void)_receivedStyleOverrides:(int)overrides;	// 0x32db7f15
- (void)dealloc;	// 0x32f8148d
// declared property setter: - (void)setStatusBar:(id)bar;	// 0x32ca8b95
// declared property getter: - (id)statusBar;	// 0x32f8159d
@end


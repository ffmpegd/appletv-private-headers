/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSThread.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIStatusBarServerThread : NSThread {
@private
	NSMutableArray *_clientPorts;	// 52 = 0x34
	NSMutableArray *_publishers;	// 56 = 0x38
	XXStruct_rXel2A _statusBarData;	// 60 = 0x3c
	XXStruct_rXel2A _composedStatusBarData;	// 2124 = 0x84c
	XXStruct_04ef8B _overrides;	// 4188 = 0x105c
	CFDictionaryRef _doubleHeightStatusStrings;	// 6280 = 0x1888
	CFDictionaryRef _glowAnimationStates;	// 6284 = 0x188c
	NSMutableDictionary *_glowAnimationEndTimes;	// 6288 = 0x1890
	BOOL _composedStatusBarDataValid;	// 6292 = 0x1894
}
- (void)_addClient:(unsigned)client;	// 0x353bf3d1
- (void)_addStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x353bfe91
- (void)_addStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x353bf89d
- (void)_broadcastStatusBarDataWithActions:(int)actions;	// 0x350bafe5
- (void)_broadcastStyleOverrides;	// 0x353bf7f1
- (id)_doubleHeightStatusStringForStyle:(int)style;	// 0x353bfc9d
- (double)_glowAnimationEndTimeForStyle:(int)style;	// 0x353bfaf1
- (BOOL)_glowAnimationStateForStyle:(int)style;	// 0x353bfb61
- (BOOL)_permanentizeStatusBarOverrideData;	// 0x353bfe1d
- (void)_postDoubleHeightStatus:(char *)status forStyle:(int)style;	// 0x353bfcb1
- (void)_postGlowAnimationState:(BOOL)state forStyle:(int)style;	// 0x353bfbc1
- (void)_postStatusBarData:(XXStruct_rXel2A *)data actions:(int)actions;	// 0x350baf9d
- (void)_postStatusBarOverrideData:(XXStruct_04ef8B *)data;	// 0x353bfdc5
- (id)_publisherForPort:(unsigned)port;	// 0x353bf4e5
- (void)_removeAnimationEndTimesForOverrides:(int)overrides;	// 0x353bfa59
- (void)_removeClient:(CFMachPortRef)client;	// 0x353bf49d
- (void)_removePublisher:(CFMachPortRef)publisher;	// 0x353bf6b5
- (void)_removeStatusBarItem:(int)item forPublisher:(id)publisher;	// 0x353bfed5
- (void)_removeStyleOverrides:(int)overrides forPublisher:(id)publisher;	// 0x353bfa01
- (void)_setAnimationEndTimesForOverrides:(int)overrides;	// 0x353bf8f5
- (XXStruct_rXel2A *)_statusBarData;	// 0x350bb0a1
- (XXStruct_04ef8B *)_statusBarOverrideData;	// 0x353bf735
- (int)_styleOverrides;	// 0x353bf745
- (void)main;	// 0x353bf121
@end


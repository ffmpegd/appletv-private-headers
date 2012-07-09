/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarPublisher : NSObject {
@private
	CFMachPortRef _machPort;	// 4 = 0x4
	int _styleOverrides;	// 8 = 0x8
	NSMutableSet *_statusBarItems;	// 12 = 0xc
}
@property(readonly, retain) NSMutableSet *statusBarItems;	// G=0x30098529; converted property
@property(readonly, assign) int styleOverrides;	// G=0x303838cd; converted property
- (id)initWithCFMachPort:(CFMachPortRef)cfmachPort;	// 0x303837b5
- (void)addStatusBarItem:(int)item;	// 0x30383911
- (int)addStyleOverrides:(int)overrides;	// 0x303838dd
- (void)dealloc;	// 0x30383831
- (unsigned)publisherPort;	// 0x303838b9
- (void)removeStatusBarItem:(int)item;	// 0x30383959
- (int)removeStyleOverrides:(int)overrides;	// 0x303838f5
// converted property getter: - (id)statusBarItems;	// 0x30098529
// converted property getter: - (int)styleOverrides;	// 0x303838cd
@end

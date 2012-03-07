/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"

@class NSString, NSCountedSet, NSMutableSet, NSMutableDictionary;

@interface DAPowerAssertionManager : NSObject {
	NSString *_uuid;	// 4 = 0x4
	NSCountedSet *_contexts;	// 8 = 0x8
	NSMutableDictionary *_groupIdentifierToContexts;	// 12 = 0xc
	CFDictionaryRef _contextToGroupIdentifier;	// 16 = 0x10
	NSMutableSet *_heldAsideGroupIdentifiers;	// 20 = 0x14
	NSCountedSet *_heldAsideContexts;	// 24 = 0x18
	void *_timedAssertionRef;	// 28 = 0x1c
}
+ (id)sharedPowerAssertionManager;	// 0x36c20971
+ (void)vendDaemons:(Class)daemons;	// 0x36c20961
- (id)init;	// 0x36c2070d
- (void)_releaseAssertions;	// 0x36c21921
- (void)_retainAssertions;	// 0x36c21869
- (void)dealloc;	// 0x36c20891
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x36c21325
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x36c20a81
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x36c215c9
- (void)releasePowerAssertion:(id)assertion;	// 0x36c20f19
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x36c20bd9
- (id)stateString;	// 0x36c21235
@end


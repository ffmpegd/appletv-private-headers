/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
	NSArray *_policies;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	BOOL _remoteWipe;	// 48 = 0x30
	NSString *_policyType;	// 52 = 0x34
}
@property(readonly, retain) NSArray *policies;	// G=0x321f2489; converted property
@property(retain) NSString *policyType;	// G=0x321f2435; S=0x321f2445; converted property
@property(readonly, assign) BOOL remoteWipe;	// G=0x321f24a9; converted property
@property(readonly, retain) NSNumber *status;	// G=0x321f2499; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321f21bd
+ (BOOL)frontingBasicTypes;	// 0x321f22b9
+ (BOOL)notifyOfUnknownTokens;	// 0x321f230d
+ (BOOL)parsingLeafNode;	// 0x321f2211
+ (BOOL)parsingWithSubItems;	// 0x321f2265
- (id)init;	// 0x321f23d5
- (id)initWithPolicyType:(id)policyType;	// 0x321f23f5
- (void)_setPolicies:(id)policies;	// 0x321f24b9
- (void)_setRemoteWipe:(id)wipe;	// 0x321f24fd
- (void)_setStatus:(id)status;	// 0x321f2511
- (id)asParseRules;	// 0x321f2555
- (void)dealloc;	// 0x321f2361
- (id)description;	// 0x321f2925
// converted property getter: - (id)policies;	// 0x321f2489
// converted property getter: - (id)policyType;	// 0x321f2435
// converted property getter: - (BOOL)remoteWipe;	// 0x321f24a9
// converted property setter: - (void)setPolicyType:(id)type;	// 0x321f2445
// converted property getter: - (id)status;	// 0x321f2499
@end


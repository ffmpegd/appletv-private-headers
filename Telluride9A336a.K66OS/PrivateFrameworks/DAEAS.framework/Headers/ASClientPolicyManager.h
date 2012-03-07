/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicyManager.h"

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {
	NSString *_powerAssertionGroupIdentifier;	// 12 = 0xc
}
- (id)initWithAccount:(id)account;	// 0x31566f31
- (void)dealloc;	// 0x31566f5d
- (void)policyKeyChanged:(id)changed;	// 0x31567025
- (void)requestPolicyUpdate;	// 0x315670f5
- (void)setDelegate:(id)delegate;	// 0x315671f9
@end


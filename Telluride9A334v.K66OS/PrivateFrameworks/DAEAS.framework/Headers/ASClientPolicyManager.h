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
- (id)initWithAccount:(id)account;	// 0x30a43f31
- (void)dealloc;	// 0x30a43f5d
- (void)policyKeyChanged:(id)changed;	// 0x30a44025
- (void)requestPolicyUpdate;	// 0x30a440f5
- (void)setDelegate:(id)delegate;	// 0x30a441f9
@end


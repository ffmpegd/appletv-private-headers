/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface ASPerAccountPolicyData : NSObject {
	NSString *_accountPersistentUUID;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *policyKey;	// G=0x336b5ab9; 
@property(readonly, assign, nonatomic) NSDictionary *policyValues;	// G=0x336b5b19; 
- (id)initWithAccountPersistentUUID:(id)accountPersistentUUID;	// 0x336b58ad
- (void)dealloc;	// 0x336b5a6d
- (id)description;	// 0x336b59e9
// declared property getter: - (id)policyKey;	// 0x336b5ab9
// declared property getter: - (id)policyValues;	// 0x336b5b19
- (void)setPolicyKey:(id)key policyValues:(id)values;	// 0x336b5b79
@end


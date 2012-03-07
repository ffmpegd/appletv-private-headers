/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSString, ASPolicy;

@interface ASProvisionTask : ASTask {
	int _type;	// 104 = 0x68
	ASPolicy *_policy;	// 108 = 0x6c
	NSString *_key;	// 112 = 0x70
}
@property(readonly, assign) int type;	// G=0x31595b55; converted property
- (id)initWithOriginalKeyForPolicyRequest:(id)policyRequest;	// 0x31595a8d
- (id)initWithPolicyAcknowledgement:(id)policyAcknowledgement withKey:(id)key;	// 0x31595aad
- (id)initWithRemoteWipeAcknowledgement:(id)remoteWipeAcknowledgement withKey:(id)key;	// 0x31595ad1
- (id)_initWithType:(int)type policy:(id)policy key:(id)key;	// 0x315959fd
- (id)_policyID;	// 0x31595b65
- (id)_provisioningType;	// 0x31595b9d
- (int)commandCode;	// 0x31595b99
- (void)dealloc;	// 0x31595af5
- (void)finishWithError:(id)error;	// 0x31596261
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31595de5
- (BOOL)processContext:(id)context;	// 0x31595df9
- (id)requestBody;	// 0x31595bf5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31595dc5
// converted property getter: - (int)type;	// 0x31595b55
@end


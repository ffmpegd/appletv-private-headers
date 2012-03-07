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
@property(readonly, assign) int type;	// G=0x34203b55; converted property
- (id)initWithOriginalKeyForPolicyRequest:(id)policyRequest;	// 0x34203a8d
- (id)initWithPolicyAcknowledgement:(id)policyAcknowledgement withKey:(id)key;	// 0x34203aad
- (id)initWithRemoteWipeAcknowledgement:(id)remoteWipeAcknowledgement withKey:(id)key;	// 0x34203ad1
- (id)_initWithType:(int)type policy:(id)policy key:(id)key;	// 0x342039fd
- (id)_policyID;	// 0x34203b65
- (id)_provisioningType;	// 0x34203b9d
- (int)commandCode;	// 0x34203b99
- (void)dealloc;	// 0x34203af5
- (void)finishWithError:(id)error;	// 0x34204261
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x34203de5
- (BOOL)processContext:(id)context;	// 0x34203df9
- (id)requestBody;	// 0x34203bf5
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34203dc5
// converted property getter: - (int)type;	// 0x34203b55
@end


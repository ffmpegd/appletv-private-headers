/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x304a5fb5
- (id)init;	// 0x304a5ffd
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x304a6cd9
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x304a6d25
- (id)allIncomingMessages;	// 0x304a6b91
- (id)decodeMessage:(id)message;	// 0x304a6ee9
- (id)deferredMessageWithId:(unsigned)anId;	// 0x304a6d79
- (id)encodeMessage:(id)message;	// 0x304a6ecd
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x304a7189
- (int)incomingMessageCount;	// 0x304a6b55
- (id)incomingMessageWithId:(unsigned)anId;	// 0x304a6d2d
- (id)incomingMessageWithId:(unsigned)anId telephonyCenter:(CTTelephonyCenterRef)center isDeferred:(BOOL)deferred;	// 0x304a69ad
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x304a6f05
- (BOOL)isMmsConfigured;	// 0x304a6fcd
- (BOOL)isMmsEnabled;	// 0x304a6fb5
- (XXStruct_K5nmsA)send:(id)send;	// 0x304a6819
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x304a6845
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x304a65bd
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x304a61d1
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x304a6281
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x304a6029
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x304a7021
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x304a7045
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x304a6f89
- (id)statusOfOutgoingMessages;	// 0x304a6dc5
@end

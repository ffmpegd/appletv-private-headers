/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AssistantServices-Structs.h"

@class NSMutableDictionary, NSString;

@interface DKMessage : NSObject {
	NSString *_name;	// 4 = 0x4
	NSMutableDictionary *_info;	// 8 = 0x8
	xpc_connection_s *_x_reply_connection;	// 12 = 0xc
	void *_x_reply;	// 16 = 0x10
	NSMutableDictionary *_replyInfo;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32c31d85; @synthesize=_name
- (id)initWithName:(id)name;	// 0x32c3175d
- (void).cxx_destruct;	// 0x32c31d95
- (void *)_createXPCMessage;	// 0x32c31ba5
- (id)_initWithXPCMessage:(void *)xpcmessage;	// 0x32c31a4d
- (void)dealloc;	// 0x32c317d1
- (id)description;	// 0x32c3182d
- (id)errorFromInfo;	// 0x32c36a19
- (id)infoValueForKey:(id)key;	// 0x32c31951
- (BOOL)isErrorMessage;	// 0x32c36be9
// declared property getter: - (id)name;	// 0x32c31d85
- (BOOL)needsReply;	// 0x32c31a1d
- (void)sendReply;	// 0x32c31c55
- (void)setInfoValue:(id)value forKey:(id)key;	// 0x32c318a5
- (void)setInfoWithError:(id)error;	// 0x32c3681d
- (void)setReplyValue:(id)value forKey:(id)key;	// 0x32c31971
- (void)setReplyWithError:(id)error;	// 0x32c36c1d
@end


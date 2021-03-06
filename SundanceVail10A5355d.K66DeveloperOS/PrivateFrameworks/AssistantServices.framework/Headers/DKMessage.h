/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import "AssistantServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface DKMessage : NSObject {
	NSString *_name;	// 4 = 0x4
	NSMutableDictionary *_info;	// 8 = 0x8
	xpc_connection_s *_x_reply_connection;	// 12 = 0xc
	void *_x_reply;	// 16 = 0x10
	NSMutableDictionary *_replyInfo;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x33fa027d; @synthesize=_name
- (id)initWithName:(id)name;	// 0x33f9fc55
- (void).cxx_destruct;	// 0x33fa028d
- (void *)_createXPCMessage;	// 0x33fa009d
- (id)_initWithXPCMessage:(void *)xpcmessage;	// 0x33f9ff45
- (void)dealloc;	// 0x33f9fcc9
- (id)description;	// 0x33f9fd25
- (id)errorFromInfo;	// 0x33fa4ca9
- (id)infoValueForKey:(id)key;	// 0x33f9fe49
- (BOOL)isErrorMessage;	// 0x33fa4e79
// declared property getter: - (id)name;	// 0x33fa027d
- (BOOL)needsReply;	// 0x33f9ff15
- (void)sendReply;	// 0x33fa014d
- (void)setInfoValue:(id)value forKey:(id)key;	// 0x33f9fd9d
- (void)setInfoWithError:(id)error;	// 0x33fa4aad
- (void)setReplyValue:(id)value forKey:(id)key;	// 0x33f9fe69
- (void)setReplyWithError:(id)error;	// 0x33fa4ead
@end


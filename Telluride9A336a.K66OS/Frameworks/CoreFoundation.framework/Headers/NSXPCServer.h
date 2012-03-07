/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSXPCObject.h"

@class NSString, NSMutableArray;

@interface NSXPCServer : NSObject <NSXPCObject> {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	int _lock;	// 8 = 0x8
	dispatch_queue_s *_dq;	// 12 = 0xc
	NSString *_serviceName;	// 16 = 0x10
	id _makeNewClient;	// 20 = 0x14
	NSMutableArray *_clients;	// 24 = 0x18
	NSMutableArray *_invalidHandlers;	// 28 = 0x1c
	int _started;	// 32 = 0x20
	int _invalid;	// 36 = 0x24
	BOOL _priv;	// 40 = 0x28
}
@property(assign, nonatomic) dispatch_queue_s *dispatchQueue;	// G=0x307396b1; S=0x307396c1; @dynamic
@property(copy) id makeNewClient;	// G=0x307395b9; S=0x30739611; @dynamic
@property(copy) NSString *serviceName;	// G=0x307394c1; S=0x30739519; @dynamic
- (id)init;	// 0x307393c1
- (void)__invalidate;	// 0x30739751
- (void)addInvalidationHandler:(id)handler;	// 0x3073993d
- (id)allClients;	// 0x30739b99
- (void)dealloc;	// 0x3073944d
// declared property getter: - (dispatch_queue_s *)dispatchQueue;	// 0x307396b1
- (void *)encodeToNewXPCObject;	// 0x30739bf1
- (void)invalidate;	// 0x307398dd
// declared property getter: - (id)makeNewClient;	// 0x307395b9
// declared property getter: - (id)serviceName;	// 0x307394c1
// declared property setter: - (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x307396c1
// declared property setter: - (void)setMakeNewClient:(id)client;	// 0x30739611
- (void)setPrivileged:(BOOL)privileged;	// 0x30739701
// declared property setter: - (void)setServiceName:(id)name;	// 0x30739519
- (void)start;	// 0x307399c1
@end


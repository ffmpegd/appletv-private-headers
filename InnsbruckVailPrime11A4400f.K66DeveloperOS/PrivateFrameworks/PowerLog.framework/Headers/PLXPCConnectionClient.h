/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import </libobjc.A.h>

@class PLXPCConection;

@interface PLXPCConnectionClient : NSObject {
	PLXPCConection *xpcConnection;	// 4 = 0x4
}
- (id)init;	// 0x323f12c1
- (BOOL)PLXPCSendMessage:(id)message;	// 0x323f1351
- (id)PLXPCSendMessageWithReply:(id)reply;	// 0x323f1331
- (void)PLXPCinterruptedHandler;	// 0x323f1379
- (void)PLXPCinvalidationHandler;	// 0x323f137d
@end


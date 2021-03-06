/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library
#import "AirTraffic-Structs.h"

@class NSDictionary;

@interface ATClientController : NSObject {
	NSDictionary *_clientMap;	// 4 = 0x4
	CFDictionaryRef _queueMap;	// 8 = 0x8
}
+ (id)controllerForDataclasses:(id)dataclasses;	// 0x3609bb19
+ (id)sharedInstance;	// 0x3609bb91
- (BOOL)_loadClientsForDataclasses:(id)dataclasses;	// 0x3609b661
- (id)allClients;	// 0x3609b0cd
- (id)clientForDataclass:(id)dataclass;	// 0x3609b0ad
- (void)dealloc;	// 0x3609bbd9
- (dispatch_queue_s *)queueForClient:(id)client;	// 0x3609b4d9
- (void)resetQueues;	// 0x3609b0ed
- (void)waitToDrain;	// 0x3609b3f1
@end


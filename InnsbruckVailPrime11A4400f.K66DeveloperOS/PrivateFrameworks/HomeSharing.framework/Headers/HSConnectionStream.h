/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_queue;

@interface HSConnectionStream : NSObject {
	CFReadStreamRef _readStream;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}
- (id)init;	// 0x3107b5b5
- (void)dealloc;	// 0x3107b605
- (void)sendCFHTTPMessage:(CFHTTPMessageRef)message isConcurrent:(BOOL)concurrent timeoutInterval:(double)interval withResponseHandler:(id)responseHandler;	// 0x3107b6c9
@end


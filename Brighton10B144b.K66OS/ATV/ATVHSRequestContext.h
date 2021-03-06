/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSObject, ATVHSRequest, ATVHSConnectionStream;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVHSRequestContext : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_completionQueue;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	ATVHSRequest *_hsRequest;	// 12 = 0xc
	CFReadStreamRef _stream;	// 16 = 0x10
	CFRunLoopTimerRef _timer;	// 20 = 0x14
	double _timeSinceLastBytesReceived;	// 24 = 0x18
	ATVHSConnectionStream *_connectionStream;	// 32 = 0x20
}
@property(assign, nonatomic) ATVHSConnectionStream *connectionStream;	// G=0xebb45; S=0xebb55; @synthesize=_connectionStream
@property(retain) ATVHSRequest *hsRequest;	// G=0xebad5; S=0xebae9; @synthesize=_hsRequest
@property(assign, nonatomic) CFReadStreamRef stream;	// G=0xebaf9; S=0xeb955; @synthesize=_stream
@property(assign, nonatomic) double timeSinceLastBytesReceived;	// G=0xebb19; S=0xebb31; @synthesize=_timeSinceLastBytesReceived
@property(assign, nonatomic) CFRunLoopTimerRef timer;	// G=0xebb09; S=0xeb995; @synthesize=_timer
- (id)initWithHSRequest:(id)hsrequest withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xeb80d
// declared property getter: - (id)connectionStream;	// 0xebb45
- (void)dealloc;	// 0xeb899
- (id)description;	// 0xeb935
// declared property getter: - (id)hsRequest;	// 0xebad5
- (void)sendCallBackWithData:(id)data httpStatus:(long)status contentType:(id)type;	// 0xeb9d5
// declared property setter: - (void)setConnectionStream:(id)stream;	// 0xebb55
// declared property setter: - (void)setHsRequest:(id)request;	// 0xebae9
// declared property setter: - (void)setStream:(CFReadStreamRef)stream;	// 0xeb955
// declared property setter: - (void)setTimeSinceLastBytesReceived:(double)received;	// 0xebb31
// declared property setter: - (void)setTimer:(CFRunLoopTimerRef)timer;	// 0xeb995
// declared property getter: - (CFReadStreamRef)stream;	// 0xebaf9
// declared property getter: - (double)timeSinceLastBytesReceived;	// 0xebb19
// declared property getter: - (CFRunLoopTimerRef)timer;	// 0xebb09
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>

@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {
	double _finishTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _renderBeginTime;	// 20 = 0x14
	double _renderEndTime;	// 28 = 0x1c
	double _startTime;	// 36 = 0x24
	NSURLResponse *_urlResponse;	// 44 = 0x2c
}
@property(copy, nonatomic) NSURLResponse *URLResponse;	// G=0x33c8df9d; S=0x33c8dfb1; @synthesize=_urlResponse
@property(readonly, assign, nonatomic) double finishInterval;	// G=0x33c8de61; 
@property(readonly, assign, nonatomic) double receivedResponseInterval;	// G=0x33c8de91; 
@property(readonly, assign, nonatomic) double renderBeginInterval;	// G=0x33c8dec1; 
@property(readonly, assign, nonatomic) double renderEndInterval;	// G=0x33c8def1; 
@property(assign, nonatomic) double startTime;	// G=0x33c8df71; S=0x33c8df89; @synthesize=_startTime
// declared property getter: - (id)URLResponse;	// 0x33c8df9d
- (void)dealloc;	// 0x33c8de15
// declared property getter: - (double)finishInterval;	// 0x33c8de61
// declared property getter: - (double)receivedResponseInterval;	// 0x33c8de91
// declared property getter: - (double)renderBeginInterval;	// 0x33c8dec1
// declared property getter: - (double)renderEndInterval;	// 0x33c8def1
- (void)setFinishTime:(double)time;	// 0x33c8df21
- (void)setReceivedResponseTime:(double)time;	// 0x33c8df35
- (void)setRenderBeginTime:(double)time;	// 0x33c8df49
- (void)setRenderFinishTime:(double)time;	// 0x33c8df5d
// declared property setter: - (void)setStartTime:(double)time;	// 0x33c8df89
// declared property setter: - (void)setURLResponse:(id)response;	// 0x33c8dfb1
// declared property getter: - (double)startTime;	// 0x33c8df71
@end


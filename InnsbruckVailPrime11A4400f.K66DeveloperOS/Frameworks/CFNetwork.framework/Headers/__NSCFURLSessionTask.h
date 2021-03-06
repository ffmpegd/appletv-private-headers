/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import "CFNetwork-Structs.h"
#import </libobjc.A.h>
#import "NSSecureCoding.h"
#import "NSCopying.h"

@class NSString, NSURLRequest, NSURLResponse, NSError;

@interface __NSCFURLSessionTask : NSObject <NSSecureCoding, NSCopying> {
	unsigned _taskIdentifier;	// 4 = 0x4
	NSURLRequest *_originalRequest;	// 8 = 0x8
	NSURLRequest *_currentRequest;	// 12 = 0xc
	NSURLResponse *_response;	// 16 = 0x10
	NSString *_taskDescription;	// 20 = 0x14
	int _state;	// 24 = 0x18
	NSError *_error;	// 28 = 0x1c
	long long _countOfBytesReceived;	// 32 = 0x20
	long long _countOfBytesSent;	// 40 = 0x28
	long long _countOfBytesExpectedToSend;	// 48 = 0x30
	long long _countOfBytesExpectedToReceive;	// 56 = 0x38
	double _startTime;	// 64 = 0x40
}
@property(assign) long long countOfBytesExpectedToReceive;	// G=0x2cfa9655; S=0x2cfa9689; @synthesize=_countOfBytesExpectedToReceive
@property(assign) long long countOfBytesExpectedToSend;	// G=0x2cfa95ed; S=0x2cfa9621; @synthesize=_countOfBytesExpectedToSend
@property(assign) long long countOfBytesReceived;	// G=0x2cfa951d; S=0x2cfa9551; @synthesize=_countOfBytesReceived
@property(assign) long long countOfBytesSent;	// G=0x2cfa9585; S=0x2cfa95b9; @synthesize=_countOfBytesSent
@property(copy) NSURLRequest *currentRequest;	// G=0x2cfa94d5; S=0x2cfa94e9; @synthesize=_currentRequest
@property(copy) NSError *error;	// G=0x2cfa970d; S=0x2cfa9721; @synthesize=_error
@property(copy) NSURLRequest *originalRequest;	// G=0x2cfa94b1; S=0x2cfa94c5; @synthesize=_originalRequest
@property(copy) NSURLResponse *response;	// G=0x2cfa94f9; S=0x2cfa950d; @synthesize=_response
@property(assign) double startTime;	// G=0x2cfa9731; S=0x2cfa9765; @synthesize=_startTime
@property(assign) int state;	// G=0x2cfa96e1; S=0x2cfa96f5; @synthesize=_state
@property(copy) NSString *taskDescription;	// G=0x2cfa96bd; S=0x2cfa96d1; @synthesize=_taskDescription
@property(assign) unsigned taskIdentifier;	// G=0x2cfa9485; S=0x2cfa9499; @synthesize=_taskIdentifier
+ (BOOL)supportsSecureCoding;	// 0x2cfa8fe9
- (id)initWithCoder:(id)coder;	// 0x2cfa91d9
- (id)initWithRequest:(id)request ident:(unsigned)ident;	// 0x2cfa8b85
- (id)initWithTask:(id)task;	// 0x2cfa8c39
- (void)_onqueue_connection_cancel;	// 0x2cfa8e69
- (void)_onqueue_connection_resume;	// 0x2cfa8ed1
- (void)_onqueue_connection_suspend;	// 0x2cfa8e9d
- (void)cancel;	// 0x2cfa8f05
- (id)copyWithZone:(NSZone *)zone;	// 0x2cfa8fd9
// declared property getter: - (long long)countOfBytesExpectedToReceive;	// 0x2cfa9655
// declared property getter: - (long long)countOfBytesExpectedToSend;	// 0x2cfa95ed
// declared property getter: - (long long)countOfBytesReceived;	// 0x2cfa951d
// declared property getter: - (long long)countOfBytesSent;	// 0x2cfa9585
// declared property getter: - (id)currentRequest;	// 0x2cfa94d5
- (void)dealloc;	// 0x2cfa8de9
- (void)encodeWithCoder:(id)coder;	// 0x2cfa8fed
// declared property getter: - (id)error;	// 0x2cfa970d
// declared property getter: - (id)originalRequest;	// 0x2cfa94b1
// declared property getter: - (id)response;	// 0x2cfa94f9
- (void)resume;	// 0x2cfa8f25
// declared property setter: - (void)setCountOfBytesExpectedToReceive:(long long)receive;	// 0x2cfa9689
// declared property setter: - (void)setCountOfBytesExpectedToSend:(long long)send;	// 0x2cfa9621
// declared property setter: - (void)setCountOfBytesReceived:(long long)bytesReceived;	// 0x2cfa9551
// declared property setter: - (void)setCountOfBytesSent:(long long)bytesSent;	// 0x2cfa95b9
// declared property setter: - (void)setCurrentRequest:(id)request;	// 0x2cfa94e9
// declared property setter: - (void)setError:(id)error;	// 0x2cfa9721
// declared property setter: - (void)setOriginalRequest:(id)request;	// 0x2cfa94c5
// declared property setter: - (void)setResponse:(id)response;	// 0x2cfa950d
// declared property setter: - (void)setStartTime:(double)time;	// 0x2cfa9765
// declared property setter: - (void)setState:(int)state;	// 0x2cfa96f5
// declared property setter: - (void)setTaskDescription:(id)description;	// 0x2cfa96d1
// declared property setter: - (void)setTaskIdentifier:(unsigned)identifier;	// 0x2cfa9499
// declared property getter: - (double)startTime;	// 0x2cfa9731
// declared property getter: - (int)state;	// 0x2cfa96e1
- (void)suspend;	// 0x2cfa8f15
// declared property getter: - (id)taskDescription;	// 0x2cfa96bd
// declared property getter: - (unsigned)taskIdentifier;	// 0x2cfa9485
@end


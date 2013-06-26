/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioRequest.h"

@class SSURLConnectionRequest;

@interface RadioShareInfoRequest : RadioRequest {
	SSURLConnectionRequest *_request;	// 28 = 0x1c
	int _shareType;	// 32 = 0x20
	long long _stationID;	// 36 = 0x24
}
- (id)initWithStation:(id)station shareType:(int)type;	// 0x32664e09
- (void).cxx_destruct;	// 0x32665681
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x32664f15
@end

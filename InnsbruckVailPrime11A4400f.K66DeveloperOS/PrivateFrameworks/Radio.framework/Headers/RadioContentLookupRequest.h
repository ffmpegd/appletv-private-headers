/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioRequest.h"

@class NSArray, SSURLConnectionRequest;

@interface RadioContentLookupRequest : RadioRequest {
	SSURLConnectionRequest *_request;	// 24 = 0x18
	NSArray *_trackStoreIDs;	// 28 = 0x1c
}
- (id)initWithTrackStoreIDs:(id)trackStoreIDs;	// 0x32660ba5
- (void).cxx_destruct;	// 0x32661291
- (void)cancel;	// 0x32660c6d
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x32660c8d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
	int _maxSize;	// 16 = 0x10
}
@property(readonly, assign) int bodyFormat;	// G=0x3258e269; converted property
@property(readonly, assign) int maxSize;	// G=0x3258e279; converted property
@property(readonly, retain) NSString *messageID;	// G=0x3258e259; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withMessageID:(id)messageID withBodySizeLimit:(int)bodySizeLimit;	// 0x3258e1c9
// converted property getter: - (int)bodyFormat;	// 0x3258e269
- (void)dealloc;	// 0x3258e471
- (id)description;	// 0x3258e3e9
- (unsigned)hash;	// 0x3258e289
- (BOOL)isEqual:(id)equal;	// 0x3258e325
// converted property getter: - (int)maxSize;	// 0x3258e279
// converted property getter: - (id)messageID;	// 0x3258e259
@end

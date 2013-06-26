/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSString, NSData;

@interface ATVDMAPResponse : NSObject {
	NSData *_responseBody;	// 4 = 0x4
	unsigned long _httpStatusCode;	// 8 = 0x8
	NSString *_contentType;	// 12 = 0xc
}
@property(readonly, retain) NSString *contentType;	// G=0x300b67ed; converted property
@property(readonly, assign) unsigned long httpStatusCode;	// G=0x300b67dd; converted property
@property(readonly, retain) NSData *responseBody;	// G=0x300b67c9; converted property
- (id)init;	// 0x300b6695
- (id)initWithResponseBody:(id)responseBody httpStatusCode:(unsigned long)code contentType:(id)type;	// 0x300b6725
- (void).cxx_destruct;	// 0x300b6801
// converted property getter: - (id)contentType;	// 0x300b67ed
// converted property getter: - (unsigned long)httpStatusCode;	// 0x300b67dd
// converted property getter: - (id)responseBody;	// 0x300b67c9
@end

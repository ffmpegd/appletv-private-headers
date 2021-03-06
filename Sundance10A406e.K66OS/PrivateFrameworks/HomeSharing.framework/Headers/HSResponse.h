/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSError;

@interface HSResponse : NSObject {
	CFHTTPMessageRef _CFHTTPMessage;	// 4 = 0x4
	NSData *_responseData;	// 8 = 0x8
	unsigned _responseCode;	// 12 = 0xc
	NSDictionary *_responseHeaderFields;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
}
@property(assign, nonatomic) CFHTTPMessageRef CFHTTPMessage;	// G=0x3189e4a1; S=0x3189e46d; @synthesize=_CFHTTPMessage
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3189e4e1; @synthesize=_error
@property(readonly, assign, nonatomic) unsigned responseCode;	// G=0x3189e4c1; @synthesize=_responseCode
@property(readonly, assign, nonatomic) NSData *responseData;	// G=0x3189e4b1; @synthesize=_responseData
@property(readonly, assign, nonatomic) NSDictionary *responseHeaderFields;	// G=0x3189e4d1; @synthesize=_responseHeaderFields
+ (id)responseWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x3189e2d1
+ (id)responseWithResponse:(id)response;	// 0x3189e32d
- (id)initWithCode:(unsigned)code headerFields:(id)fields data:(id)data error:(id)error;	// 0x3189e19d
// declared property getter: - (CFHTTPMessageRef)CFHTTPMessage;	// 0x3189e4a1
- (void)dealloc;	// 0x3189e245
- (id)description;	// 0x3189e3e1
// declared property getter: - (id)error;	// 0x3189e4e1
// declared property getter: - (unsigned)responseCode;	// 0x3189e4c1
// declared property getter: - (id)responseData;	// 0x3189e4b1
// declared property getter: - (id)responseHeaderFields;	// 0x3189e4d1
// declared property setter: - (void)setCFHTTPMessage:(CFHTTPMessageRef)message;	// 0x3189e46d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLRequest.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x31a2122d; S=0x31a21209; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x31a210e5
- (id)copyWithZone:(NSZone *)zone;	// 0x31a20c71
// converted property getter: - (unsigned)requestPriority;	// 0x31a2122d
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x31a210c1
- (void)setAllowsCellularAccess:(BOOL)access;	// 0x31a20ca5
- (void)setBoundInterfaceIdentifier:(id)identifier;	// 0x31a20cc9
- (void)setCachePolicy:(unsigned)policy;	// 0x31a20bf9
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x31a21271
- (void)setHTTPBody:(id)body;	// 0x3195d805
- (void)setHTTPBodyStream:(id)stream;	// 0x31a2110d
- (void)setHTTPContentType:(id)type;	// 0x31a21131
- (void)setHTTPExtraCookies:(id)cookies;	// 0x31a2114d
- (void)setHTTPMethod:(id)method;	// 0x3195d70d
- (void)setHTTPReferrer:(id)referrer;	// 0x31a21171
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x3195d6c1
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x31a2124d
- (void)setHTTPUserAgent:(id)agent;	// 0x31a211ed
- (void)setMainDocumentURL:(id)url;	// 0x31a20c4d
- (void)setNetworkServiceType:(unsigned)type;	// 0x31a20c81
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x31a21209
- (void)setTimeoutInterval:(double)interval;	// 0x31a20c25
- (void)setURL:(id)url;	// 0x31a20bd5
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3195d6e5
@end


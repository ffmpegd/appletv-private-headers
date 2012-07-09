/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSArray, NSInputStream, NSString, NSURL, NSDictionary, NSData;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x34e61e79; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x34e628b5; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x34e61f59; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x34e62039; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x34e62119; @dynamic
@property(retain) NSURL *URL;	// S=0x34e62471; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x34e62391; @dynamic
@property(assign) int URLBagType;	// S=0x34e62a15; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x34e62a95; @dynamic
@property(copy) NSArray *URLs;	// S=0x34e62b75; @dynamic
@property(assign) int allowedRetryCount;	// S=0x34e61c01; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x34e61c81; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x34e61d01; @dynamic
@property(assign) long long expectedContentLength;	// S=0x34e61de1; @dynamic
@property(assign) unsigned networkServiceType;	// S=0x34e62199; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x34e62219; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x34e62995; @dynamic
@property(assign) double timeoutInterval;	// S=0x34e622f9; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x34e624d5; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x34e61bf1
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x34e61c01
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x34e61c81
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x34e61d01
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x34e61de1
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x34e61e79
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x34e628b5
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x34e61f59
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x34e62039
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x34e62119
// declared property setter: - (void)setNetworkServiceType:(unsigned)type;	// 0x34e62199
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x34e62219
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x34e62995
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x34e622f9
// declared property setter: - (void)setURL:(id)url;	// 0x34e62471
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x34e62391
// declared property setter: - (void)setURLBagType:(int)type;	// 0x34e62a15
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x34e62a95
// declared property setter: - (void)setURLs:(id)urls;	// 0x34e62b75
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x34e624d5
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x34e625b5
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x34e62735
@end

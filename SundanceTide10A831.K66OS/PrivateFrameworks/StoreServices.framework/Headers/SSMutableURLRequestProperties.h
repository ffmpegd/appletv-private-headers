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
@property(copy) NSData *HTTPBody;	// S=0x37828ca1; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x3782975d; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x37828d81; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x37828e61; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x37828f41; @dynamic
@property(retain) NSURL *URL;	// S=0x37829319; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x37829239; @dynamic
@property(assign) int URLBagType;	// S=0x37829be5; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x37829c65; @dynamic
@property(copy) NSArray *URLs;	// S=0x37829d45; @dynamic
@property(assign) int allowedRetryCount;	// S=0x37828a29; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x37828aa9; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x37828b29; @dynamic
@property(assign) long long expectedContentLength;	// S=0x37828c09; @dynamic
@property(assign) unsigned networkServiceType;	// S=0x37828fc1; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x37829041; @dynamic
@property(assign) BOOL requiresExtendedValidationCertificates;	// S=0x37829a65; @dynamic
@property(assign) BOOL shouldDecodeResponse;	// S=0x37829ae5; @dynamic
@property(assign) BOOL shouldDisableCellularFallback;	// S=0x37829121; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x37829b65; @dynamic
@property(assign) double timeoutInterval;	// S=0x378291a1; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x3782937d; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x37828a19
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x37828a29
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x37828aa9
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x37828b29
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x37828c09
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x37828ca1
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x3782975d
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x37828d81
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x37828e61
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x37828f41
- (void)setMultiPartFormDataWithDictionary:(id)dictionary;	// 0x3782983d
// declared property setter: - (void)setNetworkServiceType:(unsigned)type;	// 0x37828fc1
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x37829041
// declared property setter: - (void)setRequiresExtendedValidationCertificates:(BOOL)certificates;	// 0x37829a65
// declared property setter: - (void)setShouldDecodeResponse:(BOOL)decodeResponse;	// 0x37829ae5
// declared property setter: - (void)setShouldDisableCellularFallback:(BOOL)disableCellularFallback;	// 0x37829121
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x37829b65
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x378291a1
// declared property setter: - (void)setURL:(id)url;	// 0x37829319
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x37829239
// declared property setter: - (void)setURLBagType:(int)type;	// 0x37829be5
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x37829c65
// declared property setter: - (void)setURLs:(id)urls;	// 0x37829d45
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x3782937d
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3782945d
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x378295dd
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class SSMutableURLRequestProperties, NSInputStream, NSURL, NSArray, NSData, NSDictionary, NSLock, NSString;

__attribute__((visibility("hidden")))
@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
@private
	NSLock *_lock;	// 4 = 0x4
	SSMutableURLRequestProperties *_properties;	// 8 = 0x8
}
@property(retain) NSData *HTTPBody;	// G=0x35f4a6f1; S=0x35f4a831; 
@property(retain) NSInputStream *HTTPBodyStream;	// G=0x35f4a711; S=0x35f4a851; 
@property(retain) NSString *HTTPMethod;	// G=0x35f4a731; S=0x35f4a871; 
@property(assign) int URLBagType;	// G=0x35f4a971; S=0x35f4a8d1; 
@property(retain) NSArray *URLs;	// G=0x35f4a991; S=0x35f4a8f1; 
@property(assign) int allowedRetryCount;	// G=0x35f4a651; S=0x35f4a791; 
@property(retain) NSString *appleClientApplication;	// G=0x35f4a671; S=0x35f4a7b1; 
@property(assign) unsigned cachePolicy;	// G=0x35f4a691; S=0x35f4a7d1; 
@property(retain) NSDictionary *customHeaders;	// G=0x35f4a6b1; S=0x35f4a7f1; 
@property(assign) long long expectedContentLength;	// G=0x35f4a6d1; S=0x35f4a811; 
@property(readonly, assign) NSURL *primaryURL;	// G=0x35f4a771; 
@property(retain) NSDictionary *queryStringDictionary;	// G=0x35f4a751; S=0x35f4a891; 
@property(assign) double timeoutInterval;	// G=0x35f4a951; S=0x35f4a8b1; 
+ (id)requestWithURL:(id)url;	// 0x35f4a615
- (id)init;	// 0x35f49fe9
- (id)initWithCoder:(id)coder;	// 0x35f4a1f5
- (id)initWithRequestProperties:(id)requestProperties;	// 0x35f49ffd
- (id)initWithURL:(id)url;	// 0x35f4a0c1
- (id)initWithURLRequest:(id)urlrequest;	// 0x35f4a051
// declared property getter: - (id)HTTPBody;	// 0x35f4a6f1
// declared property getter: - (id)HTTPBodyStream;	// 0x35f4a711
// declared property getter: - (id)HTTPMethod;	// 0x35f4a731
// declared property getter: - (int)URLBagType;	// 0x35f4a971
// declared property getter: - (id)URLs;	// 0x35f4a991
- (id)_initCommon;	// 0x35f49f61
// declared property getter: - (int)allowedRetryCount;	// 0x35f4a651
// declared property getter: - (id)appleClientApplication;	// 0x35f4a671
// declared property getter: - (unsigned)cachePolicy;	// 0x35f4a691
- (id)copyWithZone:(NSZone *)zone;	// 0x35f4a4fd
// declared property getter: - (id)customHeaders;	// 0x35f4a6b1
- (void)dealloc;	// 0x35f4a101
- (void)encodeWithCoder:(id)coder;	// 0x35f4a161
// declared property getter: - (long long)expectedContentLength;	// 0x35f4a6d1
- (BOOL)isEqual:(id)equal;	// 0x35f4a595
// declared property getter: - (id)primaryURL;	// 0x35f4a771
// declared property getter: - (id)queryStringDictionary;	// 0x35f4a751
- (id)requestProperties;	// 0x35f4a9b1
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x35f4a791
// declared property setter: - (void)setAppleClientApplication:(id)application;	// 0x35f4a7b1
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x35f4a7d1
// declared property setter: - (void)setCustomHeaders:(id)headers;	// 0x35f4a7f1
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x35f4a811
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x35f4a831
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x35f4a851
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x35f4a871
// declared property setter: - (void)setQueryStringDictionary:(id)dictionary;	// 0x35f4a891
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x35f4a8b1
// declared property setter: - (void)setURLBagType:(int)type;	// 0x35f4a8d1
// declared property setter: - (void)setURLs:(id)urls;	// 0x35f4a8f1
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x35f4a911
- (void)setValue:(id)value forQueryStringParameter:(id)queryStringParameter;	// 0x35f4a931
// declared property getter: - (double)timeoutInterval;	// 0x35f4a951
@end


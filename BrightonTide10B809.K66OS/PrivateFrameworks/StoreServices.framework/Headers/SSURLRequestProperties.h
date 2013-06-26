/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSInputStream, NSString, NSURL, NSDictionary, NSData, NSArray;
@protocol OS_dispatch_queue;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {
	int _allowedRetryCount;	// 4 = 0x4
	unsigned _cachePolicy;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	long long _expectedContentLength;	// 20 = 0x14
	NSData *_httpBody;	// 28 = 0x1c
	NSInputStream *_httpBodyStream;	// 32 = 0x20
	NSDictionary *_httpHeaders;	// 36 = 0x24
	NSString *_httpMethod;	// 40 = 0x28
	BOOL _isITunesStoreRequest;	// 44 = 0x2c
	unsigned _networkServiceType;	// 48 = 0x30
	NSDictionary *_requestParameters;	// 52 = 0x34
	BOOL _requiresExtendedValidationCertificates;	// 56 = 0x38
	BOOL _shouldDecodeResponse;	// 57 = 0x39
	BOOL _shouldDisableCellularFallback;	// 58 = 0x3a
	BOOL _shouldProcessProtocol;	// 59 = 0x3b
	double _timeoutInterval;	// 60 = 0x3c
	NSString *_urlBagKey;	// 68 = 0x44
	int _urlBagType;	// 72 = 0x48
	id _urlBagURLBlock;	// 76 = 0x4c
	NSArray *_urls;	// 80 = 0x50
	NSArray *_userAgentComponents;	// 84 = 0x54
}
@property(readonly, assign) NSData *HTTPBody;	// G=0x354dd25d; 
@property(readonly, assign) NSInputStream *HTTPBodyStream;	// G=0x354de839; 
@property(readonly, assign) NSDictionary *HTTPHeaders;	// G=0x354dd40d; 
@property(readonly, assign) NSString *HTTPMethod;	// G=0x354dd5bd; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x354dd76d; 
@property(readonly, assign) NSURL *URL;	// G=0x354dde4d; 
@property(readonly, assign) NSString *URLBagKey;	// G=0x354ddc9d; 
@property(readonly, assign) int URLBagType;	// G=0x354dec79; 
@property(readonly, assign) id URLBagURLBlock;	// G=0x354ded45; 
@property(readonly, assign) NSArray *URLs;	// G=0x354def09; 
@property(readonly, assign) int allowedRetryCount;	// G=0x354dce2d; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x354dcefd; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x354de4d9; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x354dcfc9; 
@property(readonly, assign) long long expectedContentLength;	// G=0x354dd179; 
@property(readonly, assign) unsigned networkServiceType;	// G=0x354dd855; 
@property(readonly, assign) NSDictionary *requestParameters;	// G=0x354dd925; 
@property(readonly, assign) BOOL requiresExtendedValidationCertificates;	// G=0x354de9e9; 
@property(readonly, assign) BOOL shouldDecodeResponse;	// G=0x354dead5; 
@property(readonly, assign) BOOL shouldDisableCellularFallback;	// G=0x354deba9; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x354ddad5; 
@property(readonly, assign) double timeoutInterval;	// G=0x354ddba9; 
@property(readonly, assign) NSArray *userAgentComponents;	// G=0x354de02d; 
- (id)init;	// 0x354db5e1
- (id)initWithCoder:(id)coder;	// 0x354dbd69
- (id)initWithURL:(id)url;	// 0x354db5f5
- (id)initWithURLRequest:(id)urlrequest;	// 0x354db655
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354dcaed
// declared property getter: - (id)HTTPBody;	// 0x354dd25d
// declared property getter: - (id)HTTPBodyStream;	// 0x354de839
// declared property getter: - (id)HTTPHeaders;	// 0x354dd40d
// declared property getter: - (id)HTTPMethod;	// 0x354dd5bd
// declared property getter: - (id)URL;	// 0x354dde4d
// declared property getter: - (id)URLBagKey;	// 0x354ddc9d
// declared property getter: - (int)URLBagType;	// 0x354dec79
// declared property getter: - (id)URLBagURLBlock;	// 0x354ded45
// declared property getter: - (id)URLs;	// 0x354def09
- (id)_initCommon;	// 0x354db591
// declared property getter: - (int)allowedRetryCount;	// 0x354dce2d
// declared property getter: - (unsigned)cachePolicy;	// 0x354dcefd
// declared property getter: - (BOOL)canBeResolved;	// 0x354de4d9
// declared property getter: - (id)clientIdentifier;	// 0x354dcfc9
- (id)copyURLRequest;	// 0x354de5e9
- (id)copyWithZone:(NSZone *)zone;	// 0x354dc3f9
- (id)copyXPCEncoding;	// 0x354dc7ad
- (void)dealloc;	// 0x354db859
- (id)description;	// 0x354de1dd
- (void)encodeWithCoder:(id)coder;	// 0x354db95d
// declared property getter: - (long long)expectedContentLength;	// 0x354dd179
- (BOOL)isEqual:(id)equal;	// 0x354de281
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x354dd76d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x354dc409
// declared property getter: - (unsigned)networkServiceType;	// 0x354dd855
// declared property getter: - (id)requestParameters;	// 0x354dd925
// declared property getter: - (BOOL)requiresExtendedValidationCertificates;	// 0x354de9e9
// declared property getter: - (BOOL)shouldDecodeResponse;	// 0x354dead5
// declared property getter: - (BOOL)shouldDisableCellularFallback;	// 0x354deba9
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x354ddad5
// declared property getter: - (double)timeoutInterval;	// 0x354ddba9
// declared property getter: - (id)userAgentComponents;	// 0x354de02d
@end

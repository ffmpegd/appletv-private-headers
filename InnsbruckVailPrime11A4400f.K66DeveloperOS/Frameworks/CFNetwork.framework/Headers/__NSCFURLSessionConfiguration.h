/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import "CFNetwork-Structs.h"
#import "NSSecureCoding.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSDictionary, NSString, NSArray, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage;

@interface __NSCFURLSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
	CFURLStorageSessionRef _legacyStorageSystem;	// 4 = 0x4
	BOOL _backgroundSession;	// 8 = 0x8
	BOOL _allowsCellularAccess;	// 9 = 0x9
	BOOL _discretionary;	// 10 = 0xa
	BOOL _HTTPShouldUsePipelining;	// 11 = 0xb
	BOOL _HTTPShouldSetCookies;	// 12 = 0xc
	BOOL __credStorageSet;	// 13 = 0xd
	BOOL __urlCacheSet;	// 14 = 0xe
	BOOL __cookieStorageSet;	// 15 = 0xf
	BOOL _tasks_created_suspended;	// 16 = 0x10
	BOOL _skip_download_unlink;	// 17 = 0x11
	BOOL _saveRequestsInResumeData;	// 18 = 0x12
	BOOL __preventsIdleSleep;	// 19 = 0x13
	BOOL __usePipeliningHeuristics;	// 20 = 0x14
	BOOL __startSynchronously;	// 21 = 0x15
	NSString *_identifier;	// 24 = 0x18
	unsigned _requestCachePolicy;	// 28 = 0x1c
	unsigned _networkServiceType;	// 32 = 0x20
	NSDictionary *_connectionProxyDictionary;	// 36 = 0x24
	int _TLSMinimumSupportedProtocol;	// 40 = 0x28
	int _TLSMaximumSupportedProtocol;	// 44 = 0x2c
	unsigned _HTTPCookieAcceptPolicy;	// 48 = 0x30
	NSDictionary *_HTTPAdditionalHeaders;	// 52 = 0x34
	int _HTTPMaximumConnectionsPerHost;	// 56 = 0x38
	NSArray *_protocolClasses;	// 60 = 0x3c
	NSURLCredentialStorage *__credStorage;	// 64 = 0x40
	NSURLCache *__urlCache;	// 68 = 0x44
	NSHTTPCookieStorage *__cookieStorage;	// 72 = 0x48
	NSString *_disposition;	// 76 = 0x4c
	CFHSTSPolicyRef _HSTSPolicy;	// 80 = 0x50
	NSDictionary *__cfurlConnectionProperties;	// 84 = 0x54
	NSDictionary *__socketStreamProperties;	// 88 = 0x58
	NSArray *__contentDispHeadEncFallback;	// 92 = 0x5c
	double _timeoutIntervalForRequest;	// 96 = 0x60
	double _timeoutIntervalForResource;	// 104 = 0x68
	double _connectionCachePurgeTimeout;	// 112 = 0x70
	double _connectionCacheCellPurgeTimeout;	// 120 = 0x78
}
@property(retain) CFHSTSPolicyRef HSTSPolicy;	// G=0x2cfac541; S=0x2cfac555; @synthesize=_HSTSPolicy
@property(copy) NSDictionary *HTTPAdditionalHeaders;	// G=0x2cfac3a5; S=0x2cfac3b9; @synthesize=_HTTPAdditionalHeaders
@property(assign) unsigned HTTPCookieAcceptPolicy;	// G=0x2cfac379; S=0x2cfac38d; @synthesize=_HTTPCookieAcceptPolicy
@property(retain, getter=HTTPCookieStorage, setter=setHTTPCookieStorage:) NSHTTPCookieStorage *HTTPCookieStorage;	// G=0x2cfab03d; S=0x2cfab0fd; 
@property(assign) int HTTPMaximumConnectionsPerHost;	// G=0x2cfac3c9; S=0x2cfac3dd; @synthesize=_HTTPMaximumConnectionsPerHost
@property(assign) BOOL HTTPShouldSetCookies;	// G=0x2cfac349; S=0x2cfac361; @synthesize=_HTTPShouldSetCookies
@property(assign) BOOL HTTPShouldUsePipelining;	// G=0x2cfac319; S=0x2cfac331; @synthesize=_HTTPShouldUsePipelining
@property(assign) int TLSMaximumSupportedProtocol;	// G=0x2cfac2ed; S=0x2cfac301; @synthesize=_TLSMaximumSupportedProtocol
@property(assign) int TLSMinimumSupportedProtocol;	// G=0x2cfac2c1; S=0x2cfac2d5; @synthesize=_TLSMinimumSupportedProtocol
@property(retain, getter=URLCache, setter=setURLCache:) NSURLCache *URLCache;	// G=0x2cfab149; S=0x2cfab209; 
@property(retain, getter=URLCredentialStorage, setter=setURLCredentialStorage:) NSURLCredentialStorage *URLCredentialStorage;	// G=0x2cfab255; S=0x2cfab315; 
@property(copy) NSDictionary *_cfurlConnectionProperties;	// G=0x2cfac6c5; S=0x2cfac6d9; @synthesize=__cfurlConnectionProperties
@property(copy) NSArray *_contentDispHeadEncFallback;	// G=0x2cfac79d; S=0x2cfac7b1; @synthesize=__contentDispHeadEncFallback
@property(retain) NSHTTPCookieStorage *_cookieStorage;	// G=0x2cfac4c1; S=0x2cfac4d5; @synthesize=__cookieStorage
@property(assign) BOOL _cookieStorageSet;	// G=0x2cfac4e5; S=0x2cfac4fd; @synthesize=__cookieStorageSet
@property(retain) NSURLCredentialStorage *_credStorage;	// G=0x2cfac419; S=0x2cfac42d; @synthesize=__credStorage
@property(assign) BOOL _credStorageSet;	// G=0x2cfac43d; S=0x2cfac455; @synthesize=__credStorageSet
@property(assign) BOOL _preventsIdleSleep;	// G=0x2cfac70d; S=0x2cfac725; @synthesize=__preventsIdleSleep
@property(copy) NSDictionary *_socketStreamProperties;	// G=0x2cfac6e9; S=0x2cfac6fd; @synthesize=__socketStreamProperties
@property(assign) BOOL _startSynchronously;	// G=0x2cfac76d; S=0x2cfac785; @synthesize=__startSynchronously
@property(retain) NSURLCache *_urlCache;	// G=0x2cfac46d; S=0x2cfac481; @synthesize=__urlCache
@property(assign) BOOL _urlCacheSet;	// G=0x2cfac491; S=0x2cfac4a9; @synthesize=__urlCacheSet
@property(assign) BOOL _usePipeliningHeuristics;	// G=0x2cfac73d; S=0x2cfac755; @synthesize=__usePipeliningHeuristics
@property(assign) BOOL allowsCellularAccess;	// G=0x2cfac23d; S=0x2cfac255; @synthesize=_allowsCellularAccess
@property(assign, getter=isBackgroundSession) BOOL backgroundSession;	// G=0x2cfac0c1; S=0x2cfac0d9; @synthesize=_backgroundSession
@property(assign) double connectionCacheCellPurgeTimeout;	// G=0x2cfac5cd; S=0x2cfac601; @synthesize=_connectionCacheCellPurgeTimeout
@property(assign) double connectionCachePurgeTimeout;	// G=0x2cfac565; S=0x2cfac599; @synthesize=_connectionCachePurgeTimeout
@property(copy) NSDictionary *connectionProxyDictionary;	// G=0x2cfac29d; S=0x2cfac2b1; @synthesize=_connectionProxyDictionary
@property(assign, getter=isDiscretionary) BOOL discretionary;	// G=0x2cfac26d; S=0x2cfac285; @synthesize=_discretionary
@property(assign) NSString *disposition;	// G=0x2cfac515; S=0x2cfac529; @synthesize=_disposition
@property(copy) NSString *identifier;	// G=0x2cfac0f1; S=0x2cfac105; @synthesize=_identifier
@property(assign) unsigned networkServiceType;	// G=0x2cfac211; S=0x2cfac225; @synthesize=_networkServiceType
@property(copy) NSArray *protocolClasses;	// G=0x2cfac3f5; S=0x2cfac409; @synthesize=_protocolClasses
@property(assign) unsigned requestCachePolicy;	// G=0x2cfac115; S=0x2cfac129; @synthesize=_requestCachePolicy
@property(assign) BOOL saveRequestsInResumeData;	// G=0x2cfac695; S=0x2cfac6ad; @synthesize=_saveRequestsInResumeData
@property(assign) BOOL skip_download_unlink;	// G=0x2cfac665; S=0x2cfac67d; @synthesize=_skip_download_unlink
@property(assign) BOOL tasks_created_suspended;	// G=0x2cfac635; S=0x2cfac64d; @synthesize=_tasks_created_suspended
@property(assign) double timeoutIntervalForRequest;	// G=0x2cfac141; S=0x2cfac175; @synthesize=_timeoutIntervalForRequest
@property(assign) double timeoutIntervalForResource;	// G=0x2cfac1a9; S=0x2cfac1dd; @synthesize=_timeoutIntervalForResource
+ (id)backgroundSessionConfiguration:(id)configuration;	// 0x2cfabaf9
+ (id)defaultSessionConfiguration;	// 0x2cfab925
+ (id)ephemeralSessionConfiguration;	// 0x2cfaba11
+ (BOOL)supportsSecureCoding;	// 0x2cfac055
- (id)initWithCoder:(id)coder;	// 0x2cfabe0d
- (id)initWithDisposition:(id)disposition;	// 0x2cfaaddd
// declared property getter: - (CFHSTSPolicyRef)HSTSPolicy;	// 0x2cfac541
// declared property getter: - (id)HTTPAdditionalHeaders;	// 0x2cfac3a5
// declared property getter: - (unsigned)HTTPCookieAcceptPolicy;	// 0x2cfac379
// declared property getter: - (id)HTTPCookieStorage;	// 0x2cfab03d
// declared property getter: - (int)HTTPMaximumConnectionsPerHost;	// 0x2cfac3c9
// declared property getter: - (BOOL)HTTPShouldSetCookies;	// 0x2cfac349
// declared property getter: - (BOOL)HTTPShouldUsePipelining;	// 0x2cfac319
// declared property getter: - (int)TLSMaximumSupportedProtocol;	// 0x2cfac2ed
// declared property getter: - (int)TLSMinimumSupportedProtocol;	// 0x2cfac2c1
// declared property getter: - (id)URLCache;	// 0x2cfab149
// declared property getter: - (id)URLCredentialStorage;	// 0x2cfab255
// declared property getter: - (id)_cfurlConnectionProperties;	// 0x2cfac6c5
// declared property getter: - (id)_contentDispHeadEncFallback;	// 0x2cfac79d
// declared property getter: - (id)_cookieStorage;	// 0x2cfac4c1
// declared property getter: - (BOOL)_cookieStorageSet;	// 0x2cfac4e5
// declared property getter: - (id)_credStorage;	// 0x2cfac419
// declared property getter: - (BOOL)_credStorageSet;	// 0x2cfac43d
// declared property getter: - (BOOL)_preventsIdleSleep;	// 0x2cfac70d
// declared property getter: - (id)_socketStreamProperties;	// 0x2cfac6e9
// declared property getter: - (BOOL)_startSynchronously;	// 0x2cfac76d
// declared property getter: - (id)_urlCache;	// 0x2cfac46d
// declared property getter: - (BOOL)_urlCacheSet;	// 0x2cfac491
// declared property getter: - (BOOL)_usePipeliningHeuristics;	// 0x2cfac73d
// declared property getter: - (BOOL)allowsCellularAccess;	// 0x2cfac23d
// declared property getter: - (double)connectionCacheCellPurgeTimeout;	// 0x2cfac5cd
// declared property getter: - (double)connectionCachePurgeTimeout;	// 0x2cfac565
// declared property getter: - (id)connectionProxyDictionary;	// 0x2cfac29d
- (id)copyWithZone:(NSZone *)zone;	// 0x2cfab361
- (void)dealloc;	// 0x2cfac059
// declared property getter: - (id)disposition;	// 0x2cfac515
- (void)encodeWithCoder:(id)coder;	// 0x2cfabbf1
// declared property getter: - (id)identifier;	// 0x2cfac0f1
// declared property getter: - (BOOL)isBackgroundSession;	// 0x2cfac0c1
// declared property getter: - (BOOL)isDiscretionary;	// 0x2cfac26d
// declared property getter: - (unsigned)networkServiceType;	// 0x2cfac211
// declared property getter: - (id)protocolClasses;	// 0x2cfac3f5
// declared property getter: - (unsigned)requestCachePolicy;	// 0x2cfac115
// declared property getter: - (BOOL)saveRequestsInResumeData;	// 0x2cfac695
// declared property setter: - (void)setAllowsCellularAccess:(BOOL)access;	// 0x2cfac255
// declared property setter: - (void)setBackgroundSession:(BOOL)session;	// 0x2cfac0d9
// declared property setter: - (void)setConnectionCacheCellPurgeTimeout:(double)timeout;	// 0x2cfac601
// declared property setter: - (void)setConnectionCachePurgeTimeout:(double)timeout;	// 0x2cfac599
// declared property setter: - (void)setConnectionProxyDictionary:(id)dictionary;	// 0x2cfac2b1
// declared property setter: - (void)setDiscretionary:(BOOL)discretionary;	// 0x2cfac285
// declared property setter: - (void)setDisposition:(id)disposition;	// 0x2cfac529
// declared property setter: - (void)setHSTSPolicy:(CFHSTSPolicyRef)policy;	// 0x2cfac555
// declared property setter: - (void)setHTTPAdditionalHeaders:(id)headers;	// 0x2cfac3b9
// declared property setter: - (void)setHTTPCookieAcceptPolicy:(unsigned)policy;	// 0x2cfac38d
// declared property setter: - (void)setHTTPCookieStorage:(id)storage;	// 0x2cfab0fd
// declared property setter: - (void)setHTTPMaximumConnectionsPerHost:(int)host;	// 0x2cfac3dd
// declared property setter: - (void)setHTTPShouldSetCookies:(BOOL)setCookies;	// 0x2cfac361
// declared property setter: - (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x2cfac331
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x2cfac105
// declared property setter: - (void)setNetworkServiceType:(unsigned)type;	// 0x2cfac225
// declared property setter: - (void)setProtocolClasses:(id)classes;	// 0x2cfac409
// declared property setter: - (void)setRequestCachePolicy:(unsigned)policy;	// 0x2cfac129
// declared property setter: - (void)setSaveRequestsInResumeData:(BOOL)resumeData;	// 0x2cfac6ad
// declared property setter: - (void)setSkip_download_unlink:(BOOL)unlink;	// 0x2cfac67d
// declared property setter: - (void)setTLSMaximumSupportedProtocol:(int)protocol;	// 0x2cfac301
// declared property setter: - (void)setTLSMinimumSupportedProtocol:(int)protocol;	// 0x2cfac2d5
// declared property setter: - (void)setTasks_created_suspended:(BOOL)suspended;	// 0x2cfac64d
// declared property setter: - (void)setTimeoutIntervalForRequest:(double)request;	// 0x2cfac175
// declared property setter: - (void)setTimeoutIntervalForResource:(double)resource;	// 0x2cfac1dd
// declared property setter: - (void)setURLCache:(id)cache;	// 0x2cfab209
// declared property setter: - (void)setURLCredentialStorage:(id)storage;	// 0x2cfab315
// declared property setter: - (void)set_cfurlConnectionProperties:(id)properties;	// 0x2cfac6d9
// declared property setter: - (void)set_contentDispHeadEncFallback:(id)fallback;	// 0x2cfac7b1
// declared property setter: - (void)set_cookieStorage:(id)storage;	// 0x2cfac4d5
// declared property setter: - (void)set_cookieStorageSet:(BOOL)set;	// 0x2cfac4fd
// declared property setter: - (void)set_credStorage:(id)storage;	// 0x2cfac42d
// declared property setter: - (void)set_credStorageSet:(BOOL)set;	// 0x2cfac455
// declared property setter: - (void)set_preventsIdleSleep:(BOOL)sleep;	// 0x2cfac725
// declared property setter: - (void)set_socketStreamProperties:(id)properties;	// 0x2cfac6fd
// declared property setter: - (void)set_startSynchronously:(BOOL)synchronously;	// 0x2cfac785
// declared property setter: - (void)set_urlCache:(id)cache;	// 0x2cfac481
// declared property setter: - (void)set_urlCacheSet:(BOOL)set;	// 0x2cfac4a9
// declared property setter: - (void)set_usePipeliningHeuristics:(BOOL)heuristics;	// 0x2cfac755
// declared property getter: - (BOOL)skip_download_unlink;	// 0x2cfac665
// declared property getter: - (BOOL)tasks_created_suspended;	// 0x2cfac635
// declared property getter: - (double)timeoutIntervalForRequest;	// 0x2cfac141
// declared property getter: - (double)timeoutIntervalForResource;	// 0x2cfac1a9
@end


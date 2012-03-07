/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface DASettingsTemplate : NSObject {
	NSString *_name;	// 4 = 0x4
	int _order;	// 8 = 0x8
	NSString *_primaryDomain;	// 12 = 0xc
	NSArray *_domainAliasPatterns;	// 16 = 0x10
	NSString *_primaryUsernameDomain;	// 20 = 0x14
	int _httpPort;	// 24 = 0x18
	int _httpsPort;	// 28 = 0x1c
	int _port;	// 32 = 0x20
	NSString *_pathFormat;	// 36 = 0x24
	BOOL _isDefaultTemplate;	// 40 = 0x28
	BOOL _defaultUseSSL;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) int defaultPort;	// G=0x36c23c9d; 
@property(readonly, assign, nonatomic) NSString *defaultScheme;	// G=0x36c23c69; 
@property(assign, nonatomic) BOOL defaultUseSSL;	// G=0x36c254fd; S=0x36c2550d; @synthesize=_defaultUseSSL
@property(retain, nonatomic) NSArray *domainAliasPatterns;	// G=0x36c25401; S=0x36c25411; @synthesize=_domainAliasPatterns
@property(assign, nonatomic) int httpPort;	// G=0x36c25469; S=0x36c25479; @synthesize=_httpPort
@property(assign, nonatomic) int httpsPort;	// G=0x36c25489; S=0x36c25499; @synthesize=_httpsPort
@property(assign) BOOL isDefaultTemplate;	// G=0x36c254dd; S=0x36c254ed; @synthesize=_isDefaultTemplate
@property(retain, nonatomic) NSString *name;	// G=0x36c25379; S=0x36c25389; @synthesize=_name
@property(assign, nonatomic) int order;	// G=0x36c253ad; S=0x36c253bd; @synthesize=_order
@property(retain, nonatomic) NSString *pathFormat;	// G=0x36c254a9; S=0x36c254b9; @synthesize=_pathFormat
@property(retain, nonatomic) NSString *primaryDomain;	// G=0x36c253cd; S=0x36c253dd; @synthesize=_primaryDomain
@property(retain, nonatomic) NSString *primaryUsernameDomain;	// G=0x36c25435; S=0x36c25445; @synthesize=_primaryUsernameDomain
+ (BOOL)_isValidPort:(int)port;	// 0x36c2505d
+ (id)defaultTemplate;	// 0x36c23385
+ (id)knownTemplates;	// 0x36c2333d
+ (BOOL)requiresPathFormat;	// 0x36c233cd
+ (BOOL)requiresPorts;	// 0x36c233d1
+ (id)templateWithDomain:(id)domain;	// 0x36c233d5
- (void)initAccount:(id)account;	// 0x36c23db5
- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)usernameIfNeeded;	// 0x36c2506d
- (id)_initWithName:(id)name plist:(id)plist;	// 0x36c23551
- (BOOL)_isDomainInAliases:(id)aliases;	// 0x36c23cdd
- (BOOL)_isPrincipalPathCustomForAccount:(id)account;	// 0x36c251fd
- (id)_principalPathForAccount:(id)account;	// 0x36c25285
- (void)_setPrincipalURLForAccount:(id)account;	// 0x36c24ced
- (int)compare:(id)compare;	// 0x36c23be1
- (void)dealloc;	// 0x36c23aad
// declared property getter: - (int)defaultPort;	// 0x36c23c9d
// declared property getter: - (id)defaultScheme;	// 0x36c23c69
// declared property getter: - (BOOL)defaultUseSSL;	// 0x36c254fd
- (id)description;	// 0x36c25315
- (id)descriptionForAccount:(id)account;	// 0x36c2519d
// declared property getter: - (id)domainAliasPatterns;	// 0x36c25401
- (unsigned)hash;	// 0x36c23b49
// declared property getter: - (int)httpPort;	// 0x36c25469
// declared property getter: - (int)httpsPort;	// 0x36c25489
// declared property getter: - (BOOL)isDefaultTemplate;	// 0x36c254dd
- (BOOL)isEqual:(id)equal;	// 0x36c23b71
// declared property getter: - (id)name;	// 0x36c25379
// declared property getter: - (int)order;	// 0x36c253ad
// declared property getter: - (id)pathFormat;	// 0x36c254a9
// declared property getter: - (id)primaryDomain;	// 0x36c253cd
// declared property getter: - (id)primaryUsernameDomain;	// 0x36c25435
// declared property setter: - (void)setDefaultUseSSL:(BOOL)ssl;	// 0x36c2550d
- (void)setDomain:(id)domain forAccount:(id)account;	// 0x36c23e81
// declared property setter: - (void)setDomainAliasPatterns:(id)patterns;	// 0x36c25411
// declared property setter: - (void)setHttpPort:(int)port;	// 0x36c25479
// declared property setter: - (void)setHttpsPort:(int)port;	// 0x36c25499
// declared property setter: - (void)setIsDefaultTemplate:(BOOL)aTemplate;	// 0x36c254ed
// declared property setter: - (void)setName:(id)name;	// 0x36c25389
// declared property setter: - (void)setOrder:(int)order;	// 0x36c253bd
// declared property setter: - (void)setPathFormat:(id)format;	// 0x36c254b9
- (void)setPort:(int)port forAccount:(id)account;	// 0x36c246ed
// declared property setter: - (void)setPrimaryDomain:(id)domain;	// 0x36c253dd
// declared property setter: - (void)setPrimaryUsernameDomain:(id)domain;	// 0x36c25445
- (void)setPrincipalURLForAccount:(id)account toURL:(id)url;	// 0x36c24cd9
- (void)setURL:(id)url forAccount:(id)account;	// 0x36c248d1
- (void)setUseSSL:(BOOL)ssl forAccount:(id)account;	// 0x36c244e9
- (void)setUsername:(id)username forAccount:(id)account;	// 0x36c242fd
@end

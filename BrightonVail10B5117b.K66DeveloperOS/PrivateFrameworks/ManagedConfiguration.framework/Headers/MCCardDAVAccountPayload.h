/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x346a39f9; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x346a3a91; S=0x346a3aa5; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x346a3a09; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x346a3a3d; S=0x346a3a51; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x346a3a81; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x346a3a61; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x346a3a71; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x346a3a19; S=0x346a3a2d; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x346a3001
+ (id)typeStrings;	// 0x346a2fd9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x346a3089
- (void).cxx_destruct;	// 0x346a3ab5
// declared property getter: - (id)accountDescription;	// 0x346a39f9
// declared property getter: - (id)accountPersistentUUID;	// 0x346a3a91
- (id)description;	// 0x346a36ad
// declared property getter: - (id)hostname;	// 0x346a3a09
// declared property getter: - (id)password;	// 0x346a3a3d
// declared property getter: - (int)port;	// 0x346a3a81
// declared property getter: - (id)principalURL;	// 0x346a3a61
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x346a3aa5
// declared property setter: - (void)setPassword:(id)password;	// 0x346a3a51
// declared property setter: - (void)setUsername:(id)username;	// 0x346a3a2d
- (id)stubDictionary;	// 0x346a386d
- (id)subtitle1Description;	// 0x346a39c9
- (id)subtitle1Label;	// 0x346a39b9
- (id)subtitle2Description;	// 0x346a39e9
- (id)subtitle2Label;	// 0x346a39d9
- (id)title;	// 0x346a395d
// declared property getter: - (BOOL)useSSL;	// 0x346a3a71
// declared property getter: - (id)username;	// 0x346a3a19
@end


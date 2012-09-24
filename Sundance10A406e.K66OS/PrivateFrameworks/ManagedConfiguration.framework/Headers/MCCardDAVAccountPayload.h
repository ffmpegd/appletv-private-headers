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
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x357aba09; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x357abaa1; S=0x357abab5; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x357aba19; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x357aba4d; S=0x357aba61; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x357aba91; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x357aba71; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x357aba81; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x357aba29; S=0x357aba3d; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x357ab011
+ (id)typeStrings;	// 0x357aafe9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x357ab099
- (void).cxx_destruct;	// 0x357abac5
// declared property getter: - (id)accountDescription;	// 0x357aba09
// declared property getter: - (id)accountPersistentUUID;	// 0x357abaa1
- (id)description;	// 0x357ab6bd
// declared property getter: - (id)hostname;	// 0x357aba19
// declared property getter: - (id)password;	// 0x357aba4d
// declared property getter: - (int)port;	// 0x357aba91
// declared property getter: - (id)principalURL;	// 0x357aba71
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x357abab5
// declared property setter: - (void)setPassword:(id)password;	// 0x357aba61
// declared property setter: - (void)setUsername:(id)username;	// 0x357aba3d
- (id)stubDictionary;	// 0x357ab87d
- (id)subtitle1Description;	// 0x357ab9d9
- (id)subtitle1Label;	// 0x357ab9c9
- (id)subtitle2Description;	// 0x357ab9f9
- (id)subtitle2Label;	// 0x357ab9e9
- (id)title;	// 0x357ab96d
// declared property getter: - (BOOL)useSSL;	// 0x357aba81
// declared property getter: - (id)username;	// 0x357aba29
@end

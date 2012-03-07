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
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x36573531; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x365734c1; S=0x365736c1; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x36573521; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x36573501; S=0x3657369d; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x365734d1; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x365734f1; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x365734e1; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x36573511; S=0x36573679; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x365735f1
+ (id)typeStrings;	// 0x36573651
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x365739f1
// declared property getter: - (id)accountDescription;	// 0x36573531
// declared property getter: - (id)accountPersistentUUID;	// 0x365734c1
- (void)dealloc;	// 0x36573541
- (id)description;	// 0x36573839
// declared property getter: - (id)hostname;	// 0x36573521
// declared property getter: - (id)password;	// 0x36573501
// declared property getter: - (int)port;	// 0x365734d1
// declared property getter: - (id)principalURL;	// 0x365734f1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x365736c1
// declared property setter: - (void)setPassword:(id)password;	// 0x3657369d
// declared property setter: - (void)setUsername:(id)username;	// 0x36573679
- (id)stubDictionary;	// 0x36573755
- (id)subtitle1Description;	// 0x36573705
- (id)subtitle1Label;	// 0x36573715
- (id)subtitle2Description;	// 0x365736e5
- (id)subtitle2Label;	// 0x365736f5
- (id)title;	// 0x36573725
// declared property getter: - (BOOL)useSSL;	// 0x365734e1
// declared property getter: - (id)username;	// 0x36573511
@end


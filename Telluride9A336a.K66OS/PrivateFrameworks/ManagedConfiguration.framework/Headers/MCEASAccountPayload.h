/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSData, NSString, NSNumber;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
	NSString *_accountDescription;	// 60 = 0x3c
	NSString *_hostname;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_password;	// 72 = 0x48
	NSString *_emailAddress;	// 76 = 0x4c
	BOOL _useSSL;	// 80 = 0x50
	NSNumber *_mailNumberOfPastDaysToSync;	// 84 = 0x54
	NSData *_embeddedCertificate;	// 88 = 0x58
	NSString *_embeddedCertificateName;	// 92 = 0x5c
	NSString *_embeddedCertificatePassword;	// 96 = 0x60
	NSString *_certificateUUID;	// 100 = 0x64
	NSString *_accountPersistentUUID;	// 104 = 0x68
	NSData *_certificatePersistentID;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x33088081; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x33087fe1; S=0x330882bd; @synthesize=_accountPersistentUUID
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x33087fd1; S=0x330882e1; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x33087ff1; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *emailAddress;	// G=0x33088395; S=0x33088275; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSData *embeddedCertificate;	// G=0x33088021; @synthesize=_embeddedCertificate
@property(readonly, assign, nonatomic) NSString *embeddedCertificateName;	// G=0x33088011; @synthesize=_embeddedCertificateName
@property(copy, nonatomic) NSString *embeddedCertificatePassword;	// G=0x33088001; S=0x33088299; @synthesize=_embeddedCertificatePassword
@property(readonly, assign, nonatomic) BOOL hasCertificate;	// G=0x33087fa5; 
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x33088071; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x33088031; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x33088051; S=0x33088251; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x33088041; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x33088061; S=0x3308822d; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x330881a5
+ (id)typeStrings;	// 0x33088205
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33088771
// declared property getter: - (id)accountDescription;	// 0x33088081
// declared property getter: - (id)accountPersistentUUID;	// 0x33087fe1
// declared property getter: - (id)certificatePersistentID;	// 0x33087fd1
// declared property getter: - (id)certificateUUID;	// 0x33087ff1
- (void)dealloc;	// 0x33088091
- (id)description;	// 0x33088569
// declared property getter: - (id)emailAddress;	// 0x33088395
// declared property getter: - (id)embeddedCertificate;	// 0x33088021
// declared property getter: - (id)embeddedCertificateName;	// 0x33088011
// declared property getter: - (id)embeddedCertificatePassword;	// 0x33088001
// declared property getter: - (BOOL)hasCertificate;	// 0x33087fa5
// declared property getter: - (id)hostname;	// 0x33088071
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x33088031
// declared property getter: - (id)password;	// 0x33088051
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x330882bd
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x330882e1
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x33088275
// declared property setter: - (void)setEmbeddedCertificatePassword:(id)password;	// 0x33088299
// declared property setter: - (void)setPassword:(id)password;	// 0x33088251
// declared property setter: - (void)setUsername:(id)username;	// 0x3308822d
- (id)stubDictionary;	// 0x33088455
- (id)subtitle1Description;	// 0x33088345
- (id)subtitle1Label;	// 0x33088355
- (id)subtitle2Description;	// 0x33088309
- (id)subtitle2Label;	// 0x33088319
- (id)title;	// 0x33088365
// declared property getter: - (BOOL)useSSL;	// 0x33088041
// declared property getter: - (id)username;	// 0x33088061
@end


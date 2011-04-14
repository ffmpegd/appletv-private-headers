/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber, NSString, NSData;

@interface MCEASAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_emailAddress;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	NSNumber *_mailNumberOfPastDaysToSync;	// 64 = 0x40
	NSData *_certificate;	// 68 = 0x44
	NSString *_certificateName;	// 72 = 0x48
	NSString *_certificatePassword;	// 76 = 0x4c
	NSString *_accountPersistentUUID;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3006fe6d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x3006fddd; S=0x300709b5; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSData *certificate;	// G=0x3006fe0d; @synthesize=_certificate
@property(readonly, assign, nonatomic) NSString *certificateName;	// G=0x3006fdfd; @synthesize=_certificateName
@property(copy, nonatomic) NSString *certificatePassword;	// G=0x3006fded; S=0x30070989; @synthesize=_certificatePassword
@property(copy, nonatomic) NSString *emailAddress;	// G=0x3006fecd; S=0x3007095d; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3006fe5d; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x3006fe1d; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x3006fe3d; S=0x30070931; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x3006fe2d; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x3006fe4d; S=0x30070905; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x300709e1
+ (id)typeStrings;	// 0x30070329
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30070351
// declared property getter: - (id)accountDescription;	// 0x3006fe6d
// declared property getter: - (id)accountPersistentUUID;	// 0x3006fddd
// declared property getter: - (id)certificate;	// 0x3006fe0d
// declared property getter: - (id)certificateName;	// 0x3006fdfd
// declared property getter: - (id)certificatePassword;	// 0x3006fded
- (void)dealloc;	// 0x3007023d
- (id)description;	// 0x30070049
// declared property getter: - (id)emailAddress;	// 0x3006fecd
// declared property getter: - (id)hostname;	// 0x3006fe5d
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x3006fe1d
// declared property getter: - (id)password;	// 0x3006fe3d
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x300709b5
// declared property setter: - (void)setCertificatePassword:(id)password;	// 0x30070989
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3007095d
// declared property setter: - (void)setPassword:(id)password;	// 0x30070931
// declared property setter: - (void)setUsername:(id)username;	// 0x30070905
- (id)stubDictionary;	// 0x3006ff7d
- (id)subtitle1Description;	// 0x3006fe91
- (id)subtitle1Label;	// 0x300708f1
- (id)subtitle2Description;	// 0x3006fe7d
- (id)subtitle2Label;	// 0x300708cd
- (id)title;	// 0x3006fea5
// declared property getter: - (BOOL)useSSL;	// 0x3006fe2d
// declared property getter: - (id)username;	// 0x3006fe4d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
	NSString *_emailAccountDescription;	// 64 = 0x40
	NSString *_emailAccountName;	// 68 = 0x44
	NSString *_emailAccountType;	// 72 = 0x48
	NSString *_emailAddress;	// 76 = 0x4c
	NSString *_incomingMailServerAuthentication;	// 80 = 0x50
	NSString *_incomingMailServerHostname;	// 84 = 0x54
	NSNumber *_incomingMailServerPortNumber;	// 88 = 0x58
	BOOL _incomingMailServerUseSSL;	// 92 = 0x5c
	NSString *_incomingMailServerUsername;	// 96 = 0x60
	NSString *_incomingMailServerIMAPPathPrefix;	// 100 = 0x64
	NSString *_incomingPassword;	// 104 = 0x68
	NSString *_outgoingPassword;	// 108 = 0x6c
	BOOL _outgoingPasswordSameAsIncomingPassword;	// 112 = 0x70
	NSString *_outgoingMailServerAuthentication;	// 116 = 0x74
	NSString *_outgoingMailServerHostname;	// 120 = 0x78
	NSNumber *_outgoingMailServerPortNumber;	// 124 = 0x7c
	BOOL _outgoingMailServerUseSSL;	// 128 = 0x80
	NSString *_outgoingMailServerUsername;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) NSString *emailAccountDescription;	// G=0x32b90d6d; @synthesize=_emailAccountDescription
@property(readonly, assign, nonatomic) NSString *emailAccountName;	// G=0x32b90d7d; @synthesize=_emailAccountName
@property(readonly, assign, nonatomic) NSString *emailAccountType;	// G=0x32b90d8d; @synthesize=_emailAccountType
@property(readonly, assign, nonatomic) NSString *emailAddress;	// G=0x32b90d9d; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSString *incomingMailServerAuthentication;	// G=0x32b90dad; @synthesize=_incomingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *incomingMailServerHostname;	// G=0x32b90dbd; @synthesize=_incomingMailServerHostname
@property(readonly, assign, nonatomic) NSString *incomingMailServerIMAPPathPrefix;	// G=0x32b90dfd; @synthesize=_incomingMailServerIMAPPathPrefix
@property(readonly, assign, nonatomic) NSNumber *incomingMailServerPortNumber;	// G=0x32b90dcd; @synthesize=_incomingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL incomingMailServerUseSSL;	// G=0x32b90ddd; @synthesize=_incomingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *incomingMailServerUsername;	// G=0x32b90ded; @synthesize=_incomingMailServerUsername
@property(readonly, assign, nonatomic) NSString *incomingPassword;	// G=0x32b90e0d; @synthesize=_incomingPassword
@property(readonly, assign, nonatomic) NSString *outgoingMailServerAuthentication;	// G=0x32b90e3d; @synthesize=_outgoingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *outgoingMailServerHostname;	// G=0x32b90e4d; @synthesize=_outgoingMailServerHostname
@property(readonly, assign, nonatomic) NSNumber *outgoingMailServerPortNumber;	// G=0x32b90e5d; @synthesize=_outgoingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL outgoingMailServerUseSSL;	// G=0x32b90e6d; @synthesize=_outgoingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *outgoingMailServerUsername;	// G=0x32b90e7d; @synthesize=_outgoingMailServerUsername
@property(readonly, assign, nonatomic) NSString *outgoingPassword;	// G=0x32b90e1d; @synthesize=_outgoingPassword
@property(readonly, assign, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;	// G=0x32b90e2d; @synthesize=_outgoingPasswordSameAsIncomingPassword
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b8f821
+ (id)profileNameFromAccountTag:(id)accountTag;	// 0x32b90cb5
+ (id)typeStrings;	// 0x32b8f7f9
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b8f8a9
- (void).cxx_destruct;	// 0x32b90e8d
- (id)description;	// 0x32b9080d
// declared property getter: - (id)emailAccountDescription;	// 0x32b90d6d
// declared property getter: - (id)emailAccountName;	// 0x32b90d7d
// declared property getter: - (id)emailAccountType;	// 0x32b90d8d
// declared property getter: - (id)emailAddress;	// 0x32b90d9d
// declared property getter: - (id)incomingMailServerAuthentication;	// 0x32b90dad
// declared property getter: - (id)incomingMailServerHostname;	// 0x32b90dbd
// declared property getter: - (id)incomingMailServerIMAPPathPrefix;	// 0x32b90dfd
// declared property getter: - (id)incomingMailServerPortNumber;	// 0x32b90dcd
// declared property getter: - (BOOL)incomingMailServerUseSSL;	// 0x32b90ddd
// declared property getter: - (id)incomingMailServerUsername;	// 0x32b90ded
// declared property getter: - (id)incomingPassword;	// 0x32b90e0d
// declared property getter: - (id)outgoingMailServerAuthentication;	// 0x32b90e3d
// declared property getter: - (id)outgoingMailServerHostname;	// 0x32b90e4d
// declared property getter: - (id)outgoingMailServerPortNumber;	// 0x32b90e5d
// declared property getter: - (BOOL)outgoingMailServerUseSSL;	// 0x32b90e6d
// declared property getter: - (id)outgoingMailServerUsername;	// 0x32b90e7d
// declared property getter: - (id)outgoingPassword;	// 0x32b90e1d
// declared property getter: - (BOOL)outgoingPasswordSameAsIncomingPassword;	// 0x32b90e2d
- (id)stubDictionary;	// 0x32b90761
- (id)subtitle1Description;	// 0x32b90c29
- (id)subtitle1Label;	// 0x32b90c19
- (id)subtitle2Description;	// 0x32b90ca5
- (id)subtitle2Label;	// 0x32b90c95
- (id)title;	// 0x32b90c09
@end

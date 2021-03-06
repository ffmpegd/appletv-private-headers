/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSString, NSNumber;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
@private
	NSString *_emailAccountDescription;	// 60 = 0x3c
	NSString *_emailAccountName;	// 64 = 0x40
	NSString *_emailAccountType;	// 68 = 0x44
	NSString *_emailAddress;	// 72 = 0x48
	NSString *_incomingMailServerAuthentication;	// 76 = 0x4c
	NSString *_incomingMailServerHostname;	// 80 = 0x50
	NSNumber *_incomingMailServerPortNumber;	// 84 = 0x54
	BOOL _incomingMailServerUseSSL;	// 88 = 0x58
	NSString *_incomingMailServerUsername;	// 92 = 0x5c
	NSString *_incomingMailServerIMAPPathPrefix;	// 96 = 0x60
	NSString *_incomingPassword;	// 100 = 0x64
	NSString *_outgoingPassword;	// 104 = 0x68
	BOOL _outgoingPasswordSameAsIncomingPassword;	// 108 = 0x6c
	NSString *_outgoingMailServerAuthentication;	// 112 = 0x70
	NSString *_outgoingMailServerHostname;	// 116 = 0x74
	NSNumber *_outgoingMailServerPortNumber;	// 120 = 0x78
	BOOL _outgoingMailServerUseSSL;	// 124 = 0x7c
	NSString *_outgoingMailServerUsername;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) NSString *emailAccountDescription;	// G=0x36565a15; @synthesize=_emailAccountDescription
@property(readonly, assign, nonatomic) NSString *emailAccountName;	// G=0x36565a05; @synthesize=_emailAccountName
@property(readonly, assign, nonatomic) NSString *emailAccountType;	// G=0x365659f5; @synthesize=_emailAccountType
@property(readonly, assign, nonatomic) NSString *emailAddress;	// G=0x365659e5; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSString *incomingMailServerAuthentication;	// G=0x365659d5; @synthesize=_incomingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *incomingMailServerHostname;	// G=0x365659c5; @synthesize=_incomingMailServerHostname
@property(readonly, assign, nonatomic) NSString *incomingMailServerIMAPPathPrefix;	// G=0x36565985; @synthesize=_incomingMailServerIMAPPathPrefix
@property(readonly, assign, nonatomic) NSNumber *incomingMailServerPortNumber;	// G=0x365659b5; @synthesize=_incomingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL incomingMailServerUseSSL;	// G=0x365659a5; @synthesize=_incomingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *incomingMailServerUsername;	// G=0x36565995; @synthesize=_incomingMailServerUsername
@property(readonly, assign, nonatomic) NSString *incomingPassword;	// G=0x36565975; @synthesize=_incomingPassword
@property(readonly, assign, nonatomic) NSString *outgoingMailServerAuthentication;	// G=0x36565945; @synthesize=_outgoingMailServerAuthentication
@property(readonly, assign, nonatomic) NSString *outgoingMailServerHostname;	// G=0x36565935; @synthesize=_outgoingMailServerHostname
@property(readonly, assign, nonatomic) NSNumber *outgoingMailServerPortNumber;	// G=0x36565925; @synthesize=_outgoingMailServerPortNumber
@property(readonly, assign, nonatomic) BOOL outgoingMailServerUseSSL;	// G=0x36565915; @synthesize=_outgoingMailServerUseSSL
@property(readonly, assign, nonatomic) NSString *outgoingMailServerUsername;	// G=0x36565905; @synthesize=_outgoingMailServerUsername
@property(readonly, assign, nonatomic) NSString *outgoingPassword;	// G=0x36565965; @synthesize=_outgoingPassword
@property(readonly, assign, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;	// G=0x36565955; @synthesize=_outgoingPasswordSameAsIncomingPassword
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x36565c09
+ (id)profileNameFromAccountTag:(id)accountTag;	// 0x36565b89
+ (id)typeStrings;	// 0x36565c69
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x36566165
- (void)dealloc;	// 0x36565a25
- (id)description;	// 0x36565d21
// declared property getter: - (id)emailAccountDescription;	// 0x36565a15
// declared property getter: - (id)emailAccountName;	// 0x36565a05
// declared property getter: - (id)emailAccountType;	// 0x365659f5
// declared property getter: - (id)emailAddress;	// 0x365659e5
// declared property getter: - (id)incomingMailServerAuthentication;	// 0x365659d5
// declared property getter: - (id)incomingMailServerHostname;	// 0x365659c5
// declared property getter: - (id)incomingMailServerIMAPPathPrefix;	// 0x36565985
// declared property getter: - (id)incomingMailServerPortNumber;	// 0x365659b5
// declared property getter: - (BOOL)incomingMailServerUseSSL;	// 0x365659a5
// declared property getter: - (id)incomingMailServerUsername;	// 0x36565995
// declared property getter: - (id)incomingPassword;	// 0x36565975
// declared property getter: - (id)outgoingMailServerAuthentication;	// 0x36565945
// declared property getter: - (id)outgoingMailServerHostname;	// 0x36565935
// declared property getter: - (id)outgoingMailServerPortNumber;	// 0x36565925
// declared property getter: - (BOOL)outgoingMailServerUseSSL;	// 0x36565915
// declared property getter: - (id)outgoingMailServerUsername;	// 0x36565905
// declared property getter: - (id)outgoingPassword;	// 0x36565965
// declared property getter: - (BOOL)outgoingPasswordSameAsIncomingPassword;	// 0x36565955
- (id)stubDictionary;	// 0x365660c9
- (id)subtitle1Description;	// 0x36565cb1
- (id)subtitle1Label;	// 0x36565d01
- (id)subtitle2Description;	// 0x36565c91
- (id)subtitle2Label;	// 0x36565ca1
- (id)title;	// 0x36565d11
@end


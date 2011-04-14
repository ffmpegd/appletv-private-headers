/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSDictionary, NSString, NSArray;

@interface FTRegistrationMessage : FTMessage {
	NSArray *_supportedProtocols;	// 24 = 0x18
	NSDictionary *_aliasInfo;	// 28 = 0x1c
	NSString *_responseSignature;	// 32 = 0x20
	NSString *_responseUserID;	// 36 = 0x24
	NSDictionary *_responseAliasInfo;	// 40 = 0x28
}
@property(copy) NSDictionary *aliasInfo;	// G=0x34732a09; S=0x34732a91; @synthesize=_aliasInfo
@property(copy) NSDictionary *responseAliasInfo;	// G=0x34732a51; S=0x34732b09; @synthesize=_responseAliasInfo
@property(copy) NSString *responseSignature;	// G=0x34732a21; S=0x34732ab9; @synthesize=_responseSignature
@property(copy) NSString *responseUserID;	// G=0x34732a39; S=0x34732ae1; @synthesize=_responseUserID
@property(copy) NSArray *supportedProtocols;	// G=0x347329f1; S=0x34732a69; @synthesize=_supportedProtocols
- (id)additionalMessageHeaders;	// 0x3473246d
// declared property getter: - (id)aliasInfo;	// 0x34732a09
- (id)bagKey;	// 0x3473237d
- (void)dealloc;	// 0x347323dd
- (void)handleResponseDictionary:(id)dictionary;	// 0x3473270d
- (id)messageBody;	// 0x34732655
- (id)requiredKeys;	// 0x34732389
// declared property getter: - (id)responseAliasInfo;	// 0x34732a51
// declared property getter: - (id)responseSignature;	// 0x34732a21
// declared property getter: - (id)responseUserID;	// 0x34732a39
// declared property setter: - (void)setAliasInfo:(id)info;	// 0x34732a91
// declared property setter: - (void)setResponseAliasInfo:(id)info;	// 0x34732b09
// declared property setter: - (void)setResponseSignature:(id)signature;	// 0x34732ab9
// declared property setter: - (void)setResponseUserID:(id)anId;	// 0x34732ae1
// declared property setter: - (void)setSupportedProtocols:(id)protocols;	// 0x34732a69
// declared property getter: - (id)supportedProtocols;	// 0x347329f1
@end

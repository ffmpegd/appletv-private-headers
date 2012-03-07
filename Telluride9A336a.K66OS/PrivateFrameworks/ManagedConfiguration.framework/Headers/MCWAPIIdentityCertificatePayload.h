/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
@private
	NSData *_pemData;	// 48 = 0x30
}
@property(readonly, assign) NSData *pemData;	// G=0x3308e97d; @synthesize=_pemData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3308e9d9
+ (id)typeStrings;	// 0x3308ea39
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3308eb51
- (SecCertificate *)copyCertificate;	// 0x3308eaf1
- (SecIdentity *)copyIdentityFromKeychain;	// 0x3308e975
- (void)dealloc;	// 0x3308e98d
- (id)description;	// 0x3308ea61
- (BOOL)isIdentity;	// 0x3308e979
// declared property getter: - (id)pemData;	// 0x3308e97d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCPayload.h"

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {
	NSData *_certificatePersistentID;	// 40 = 0x28
	NSString *_installedOnDeviceID;	// 44 = 0x2c
}
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x344ba681; S=0x344ba691; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSDate *expiry;	// G=0x344ba629; 
@property(copy, nonatomic) NSString *installedOnDeviceID;	// G=0x344ba6b9; S=0x344ba6cd; @synthesize=_installedOnDeviceID
@property(readonly, assign, nonatomic) BOOL isIdentity;	// G=0x344ba019; 
@property(readonly, assign, nonatomic) BOOL isRoot;	// G=0x344b9fed; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x344b9ee9; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344b9b71
- (void).cxx_destruct;	// 0x344ba6dd
// declared property getter: - (id)certificatePersistentID;	// 0x344ba681
- (SecCertificate *)copyCertificate;	// 0x344b9f85
- (SecIdentity *)copyIdentityFromKeychain;	// 0x344b9fb9
- (id)description;	// 0x344ba3d9
// declared property getter: - (id)expiry;	// 0x344ba629
// declared property getter: - (id)installedOnDeviceID;	// 0x344ba6b9
// declared property getter: - (BOOL)isIdentity;	// 0x344ba019
// declared property getter: - (BOOL)isRoot;	// 0x344b9fed
// declared property getter: - (BOOL)isSigned;	// 0x344b9ee9
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x344ba691
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x344ba6cd
- (id)stubDictionary;	// 0x344b9eed
- (id)subtitle1Description;	// 0x344ba181
- (id)subtitle1Label;	// 0x344ba105
- (id)subtitle2Description;	// 0x344ba291
- (id)subtitle2Label;	// 0x344ba215
- (id)title;	// 0x344ba041
@end

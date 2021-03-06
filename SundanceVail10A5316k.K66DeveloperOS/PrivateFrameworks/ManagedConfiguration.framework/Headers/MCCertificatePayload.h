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
@private
	NSData *_certificatePersistentID;	// 40 = 0x28
	NSString *_installedOnDeviceID;	// 44 = 0x2c
}
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x305cdea1; S=0x305cdeb1; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSDate *expiry;	// G=0x305cde49; 
@property(copy, nonatomic) NSString *installedOnDeviceID;	// G=0x305cded9; S=0x305cdeed; @synthesize=_installedOnDeviceID
@property(readonly, assign, nonatomic) BOOL isIdentity;	// G=0x305cd839; 
@property(readonly, assign, nonatomic) BOOL isRoot;	// G=0x305cd80d; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x305cd709; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305cd391
- (void).cxx_destruct;	// 0x305cdefd
// declared property getter: - (id)certificatePersistentID;	// 0x305cdea1
- (SecCertificate *)copyCertificate;	// 0x305cd7a5
- (SecIdentity *)copyIdentityFromKeychain;	// 0x305cd7d9
- (id)description;	// 0x305cdbf9
// declared property getter: - (id)expiry;	// 0x305cde49
// declared property getter: - (id)installedOnDeviceID;	// 0x305cded9
// declared property getter: - (BOOL)isIdentity;	// 0x305cd839
// declared property getter: - (BOOL)isRoot;	// 0x305cd80d
// declared property getter: - (BOOL)isSigned;	// 0x305cd709
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x305cdeb1
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x305cdeed
- (id)stubDictionary;	// 0x305cd70d
- (id)subtitle1Description;	// 0x305cd9a1
- (id)subtitle1Label;	// 0x305cd925
- (id)subtitle2Description;	// 0x305cdab1
- (id)subtitle2Label;	// 0x305cda35
- (id)title;	// 0x305cd861
@end


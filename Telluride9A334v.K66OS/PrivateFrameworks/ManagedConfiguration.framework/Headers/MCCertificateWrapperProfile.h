/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCConfigurationProfile.h"
#import "ManagedConfiguration-Structs.h"


@interface MCCertificateWrapperProfile : MCConfigurationProfile {
}
+ (id)_basicWrapperProfileForCertificateName:(id)certificateName fileName:(id)name identifier:(id)identifier;	// 0x3475251d
+ (id)_identifierHashFromData:(id)data;	// 0x34752a05
+ (id)_wrapperPayloadDictWithCertData:(id)certData fileName:(id)name name:(id)name3 identifier:(id)identifier type:(id)type;	// 0x34752329
+ (id)_wrapperProfileForCertificate:(SecCertificate *)certificate fileName:(id)name certData:(id)data type:(id)type;	// 0x34752941
+ (id)_wrapperProfileForWAPICertificate:(SecCertificate *)wapicertificate fileName:(id)name PEMData:(id)data;	// 0x34752881
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)pemdata fileName:(id)name name:(id)name3 identifier:(id)identifier;	// 0x34752435
+ (id)wrapperProfileDictionaryWithCertificateData:(id)certificateData fileName:(id)name;	// 0x34752681
- (id)initWithDictionary:(id)dictionary originalData:(id)data allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x34752b7d
- (id)_certificatePayload;	// 0x347522ad
- (id)earliestCertificateExpiryDate;	// 0x34752301
- (BOOL)isSigned;	// 0x347522d9
- (id)stubDictionary;	// 0x3475261d
- (int)trustLevel;	// 0x34752ab1
@end


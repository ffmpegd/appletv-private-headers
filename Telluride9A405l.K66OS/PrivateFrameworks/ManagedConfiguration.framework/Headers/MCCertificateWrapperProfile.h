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
+ (id)_basicWrapperProfileForCertificateName:(id)certificateName fileName:(id)name identifier:(id)identifier;	// 0x36575531
+ (id)_identifierHashFromData:(id)data;	// 0x36575a19
+ (id)_wrapperPayloadDictWithCertData:(id)certData fileName:(id)name name:(id)name3 identifier:(id)identifier type:(id)type;	// 0x3657533d
+ (id)_wrapperProfileForCertificate:(SecCertificate *)certificate fileName:(id)name certData:(id)data type:(id)type;	// 0x36575955
+ (id)_wrapperProfileForWAPICertificate:(SecCertificate *)wapicertificate fileName:(id)name PEMData:(id)data;	// 0x36575895
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)pemdata fileName:(id)name name:(id)name3 identifier:(id)identifier;	// 0x36575449
+ (id)wrapperProfileDictionaryWithCertificateData:(id)certificateData fileName:(id)name;	// 0x36575695
- (id)initWithDictionary:(id)dictionary originalData:(id)data allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x36575b91
- (id)_certificatePayload;	// 0x365752c1
- (id)earliestCertificateExpiryDate;	// 0x36575315
- (BOOL)isSigned;	// 0x365752ed
- (id)stubDictionary;	// 0x36575631
- (int)trustLevel;	// 0x36575ac5
@end


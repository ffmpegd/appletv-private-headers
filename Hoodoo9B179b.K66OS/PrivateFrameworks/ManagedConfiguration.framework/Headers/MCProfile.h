/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSDate, NSArray, NSDictionary;

@interface MCProfile : NSObject {
@private
	NSString *_displayName;	// 4 = 0x4
	NSString *_profileDescription;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_organization;	// 20 = 0x14
	int _version;	// 24 = 0x18
	NSDate *_installDate;	// 28 = 0x1c
	NSDate *_expiryDate;	// 32 = 0x20
	BOOL _encrypted;	// 36 = 0x24
	BOOL _isLocked;	// 37 = 0x25
	NSString *_removalPasscode;	// 40 = 0x28
	BOOL _needsReboot;	// 44 = 0x2c
	BOOL _isStub;	// 45 = 0x2d
	NSString *_productBuildVersion;	// 48 = 0x30
	NSString *_productVersion;	// 52 = 0x34
	NSData *_profileData;	// 56 = 0x38
	int _trustLevel;	// 60 = 0x3c
	BOOL _trustHasBeenEvaluated;	// 64 = 0x40
	dispatch_queue_s *_trustEvaluationQueue;	// 68 = 0x44
	NSString *_signerSummary;	// 72 = 0x48
	NSArray *_signerCertificates;	// 76 = 0x4c
	BOOL _signerHasBeenEvaluated;	// 80 = 0x50
	dispatch_queue_s *_signerEvaluationQueue;	// 84 = 0x54
@protected
	NSDictionary *_context;	// 88 = 0x58
}
@property(readonly, assign) NSString *UUID;	// G=0x348b5789; @synthesize=_UUID
@property(readonly, assign) NSString *UUIDHashFileName;	// G=0x348b6b2d; 
@property(retain) NSDictionary *context;	// G=0x348b6051; S=0x348b602d; @synthesize=_context
@property(retain) NSString *displayName;	// G=0x348b5f9d; S=0x348b5f79; @synthesize=_displayName
@property(readonly, assign) NSDate *earliestCertificateExpiryDate;	// G=0x348b56d1; 
@property(assign, getter=isEncrypted) BOOL encrypted;	// G=0x348b5769; S=0x348b5779; @synthesize=_encrypted
@property(readonly, assign) NSDate *expiryDate;	// G=0x348b60e5; @synthesize=_expiryDate
@property(readonly, assign) NSString *friendlyName;	// G=0x348b65c1; 
@property(readonly, assign) NSString *identifier;	// G=0x348b5799; @synthesize=_identifier
@property(retain) NSDate *installDate;	// G=0x348b5fd9; S=0x348b5fb5; @synthesize=_installDate
@property(readonly, assign) NSArray *installationWarnings;	// G=0x348b6829; 
@property(readonly, assign) BOOL isManagedByProfileService;	// G=0x348b56d5; 
@property(readonly, assign) BOOL isSigned;	// G=0x348b6809; 
@property(readonly, assign) BOOL isStub;	// G=0x348b56f9; @synthesize=_isStub
@property(readonly, assign) NSArray *localizedPayloadSummaryByType;	// G=0x348b56cd; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x348b5729; S=0x348b5739; @synthesize=_isLocked
@property(readonly, assign) BOOL needsReboot;	// G=0x348b5709; @synthesize=_needsReboot
@property(readonly, assign) NSString *organization;	// G=0x348b5759; @synthesize=_organization
@property(readonly, assign) NSArray *payloads;	// G=0x348b56c5; 
@property(readonly, assign) NSString *productBuildVersion;	// G=0x348b56d9; @synthesize=_productBuildVersion
@property(readonly, assign) NSString *productVersion;	// G=0x348b56e9; @synthesize=_productVersion
@property(retain) NSData *profileData;	// G=0x348b6015; S=0x348b5ff1; @synthesize=_profileData
@property(readonly, assign) NSString *profileDescription;	// G=0x348b57a9; @synthesize=_profileDescription
@property(readonly, assign) NSString *profileIDHashFileName;	// G=0x348b6af9; 
@property(readonly, assign) NSString *removalPasscode;	// G=0x348b5719; @synthesize=_removalPasscode
@property(retain) NSString *removalPasscode;	// G=0x348b57b9; S=0x348b6b61; 
@property(readonly, assign) SecCertificate *signerCertificate;	// G=0x348b69ed; 
@property(retain) NSArray *signerCertificates;	// G=0x348b589d; S=0x348b5ae9; 
@property(retain) NSString *signerSummary;	// G=0x348b5949; S=0x348b59f5; 
@property(readonly, assign) NSString *stubFileName;	// G=0x348b6ac5; 
@property(readonly, assign) int trustLevel;	// G=0x348b57c9; 
@property(readonly, assign) int version;	// G=0x348b5749; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x348b5c59
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x348b5dd5
+ (id)_malformedProfileError;	// 0x348b6fc9
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x348b7029
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x348b77a5
+ (int)evaluateTrustOfData:(id)data;	// 0x348b8eb1
+ (id)missingFieldErrorWithField:(id)field;	// 0x348b7089
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x348b8b91
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x348b6d49
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name outError:(id *)error;	// 0x348b5ecd
+ (id)profileWithData:(id)data context:(id)context outError:(id *)error;	// 0x348b5efd
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x348b5f25
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x348b5f4d
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x348b70e9
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x348b7699
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x348b7465
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x348b753d
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x348b7351
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x348b8f59
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x348b7829
// declared property getter: - (id)UUID;	// 0x348b5789
// declared property getter: - (id)UUIDHashFileName;	// 0x348b6b2d
- (void)__evaluateSignerCertificates;	// 0x348b6a19
// declared property getter: - (id)context;	// 0x348b6051
- (void)dealloc;	// 0x348b668d
- (id)description;	// 0x348b617d
// declared property getter: - (id)displayName;	// 0x348b5f9d
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x348b56d1
- (void)evaluateSignerTrust;	// 0x348b60b9
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x348b6069
// declared property getter: - (id)expiryDate;	// 0x348b60e5
// declared property getter: - (id)friendlyName;	// 0x348b65c1
// declared property getter: - (id)identifier;	// 0x348b5799
// declared property getter: - (id)installDate;	// 0x348b5fd9
// declared property getter: - (id)installationWarnings;	// 0x348b6829
// declared property getter: - (BOOL)isEncrypted;	// 0x348b5769
// declared property getter: - (BOOL)isLocked;	// 0x348b5729
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x348b56d5
// declared property getter: - (BOOL)isSigned;	// 0x348b6809
// declared property getter: - (BOOL)isStub;	// 0x348b56f9
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x348b56cd
- (id)malformedProfileErrorWithError:(id)error;	// 0x348b6f31
// declared property getter: - (BOOL)needsReboot;	// 0x348b5709
// declared property getter: - (id)organization;	// 0x348b5759
- (id)payloadWithUUID:(id)uuid;	// 0x348b56c9
// declared property getter: - (id)payloads;	// 0x348b56c5
// declared property getter: - (id)productBuildVersion;	// 0x348b56d9
// declared property getter: - (id)productVersion;	// 0x348b56e9
// declared property getter: - (id)profileData;	// 0x348b6015
// declared property getter: - (id)profileDescription;	// 0x348b57a9
// declared property getter: - (id)profileIDHashFileName;	// 0x348b6af9
// declared property getter: - (id)removalPasscode;	// 0x348b5719
// declared property getter: - (id)removalPasscode;	// 0x348b57b9
// declared property setter: - (void)setContext:(id)context;	// 0x348b602d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x348b5f79
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x348b5779
// declared property setter: - (void)setInstallDate:(id)date;	// 0x348b5fb5
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x348b5739
// declared property setter: - (void)setProfileData:(id)data;	// 0x348b5ff1
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x348b6b61
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x348b5ae9
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x348b59f5
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x348b69ed
// declared property getter: - (id)signerCertificates;	// 0x348b589d
// declared property getter: - (id)signerSummary;	// 0x348b5949
- (id)stubDictionary;	// 0x348b85b9
// declared property getter: - (id)stubFileName;	// 0x348b6ac5
// declared property getter: - (int)trustLevel;	// 0x348b57c9
// declared property getter: - (int)version;	// 0x348b5749
- (BOOL)writeStubToDirectory:(id)directory;	// 0x348b6c39
- (BOOL)writeStubToPath:(id)path;	// 0x348b6c89
@end


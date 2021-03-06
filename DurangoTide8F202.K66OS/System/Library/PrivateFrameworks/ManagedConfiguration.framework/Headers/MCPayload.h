/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSString, MCProfile, NSArray;

@interface MCPayload : NSObject {
	MCProfile *_profile;	// 4 = 0x4
	NSString *_type;	// 8 = 0x8
	NSString *_payloadDescription;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	NSString *_organization;	// 24 = 0x18
	NSString *_UUID;	// 28 = 0x1c
	int _version;	// 32 = 0x20
	NSString *_persistentResourceID;	// 36 = 0x24
}
@property(readonly, assign) NSString *UUID;	// G=0x30063495; @synthesize=_UUID
@property(retain) NSString *displayName;	// G=0x30063bd9; S=0x30063c09; @synthesize=_displayName
@property(readonly, assign) NSString *friendlyName;	// G=0x30063b1d; 
@property(readonly, assign) NSString *identifier;	// G=0x300634b5; @synthesize=_identifier
@property(readonly, assign) NSArray *installationWarnings;	// G=0x30063471; 
@property(readonly, assign) NSString *organization;	// G=0x300634a5; @synthesize=_organization
@property(readonly, assign) NSString *payloadDescription;	// G=0x300634c5; @synthesize=_payloadDescription
@property(retain) NSString *persistentResourceID;	// G=0x30063bf1; S=0x30063c35; @synthesize=_persistentResourceID
@property(readonly, assign) MCProfile *profile;	// G=0x300634e5; @synthesize=_profile
@property(readonly, assign) NSString *type;	// G=0x300634d5; @synthesize=_type
@property(readonly, assign) int version;	// G=0x30063485; @synthesize=_version
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x30063d55
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x30063c61
+ (id)payloadFromDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30064291
+ (id)payloadsFromArray:(id)array profile:(id)profile outError:(id *)error;	// 0x3006447d
+ (id)typeStrings;	// 0x3006346d
+ (id)wrapperPayloadDictionary;	// 0x300634f5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x30063db1
// declared property getter: - (id)UUID;	// 0x30063495
- (void)dealloc;	// 0x30063a31
- (id)description;	// 0x300638c5
// declared property getter: - (id)displayName;	// 0x30063bd9
// declared property getter: - (id)friendlyName;	// 0x30063b1d
// declared property getter: - (id)identifier;	// 0x300634b5
// declared property getter: - (id)installationWarnings;	// 0x30063471
- (id)malformedPayloadErrorWithError:(id)error;	// 0x30063cb9
// declared property getter: - (id)organization;	// 0x300634a5
// declared property getter: - (id)payloadDescription;	// 0x300634c5
// declared property getter: - (id)persistentResourceID;	// 0x30063bf1
// declared property getter: - (id)profile;	// 0x300634e5
// declared property setter: - (void)setDisplayName:(id)name;	// 0x30063c09
// declared property setter: - (void)setPersistentResourceID:(id)anId;	// 0x30063c35
- (void)setPersistentResourceID:(id)anId;	// 0x30063681
- (id)stubDictionary;	// 0x3006354d
- (id)subtitle1Description;	// 0x30063479
- (id)subtitle1Label;	// 0x30063475
- (id)subtitle2Description;	// 0x30063481
- (id)subtitle2Label;	// 0x3006347d
- (id)title;	// 0x300638b1
// declared property getter: - (id)type;	// 0x300634d5
// declared property getter: - (int)version;	// 0x30063485
@end


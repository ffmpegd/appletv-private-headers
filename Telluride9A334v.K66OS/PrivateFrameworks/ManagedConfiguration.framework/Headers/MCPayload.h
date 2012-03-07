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
@property(readonly, assign) NSString *UUID;	// G=0x347413fd; @synthesize=_UUID
@property(retain) NSString *displayName;	// G=0x34741995; S=0x34741971; @synthesize=_displayName
@property(readonly, assign) NSString *friendlyName;	// G=0x347419e9; 
@property(readonly, assign) NSString *identifier;	// G=0x3474141d; @synthesize=_identifier
@property(readonly, assign) NSArray *installationWarnings;	// G=0x347413d9; 
@property(readonly, assign) NSString *organization;	// G=0x3474140d; @synthesize=_organization
@property(readonly, assign) NSString *payloadDescription;	// G=0x3474142d; @synthesize=_payloadDescription
@property(retain) NSString *persistentResourceID;	// G=0x347419d1; S=0x347419ad; @synthesize=_persistentResourceID
@property(readonly, assign) MCProfile *profile;	// G=0x3474144d; @synthesize=_profile
@property(readonly, assign) NSString *type;	// G=0x3474143d; @synthesize=_type
@property(readonly, assign) int version;	// G=0x347413ed; @synthesize=_version
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x34741b5d
+ (id)badFieldValueErrorWithField:(id)field;	// 0x34741bbd
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x34741911
+ (id)payloadFromDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x347426b5
+ (id)payloadsFromArray:(id)array profile:(id)profile outError:(id *)error;	// 0x347422d1
+ (id)typeStrings;	// 0x347413d5
+ (id)wrapperPayloadDictionary;	// 0x347417b1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x34741c1d
// declared property getter: - (id)UUID;	// 0x347413fd
- (void)dealloc;	// 0x34741815
- (id)description;	// 0x3474145d
// declared property getter: - (id)displayName;	// 0x34741995
// declared property getter: - (id)friendlyName;	// 0x347419e9
// declared property getter: - (id)identifier;	// 0x3474141d
// declared property getter: - (id)installationWarnings;	// 0x347413d9
- (id)malformedPayloadErrorWithError:(id)error;	// 0x34741ab5
// declared property getter: - (id)organization;	// 0x3474140d
// declared property getter: - (id)payloadDescription;	// 0x3474142d
// declared property getter: - (id)persistentResourceID;	// 0x347419d1
// declared property getter: - (id)profile;	// 0x3474144d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x34741971
// declared property setter: - (void)setPersistentResourceID:(id)anId;	// 0x347419ad
- (void)setPersistentResourceID:(id)anId;	// 0x34741601
- (id)stubDictionary;	// 0x34741649
- (id)subtitle1Description;	// 0x347413e1
- (id)subtitle1Label;	// 0x347413dd
- (id)subtitle2Description;	// 0x347413e9
- (id)subtitle2Label;	// 0x347413e5
- (id)title;	// 0x347415f1
// declared property getter: - (id)type;	// 0x3474143d
// declared property getter: - (int)version;	// 0x347413ed
@end


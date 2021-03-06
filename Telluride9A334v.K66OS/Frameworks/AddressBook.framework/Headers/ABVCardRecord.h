/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSObject.h> // Unknown library


@interface ABVCardRecord : NSObject {
	void *_record;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
@property(readonly, assign) void *record;	// G=0x35a9ad7d; converted property
+ (void)clearPrivateFields;	// 0x35a9b2b9
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x35a9ad91
+ (BOOL)includeImageURIInVCards;	// 0x35a9ad8d
+ (BOOL)includeNotesInVCards;	// 0x35a9b1ed
+ (BOOL)includePhotosInVCards;	// 0x35a9b10d
+ (BOOL)includeREVInVCards;	// 0x35a9b17d
+ (BOOL)privateVCardEnabled;	// 0x35a9b419
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x35a9b21d
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x35a9b13d
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x35a9b1ad
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x35a9b3d9
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x35a9b2d5
+ (CFArrayRef)supportedProperties;	// 0x35a9b43d
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x35a9b25d
- (id)init;	// 0x35aa1e21
- (id)initWithRecord:(void *)record;	// 0x35aa1e99
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x35aa1ce1
- (id)ISO8061StringFromDate:(id)date;	// 0x35aa15fd
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x35aa15a5
- (id)_21vCardRepresentationAsData;	// 0x35a9e0e5
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x35a9b641
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x35a9bd39
- (id)_fullName;	// 0x35a9f92d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x35a9f981
- (BOOL)_isCompany;	// 0x35a9f941
- (id)_prodID;	// 0x35a9e051
- (id)_realCompositeName;	// 0x35a9f7bd
- (BOOL)_showField:(unsigned)field;	// 0x35a9ad95
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x35a9ad99
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x35aa1ac9
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x35aa1711
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x35aa1a65
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x35aa1775
- (id)alternateName;	// 0x35a9f895
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x35aa168d
- (void *)copyValueForProperty:(unsigned)property;	// 0x35aa1591
- (id)dataForInstantMessageProperties;	// 0x35aa00a9
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x35aa06c5
- (void)dealloc;	// 0x35aa1c85
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x35a9fc21
- (id)encodedLineForValue:(id)value;	// 0x35a9fd2d
- (id)imageData;	// 0x35a9e07d
- (id)newISO8061StringFromDate:(id)date;	// 0x35aa1625
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x35aa093d
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x35aa12f1
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x35aa0549
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x35aa0b8d
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x35aa0f15
// converted property getter: - (void *)record;	// 0x35a9ad7d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x35aa1b85
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x35a9ad9d
- (id)vCardRepresentationForMode:(int)mode;	// 0x35aa1c11
- (void *)valueForProperty:(unsigned)property;	// 0x35aa1569
@end


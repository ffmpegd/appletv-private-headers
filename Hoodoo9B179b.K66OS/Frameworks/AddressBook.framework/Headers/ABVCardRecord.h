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
@property(readonly, assign) void *record;	// G=0x34fdcb11; converted property
+ (void)clearPrivateFields;	// 0x34fdd0a9
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x34fdcb25
+ (BOOL)includeImageURIInVCards;	// 0x34fdcb21
+ (BOOL)includeNotesInVCards;	// 0x34fdcfdd
+ (BOOL)includePhotosInVCards;	// 0x34fdcefd
+ (BOOL)includeREVInVCards;	// 0x34fdcf6d
+ (BOOL)privateVCardEnabled;	// 0x34fdd209
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x34fdd00d
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x34fdcf2d
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x34fdcf9d
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x34fdd1c9
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x34fdd0c5
+ (CFArrayRef)supportedProperties;	// 0x34fdd22d
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x34fdd04d
- (id)init;	// 0x34fe3ca1
- (id)initWithRecord:(void *)record;	// 0x34fe3d19
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x34fe3b61
- (id)ISO8061StringFromDate:(id)date;	// 0x34fe347d
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x34fe3425
- (id)_21vCardRepresentationAsData;	// 0x34fdff69
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x34fdd431
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x34fddb65
- (id)_fullName;	// 0x34fe17b1
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x34fe1805
- (BOOL)_isCompany;	// 0x34fe17c5
- (id)_prodID;	// 0x34fdfed5
- (id)_realCompositeName;	// 0x34fe1641
- (BOOL)_showField:(unsigned)field;	// 0x34fdcb29
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x34fdcb2d
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x34fe3949
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x34fe3591
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x34fe38e5
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x34fe35f5
- (id)alternateName;	// 0x34fe1719
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x34fe350d
- (void *)copyValueForProperty:(unsigned)property;	// 0x34fe3411
- (id)dataForInstantMessageProperties;	// 0x34fe1f2d
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x34fe2549
- (void)dealloc;	// 0x34fe3b05
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x34fe1aa5
- (id)encodedLineForValue:(id)value;	// 0x34fe1bb1
- (id)imageData;	// 0x34fdff01
- (id)newISO8061StringFromDate:(id)date;	// 0x34fe34a5
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x34fe27bd
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x34fe3171
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x34fe23cd
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x34fe2a0d
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x34fe2d95
// converted property getter: - (void *)record;	// 0x34fdcb11
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x34fe3a05
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x34fdcb31
- (id)vCardRepresentationForMode:(int)mode;	// 0x34fe3a91
- (void *)valueForProperty:(unsigned)property;	// 0x34fe33e9
@end

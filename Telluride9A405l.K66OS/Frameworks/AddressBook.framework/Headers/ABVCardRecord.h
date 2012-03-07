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
@property(readonly, assign) void *record;	// G=0x365b2d61; converted property
+ (void)clearPrivateFields;	// 0x365b329d
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x365b2d75
+ (BOOL)includeImageURIInVCards;	// 0x365b2d71
+ (BOOL)includeNotesInVCards;	// 0x365b31d1
+ (BOOL)includePhotosInVCards;	// 0x365b30f1
+ (BOOL)includeREVInVCards;	// 0x365b3161
+ (BOOL)privateVCardEnabled;	// 0x365b33fd
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x365b3201
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x365b3121
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x365b3191
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x365b33bd
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x365b32b9
+ (CFArrayRef)supportedProperties;	// 0x365b3421
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x365b3241
- (id)init;	// 0x365b9e05
- (id)initWithRecord:(void *)record;	// 0x365b9e7d
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x365b9cc5
- (id)ISO8061StringFromDate:(id)date;	// 0x365b95e1
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x365b9589
- (id)_21vCardRepresentationAsData;	// 0x365b60c9
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x365b3625
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x365b3d1d
- (id)_fullName;	// 0x365b7911
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x365b7965
- (BOOL)_isCompany;	// 0x365b7925
- (id)_prodID;	// 0x365b6035
- (id)_realCompositeName;	// 0x365b77a1
- (BOOL)_showField:(unsigned)field;	// 0x365b2d79
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x365b2d7d
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x365b9aad
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x365b96f5
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x365b9a49
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x365b9759
- (id)alternateName;	// 0x365b7879
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x365b9671
- (void *)copyValueForProperty:(unsigned)property;	// 0x365b9575
- (id)dataForInstantMessageProperties;	// 0x365b808d
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x365b86a9
- (void)dealloc;	// 0x365b9c69
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x365b7c05
- (id)encodedLineForValue:(id)value;	// 0x365b7d11
- (id)imageData;	// 0x365b6061
- (id)newISO8061StringFromDate:(id)date;	// 0x365b9609
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x365b8921
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x365b92d5
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x365b852d
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x365b8b71
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x365b8ef9
// converted property getter: - (void *)record;	// 0x365b2d61
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x365b9b69
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x365b2d81
- (id)vCardRepresentationForMode:(int)mode;	// 0x365b9bf5
- (void *)valueForProperty:(unsigned)property;	// 0x365b954d
@end


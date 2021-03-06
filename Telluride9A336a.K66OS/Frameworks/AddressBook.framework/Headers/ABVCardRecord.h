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
@property(readonly, assign) void *record;	// G=0x36436d7d; converted property
+ (void)clearPrivateFields;	// 0x364372b9
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x36436d91
+ (BOOL)includeImageURIInVCards;	// 0x36436d8d
+ (BOOL)includeNotesInVCards;	// 0x364371ed
+ (BOOL)includePhotosInVCards;	// 0x3643710d
+ (BOOL)includeREVInVCards;	// 0x3643717d
+ (BOOL)privateVCardEnabled;	// 0x36437419
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x3643721d
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x3643713d
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x364371ad
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x364373d9
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x364372d5
+ (CFArrayRef)supportedProperties;	// 0x3643743d
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x3643725d
- (id)init;	// 0x3643de21
- (id)initWithRecord:(void *)record;	// 0x3643de99
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x3643dce1
- (id)ISO8061StringFromDate:(id)date;	// 0x3643d5fd
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x3643d5a5
- (id)_21vCardRepresentationAsData;	// 0x3643a0e5
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x36437641
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x36437d39
- (id)_fullName;	// 0x3643b92d
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x3643b981
- (BOOL)_isCompany;	// 0x3643b941
- (id)_prodID;	// 0x3643a051
- (id)_realCompositeName;	// 0x3643b7bd
- (BOOL)_showField:(unsigned)field;	// 0x36436d95
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x36436d99
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x3643dac9
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x3643d711
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x3643da65
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x3643d775
- (id)alternateName;	// 0x3643b895
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x3643d68d
- (void *)copyValueForProperty:(unsigned)property;	// 0x3643d591
- (id)dataForInstantMessageProperties;	// 0x3643c0a9
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x3643c6c5
- (void)dealloc;	// 0x3643dc85
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x3643bc21
- (id)encodedLineForValue:(id)value;	// 0x3643bd2d
- (id)imageData;	// 0x3643a07d
- (id)newISO8061StringFromDate:(id)date;	// 0x3643d625
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x3643c93d
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x3643d2f1
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x3643c549
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x3643cb8d
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x3643cf15
// converted property getter: - (void *)record;	// 0x36436d7d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x3643db85
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x36436d9d
- (id)vCardRepresentationForMode:(int)mode;	// 0x3643dc11
- (void *)valueForProperty:(unsigned)property;	// 0x3643d569
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library


@interface ABCapabilitiesManager : NSObject {
	BOOL _isListeningToFTCServiceAvailability;	// 4 = 0x4
}
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x3095a975
+ (id)defaultCapabilitiesManager;	// 0x308f6af1
- (void)_startListeningToFTCServiceAvailabilityIfNecessary;	// 0x308fdd81
- (void)addFTCServiceAvailabilityListener:(id)listener selector:(SEL)selector;	// 0x3095ab51
- (id)conferenceURLForDestinationID:(id)destinationID;	// 0x3095ab0d
- (id)conferenceURLForPhoneNumber:(id)phoneNumber;	// 0x3095aac9
- (void)dealloc;	// 0x3095a9ad
- (BOOL)hasAdditionalTextTones;	// 0x3095abb9
- (BOOL)hasCameraCapability;	// 0x3095aa69
- (BOOL)hasCellularDataCapability;	// 0x3095aa5d
- (BOOL)hasCellularTelephonyCapability;	// 0x30905c09
- (BOOL)hasPreviouslyConferencedWithID:(id)anId;	// 0x3095aa75
- (BOOL)hasSMSCapability;	// 0x308fdc51
- (BOOL)hasTelephonyCapability;	// 0x308f7165
- (BOOL)hasVibratorCapability;	// 0x308f7171
- (BOOL)isConferencingAvailable;	// 0x308fe3b9
- (BOOL)isConferencingEverGonnaBeAvailable;	// 0x308f6b39
- (BOOL)isEmailConfigured;	// 0x308fdc6d
- (BOOL)isMMSConfigured;	// 0x308fdd1d
- (BOOL)isMadridConfigured;	// 0x308fdd29
- (BOOL)isSensitiveUIAllowed;	// 0x3095aa41
- (BOOL)isTwitterServiceAvailable;	// 0x3095abd5
- (BOOL)isWeiboServiceAvailable;	// 0x3095ac05
- (void)removeFTCServiceAvailabilityListener:(id)listener;	// 0x3091d0a5
@end

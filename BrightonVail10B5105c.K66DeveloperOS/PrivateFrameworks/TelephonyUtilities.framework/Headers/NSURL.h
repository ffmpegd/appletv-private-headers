/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSURL.h> // Unknown library

@class NSString;

@interface NSURL (QueryParameters)
- (id)URLByDeletingQueryParameterWithKey:(id)key;	// 0x34383f39
- (id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;	// 0x34383ec5
- (id)URLWithNewQueryParameterDictionary:(id)newQueryParameterDictionary;	// 0x34383df9
- (id)queryParameters;	// 0x34383c01
@end

@interface NSURL (FaceTime)
+ (id)_applyFaceTimeScheme:(id)scheme toFaceTimeURL:(id)faceTimeURL;	// 0x343843f9
+ (id)_faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x343842a9
+ (id)faceTimeAcceptURLWithURL:(id)url;	// 0x34384535
+ (id)faceTimeAcceptURLWithURL:(id)url conferenceID:(id)anId;	// 0x34384549
+ (id)faceTimePromptURLWithURL:(id)url;	// 0x34384509
+ (id)faceTimeURLWithDestinationID:(id)destinationID;	// 0x343843bd
+ (id)faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x343843dd
+ (id)faceTimeURLWithURL:(id)url;	// 0x343844dd
- (BOOL)_isPhoneNumberID:(id)anId;	// 0x3438424d
- (id)faceTimeDestinationAccount;	// 0x34384165
- (BOOL)isFaceTimeAcceptURL;	// 0x343846c9
- (BOOL)isFaceTimePromptURL;	// 0x34384695
- (BOOL)isFaceTimeURL;	// 0x343845b5
- (BOOL)isValidFaceTimeURL;	// 0x34384615
@end

@interface NSURL (FaceTime_PhoneNumber)
+ (id)faceTimeURLWithPhoneNumber:(id)phoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x343846fd
@end

@interface NSURL (Telephony)
@property(readonly, assign) int addressBookUID;	// G=0x343898cd; 
@property(readonly, assign) BOOL forceAssist;	// G=0x34389959; 
@property(readonly, assign) NSString *phoneNumber;	// G=0x343897b1; 
@property(readonly, assign) BOOL suppressAssist;	// G=0x343899e5; 
@property(readonly, assign) BOOL wasAlreadyAssisted;	// G=0x34389a59; 
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x343894b5
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x34389541
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x343895c1
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x343894c9
- (id)_mobilePhonePathParameters;	// 0x34389fcd
- (id)_mobilePhoneQueryParameters;	// 0x3438a171
// declared property getter: - (int)addressBookUID;	// 0x343898cd
// declared property getter: - (BOOL)forceAssist;	// 0x34389959
- (id)formattedPhoneNumber;	// 0x34389b45
- (BOOL)hasTelephonyScheme;	// 0x34389acd
- (BOOL)isWebSafeTelephoneURL;	// 0x34389c45
- (id)numberQualifiedForAddressBook;	// 0x34389bdd
// declared property getter: - (id)phoneNumber;	// 0x343897b1
// declared property getter: - (BOOL)suppressAssist;	// 0x343899e5
- (id)telephonyParameterDictionary;	// 0x34389f41
// declared property getter: - (BOOL)wasAlreadyAssisted;	// 0x34389a59
- (id)webSafeTelephoneURL;	// 0x34389d35
@end


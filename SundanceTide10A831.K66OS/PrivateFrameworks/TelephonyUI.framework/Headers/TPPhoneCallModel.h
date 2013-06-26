/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock;

@interface TPPhoneCallModel : NSObject {
	CFDictionaryRef _callManagementState;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)sharedInstance;	// 0x30e4e04d
- (id)init;	// 0x30e4e095
- (BOOL)_booleanValueForKey:(CFStringRef)key;	// 0x30e4e371
- (CFDictionaryRef)_callManagementDictionary;	// 0x30e4e1fd
- (int)_intValueForKey:(CFStringRef)key;	// 0x30e4e3a9
- (void)_invalidateCachedState;	// 0x30e4e5d9
- (BOOL)_isAmbiguousCallList;	// 0x30e4e4f1
- (BOOL)_isAmbiguousMultiPartyCall;	// 0x30e4e4cd
- (int)ambiguityState;	// 0x30e4e48d
- (int)cellTelephonyType;	// 0x30e4e59d
- (void)dealloc;	// 0x30e4e195
- (id)description;	// 0x30e4e70d
- (BOOL)isAddCallAllowed;	// 0x30e4e44d
- (BOOL)isAmbiguous;	// 0x30e4e471
- (BOOL)isEndAndAnswerAllowed;	// 0x30e4e579
- (BOOL)isHardPauseAvailable;	// 0x30e4e555
- (BOOL)isHoldAllowed;	// 0x30e4e429
- (BOOL)isMergeable;	// 0x30e4e405
- (BOOL)isSwappable;	// 0x30e4e3e1
- (int)maxMultiPartyCallCount;	// 0x30e4e515
- (int)maxSupportedCallCount;	// 0x30e4e535
@end

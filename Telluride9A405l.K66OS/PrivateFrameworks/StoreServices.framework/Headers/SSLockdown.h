/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSMutableDictionary, NSLock;

@interface SSLockdown : NSObject {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) long long availableDiskSpace;	// G=0x36518241; 
@property(readonly, assign) long long totalDiskCapacity;	// G=0x365182e1; 
+ (id)sharedInstance;	// 0x36518191
- (id)init;	// 0x365180cd
- (void *)_copyLocalValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x365188c1
- (id)_localDictionaryDirectory;	// 0x36518959
- (id)_localDictionaryFileName;	// 0x36518991
- (id)_ntsLocalDictionary;	// 0x365189cd
- (BOOL)_ntsSaveLocalDictionary;	// 0x36518b11
- (void)_setLocalValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x36518c31
// declared property getter: - (long long)availableDiskSpace;	// 0x36518241
- (id)copyAccountDictionaryForDomain:(CFStringRef)domain;	// 0x36518381
- (CFStringRef)copyDeviceGUID;	// 0x365186b1
- (void *)copyITunesValueForKey:(CFStringRef)key usedDomain:(const CFStringRef *)domain;	// 0x3651870d
- (void *)copyValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x36518769
- (void)dealloc;	// 0x36518131
- (void)removeAccountFromDomain:(CFStringRef)domain;	// 0x3651879d
- (void)setValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x36518891
// declared property getter: - (long long)totalDiskCapacity;	// 0x365182e1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSMutableDictionary.h> // Unknown library


@interface NSMutableDictionary (MCUtilities)
- (void)MCDeepCopyEntriesFromDictionary:(id)dictionary;	// 0x362201b1
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)dictionary;	// 0x36220399
- (void)MCSetObjectIfNotNil:(id)aNil forKey:(id)key;	// 0x36220585
@end

@interface NSMutableDictionary (MCHacks)
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// 0x3625bc25
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSString.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortString;	// 0x346b1ed9
- (id)_copyWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b1e55
- (NSRange)_rangeWithoutInsignificantPrefix:(BOOL)prefix andCharacters:(BOOL)characters;	// 0x346b1b5d
- (id)copyWithoutInsignificantCharacters;	// 0x346b1ec5
- (id)copyWithoutInsignificantPrefixAndCharacters;	// 0x346b1eb1
@end

@interface NSString (MLSQLiteStatmentBindingAdditions)
- (void)MLBindToSQLiteStatement:(sqlite3_stmt *)sqliteStatement atPosition:(int)position;	// 0x346a78dd
@end

@interface NSString (ImportSanity)
- (id)sanitizedString;	// 0x3470b391
@end
